#include <QApplication>
#include <QIcon>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setWindowIcon(QIcon("../utils/icon.png"));

    MainWindow w;
    w.show();

    return app.exec();
}
