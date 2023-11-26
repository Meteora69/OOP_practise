#include "dialogcreatesong.h"
#include "ui_dialogcreatesong.h"

#include <QMessageBox>
DialogCreateSong::DialogCreateSong(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogCreateSong)
{
    ui->setupUi(this);
}

DialogCreateSong::~DialogCreateSong()
{
    delete ui;
}

void DialogCreateSong::on_pushButton_clicked()
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
        Song* song =new Song(ui->lineEdit_id->text().toInt(),
                  ui->lineEdit_name->text(),
                  ui->lineEdit_author->text(),
                  ui->lineEdit_album->text(),
                  ui->lineEdit_genre->text(),
                  ui->lineEdit_lyric->text(),
                  ui->lineEdit_languige->text(),
                  ui->lineEdit_year->text().toInt(),
                  ui->lineEdit_duration->text().toInt());
        emit createdSong(song);
        this->accept();

}
}
