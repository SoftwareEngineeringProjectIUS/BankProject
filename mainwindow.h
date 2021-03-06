#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QtSql>
#include <QFileInfo>
#include <QSqlDatabase>
#include <QMessageBox>
#include "bankemployee.h"
#include "administrator.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btnClear_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase myDB;
};

#endif // MAINWINDOW_H
