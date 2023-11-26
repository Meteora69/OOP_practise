#include "dialogaudiobookcreate.h"
#include "ui_dialogaudiobookcreate.h"

#include <QMessageBox>
DialogAudiobookCreate::DialogAudiobookCreate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAudiobookCreate)
{
    ui->setupUi(this);
}

DialogAudiobookCreate::~DialogAudiobookCreate()
{
    delete ui;
}

void DialogAudiobookCreate::on_pushButton_clicked()
{
    if (ui->lineEdit_id->text().isEmpty() &&
        ui->lineEdit_name->text().isEmpty() &&
        ui->lineEdit_author->text().isEmpty() &&
        ui->lineEdit_year_4->text().isEmpty() &&
        ui->lineEdit_audioFormat->text().isEmpty() &&
        ui->lineEdit_publisher->text().isEmpty() &&
        ui->lineEdit_duration->text().isEmpty() &&
        ui->lineEdit_year->text().isEmpty())
    {
        QMessageBox::information(nullptr, "Пусте полк", "Введіть всі поля");
    }
    else{
      Audiobook* audiobook =new Audiobook(
                  ui->lineEdit_id->text().toInt(),
                  ui->lineEdit_name->text(),
                  ui->lineEdit_author->text(),
                  ui->lineEdit_publisher->text(),
                  ui->lineEdit_year->text().toInt(),
                  ui->lineEdit_duration->text().toInt(),
                  ui->lineEdit_year_4->text().toInt(),
                  ui->lineEdit_audioFormat->text());
        emit createdAudiobook(audiobook);
        this->accept();

}
}

