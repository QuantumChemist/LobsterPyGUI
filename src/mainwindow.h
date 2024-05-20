#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPlainTextEdit>
#include <QProcess>
#include <QLineEdit>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void updateLobsterCommand(const QString& arguments);
    void runCurrentLobsterCommand();
    void runLobsterCommand(const QString& command);
    void runCommandCreateInputs();
    void runCommandDescription();
    void runCommandDescriptionQuality();
    void runCommandPlotAutomatic();
    void runCommandPlotAutomaticInteractive();
    void runCommandPlotDos();
    void runCommandHelp();
    void readOutput(); 
    void readError();
    void addOutSeparator();
    void addErrorSeparator();

private:
    Ui::MainWindow *ui;
    QProcess *process;
    QString currentLobsterCommand;
};

#endif // MAINWINDOW_H

