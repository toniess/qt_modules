#include <QCoreApplication>
#include <QNetworkAccessManager>
#include <QSqlDatabase>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QNetworkAccessManager networkNamager;
    QSqlDatabase database;

    return a.exec();
}
