#include "mainwindow.h"

#include <QApplication>
#include <QFile>
#include <QTextStream>

#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile file("/style.qss"); // Usa il percorso corretto
    if (file.open(QFile::ReadOnly)) {
        QString styleSheet = QLatin1String(file.readAll());
        std::cout << "I'm here" << std::endl;
        a.setStyleSheet(styleSheet); // Applica lo stile
        file.close();
    }

    MainWindow w;
    w.show();
    return a.exec();
}
