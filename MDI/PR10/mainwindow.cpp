#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dbmanager.h"
#include "sqlitedbmanager.h"

MainWindow::MainWindow(DBManager* dbManager,  QWidget* parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow), dbManager(dbManager)
{
    ui->setupUi(this);

    // Initialize the model for data representation with column names

    dialogCreateSong = new DialogCreateSong(this);
    dialogCreateSong->setModal(true);
    dialogPrintSong = new DialogPrintSong(this->dbManager, this);
    dialogPrintSong->setModal(false);
    dialogAudiobookCreate = new DialogAudiobookCreate(this);
    dialogAudiobookCreate->setModal(true);
    dialogAudiobookPrint = new DialogAudiobookPrint(this->dbManager, this);
    dialogAudiobookPrint->setModal(false);
    connect(dialogCreateSong, &DialogCreateSong::createdSong, dialogPrintSong, &DialogPrintSong::on_cretedSong);
    connect(dialogAudiobookCreate, &DialogAudiobookCreate::createdAudiobook, dialogAudiobookPrint, &DialogAudiobookPrint::on_cretedAudiobook);
}


MainWindow::~MainWindow()
{
    delete ui;
    delete this->dialogCreateSong;
    delete this->dialogPrintSong;
    delete this->dialogAudiobookCreate;
    delete this->dialogAudiobookPrint;
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

