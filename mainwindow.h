#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QSqlQuery>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent, QNetworkAccessManager *nam, QSqlDatabase *db);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QNetworkAccessManager *m_networkManager;
    QSqlDatabase *m_database;
};
#endif // MAINWINDOW_H
