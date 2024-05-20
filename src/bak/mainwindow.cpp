#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Initialize terminal
    terminal = new QPlainTextEdit(this);
    terminal->setReadOnly(true);
    ui->verticalLayout->addWidget(terminal);

    // Initialize Python interpreter
    Py_Initialize();
}

MainWindow::~MainWindow()
{
    Py_Finalize();
    delete ui;
}

void MainWindow::on_runButton_clicked()
{
    QString code = ui->codeEdit->toPlainText();  // Assuming you have a QTextEdit for code input
    executePythonCode(code);
}

void MainWindow::executePythonCode(const QString &code)
{
    PyRun_SimpleString(code.toUtf8().constData());

    // For simplicity, we do not capture the output in this example.
    // In a real application, you would need to redirect stdout and stderr.
}

