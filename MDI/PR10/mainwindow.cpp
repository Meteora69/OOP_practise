#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dialogCreateSong = new DialogCreateSong();
    dialogCreateSong->setModal(true);
    dialogPrintSong = new DialogPrintSong();
    dialogPrintSong->setModal(false);
    dialogAudiobookCreate = new DialogAudiobookCreate();
    dialogAudiobookCreate->setModal(true);
    dialogAudiobookPrint = new  DialogAudiobookPrint();
    dialogAudiobookPrint->setModal(false);
     connect(dialogCreateSong,&DialogCreateSong::createdSong,dialogPrintSong,&DialogPrintSong::on_cretedSong);
     connect(dialogAudiobookCreate,&DialogAudiobookCreate::createdAudiobook,dialogAudiobookPrint,&DialogAudiobookPrint::on_cretedAudiobook);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete this ->dialogCreateSong;
    delete this ->dialogPrintSong;
    delete this ->dialogAudiobookCreate;
    delete this ->dialogAudiobookPrint;
}


void MainWindow::on_button_createSong_clicked()
{
    dialogCreateSong->show();
}


void MainWindow::on_button_printSong_clicked()
{
    dialogPrintSong->show();
}


void MainWindow::on_button_createAudiobook_clicked()
{
    dialogAudiobookCreate->show();

}
void MainWindow::on_button_printAudiobook_clicked()
{
    dialogAudiobookPrint->show();
}

