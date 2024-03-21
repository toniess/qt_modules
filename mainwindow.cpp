#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent, QNetworkAccessManager *nam, QSqlDatabase *db)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_networkManager(nam)
    , m_database(db)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
