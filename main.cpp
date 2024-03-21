#include "mainwindow.h"

#include <QApplication>
#include <QNetworkAccessManager>
#include <QSqlDatabase>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QNetworkAccessManager networkNamager;
    QSqlDatabase database;

    MainWindow w(nullptr, &networkNamager, &database);
    w.show();
    return a.exec();
}
