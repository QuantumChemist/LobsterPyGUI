#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <Python.h> // Include Python headers first

#include <QMainWindow>
#include <QPlainTextEdit>

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
    void on_runButton_clicked();

private:
    Ui::MainWindow *ui;
    QPlainTextEdit *terminal;

    void executePythonCode(const QString &code);
};

#endif // MAINWINDOW_H

