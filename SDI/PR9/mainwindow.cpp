#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Song.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_actionCreate_2_triggered()
{
    if (ui->lineEdit_id->text().isEmpty() &&
        ui->lineEdit_name->text().isEmpty() &&
        ui->lineEdit_author->text().isEmpty() &&
        ui->lineEdit_album->text().isEmpty() &&
        ui->lineEdit_genre->text().isEmpty() &&
        ui->lineEdit_lyric->text().isEmpty() &&
        ui->lineEdit_languige->text().isEmpty() &&
        ui->lineEdit_duration->text().isEmpty() &&
        ui->lineEdit_year->text().isEmpty())
    {
        QMessageBox::information(nullptr, "Пусте полк", "Введіть всі поля");
    }
    else{
        Song song(ui->lineEdit_id->text().toInt(),
                  ui->lineEdit_name->text().toStdString(),
                  ui->lineEdit_author->text().toStdString(),
                  ui->lineEdit_album->text().toStdString(),
                  ui->lineEdit_genre->text().toStdString(),
                  ui->lineEdit_lyric->text().toStdString(),
                  ui->lineEdit_languige->text().toStdString(),
                  ui->lineEdit_year->text().toInt(),
                  ui->lineEdit_duration->text().toInt());
QMessageBox::information(nullptr, "Object song", QString::fromStdString(song.toString()));
    }



}








void MainWindow::on_actionExit_triggered()
{
    close();
}


void MainWindow::on_actionOutput_triggered()
{

}

