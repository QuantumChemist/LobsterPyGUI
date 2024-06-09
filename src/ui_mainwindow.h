/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *terminal;
    QLabel *labelCurrentDir;
    QPushButton *buttonOpenDirectory;
    QPushButton *buttonCreateInputs;
    QPushButton *buttonDescription;
    QPushButton *buttonDescriptionQuality;
    QPushButton *buttonPlotAutomatic;
    QPushButton *buttonPlotAutomaticInteractive;
    QPushButton *buttonPlotDos;
    QPushButton *buttonHelp;
    QLineEdit *cli;
    QPushButton *runButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 400);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        terminal = new QPlainTextEdit(centralwidget);
        terminal->setObjectName(QString::fromUtf8("terminal"));

        verticalLayout->addWidget(terminal);

        labelCurrentDir = new QLabel(centralwidget);
        labelCurrentDir->setObjectName(QString::fromUtf8("labelCurrentDir"));

        verticalLayout->addWidget(labelCurrentDir);

        buttonOpenDirectory = new QPushButton(centralwidget);
        buttonOpenDirectory->setObjectName(QString::fromUtf8("buttonOpenDirectory"));

        verticalLayout->addWidget(buttonOpenDirectory);

        buttonCreateInputs = new QPushButton(centralwidget);
        buttonCreateInputs->setObjectName(QString::fromUtf8("buttonCreateInputs"));

        verticalLayout->addWidget(buttonCreateInputs);

        buttonDescription = new QPushButton(centralwidget);
        buttonDescription->setObjectName(QString::fromUtf8("buttonDescription"));

        verticalLayout->addWidget(buttonDescription);

        buttonDescriptionQuality = new QPushButton(centralwidget);
        buttonDescriptionQuality->setObjectName(QString::fromUtf8("buttonDescriptionQuality"));

        verticalLayout->addWidget(buttonDescriptionQuality);

        buttonPlotAutomatic = new QPushButton(centralwidget);
        buttonPlotAutomatic->setObjectName(QString::fromUtf8("buttonPlotAutomatic"));

        verticalLayout->addWidget(buttonPlotAutomatic);

        buttonPlotAutomaticInteractive = new QPushButton(centralwidget);
        buttonPlotAutomaticInteractive->setObjectName(QString::fromUtf8("buttonPlotAutomaticInteractive"));

        verticalLayout->addWidget(buttonPlotAutomaticInteractive);

        buttonPlotDos = new QPushButton(centralwidget);
        buttonPlotDos->setObjectName(QString::fromUtf8("buttonPlotDos"));

        verticalLayout->addWidget(buttonPlotDos);

        buttonHelp = new QPushButton(centralwidget);
        buttonHelp->setObjectName(QString::fromUtf8("buttonHelp"));

        verticalLayout->addWidget(buttonHelp);

        cli = new QLineEdit(centralwidget);
        cli->setObjectName(QString::fromUtf8("cli"));

        verticalLayout->addWidget(cli);

        runButton = new QPushButton(centralwidget);
        runButton->setObjectName(QString::fromUtf8("runButton"));

        verticalLayout->addWidget(runButton);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "LobsterPyGUI", nullptr));
        labelCurrentDir->setText(QCoreApplication::translate("MainWindow", "Open files", nullptr));
        buttonOpenDirectory->setText(QCoreApplication::translate("MainWindow", "Open...", nullptr));
        buttonCreateInputs->setText(QCoreApplication::translate("MainWindow", "Create LOBSTER input files", nullptr));
        buttonDescription->setText(QCoreApplication::translate("MainWindow", "Automatic description of LOBSTER run", nullptr));
        buttonDescriptionQuality->setText(QCoreApplication::translate("MainWindow", "Description of LOBSTER run quality", nullptr));
        buttonPlotAutomatic->setText(QCoreApplication::translate("MainWindow", "Plot COHPs, COBIs or COOPs automatically", nullptr));
        buttonPlotAutomaticInteractive->setText(QCoreApplication::translate("MainWindow", "Create interactive plot of COHPs, COBIs or COOPs automatically", nullptr));
        buttonPlotDos->setText(QCoreApplication::translate("MainWindow", "Plot LOBSTER DOS", nullptr));
        buttonHelp->setText(QCoreApplication::translate("MainWindow", "LobsterPy help", nullptr));
        cli->setText(QCoreApplication::translate("MainWindow", "cli", nullptr));
        runButton->setText(QCoreApplication::translate("MainWindow", "run cli command", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
