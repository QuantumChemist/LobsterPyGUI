#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , process(new QProcess(this))
{
    ui->setupUi(this);

    // Connect signals for standard output, error output, and process finished
    connect(process, &QProcess::readyReadStandardOutput, this, &MainWindow::readOutput);
    connect(process, &QProcess::readyReadStandardError, this, &MainWindow::readError);
    connect(ui->cli, &QLineEdit::textChanged, this, &MainWindow::updateLobsterCommand);
    connect(ui->runButton, &QPushButton::clicked, this, &MainWindow::runCurrentLobsterCommand);

    
    ///////////////////LobsterPy Commands///////////////////
    connect(ui->buttonCreateInputs, &QPushButton::clicked, this, &MainWindow::runCommandCreateInputs);
    connect(ui->buttonDescription, &QPushButton::clicked, this, &MainWindow::runCommandDescription);
    connect(ui->buttonDescriptionQuality, &QPushButton::clicked, this, &MainWindow::runCommandDescriptionQuality);
    connect(ui->buttonPlotAutomatic, &QPushButton::clicked, this, &MainWindow::runCommandPlotAutomatic);
    connect(ui->buttonPlotAutomaticInteractive, &QPushButton::clicked, this, &MainWindow::runCommandPlotAutomaticInteractive);
    connect(ui->buttonPlotDos, &QPushButton::clicked, this, &MainWindow::runCommandPlotDos);
    connect(ui->buttonHelp, &QPushButton::clicked, this, &MainWindow::runCommandHelp);
    ////////////////////////////////////////////////////////

    ui->terminal->setReadOnly(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

///////////////////LobsterPy Commands///////////////////
void MainWindow::updateLobsterCommand(const QString& arguments)
{
    // Update the current LobsterPy command
    currentLobsterCommand = arguments;
}

void MainWindow::runCurrentLobsterCommand()
{
    // Check if the LobsterPy command is not empty
    if (!currentLobsterCommand.isEmpty()) {
        // Prepare the argument list
        QStringList args;
        args = currentLobsterCommand.split(' ', Qt::SkipEmptyParts);

        // Start the process
        process->start("lobsterpy", args);
    }
}
void MainWindow::runLobsterCommand(const QString& command)
{
    // Prepare the argument list
    QStringList args;
    args << command;

    // Start the process
    process->start("lobsterpy", args);
}

void MainWindow::runCommandCreateInputs()
{
    runLobsterCommand("create-inputs");
}

void MainWindow::runCommandDescription()
{
    runLobsterCommand("description");
}

void MainWindow::runCommandDescriptionQuality()
{
    runLobsterCommand("description-quality");
}

void MainWindow::runCommandPlotAutomatic()
{
    runLobsterCommand("plot-automatic");
}

void MainWindow::runCommandPlotAutomaticInteractive()
{
    runLobsterCommand("plot-automatic-ia");
}

void MainWindow::runCommandPlotDos()
{
    runLobsterCommand("plot-dos");
}

void MainWindow::runCommandHelp()
{
    runLobsterCommand("--help");
}

////////////////////////////////////////////////////////

void MainWindow::readOutput()
{
    QByteArray data = process->readAllStandardOutput();
    addOutSeparator(); 
    ui->terminal->appendPlainText(QString::fromUtf8(data));
}

void MainWindow::readError()
{
    QByteArray errorData = process->readAllStandardError();
    addErrorSeparator(); 
    ui->terminal->appendPlainText(QString::fromUtf8(errorData));
}

void MainWindow::addOutSeparator()
{
    ui->terminal->appendPlainText(QString("---------------std-out-------------------------"));
}

void MainWindow::addErrorSeparator()
{
    ui->terminal->appendPlainText(QString("---------------std-err-------------------------"));
}



