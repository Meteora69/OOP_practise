#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialogcreatesong.h"
#include "dialogprintsong.h"
#include "dialogaudiobookcreate.h"
#include "dialogaudiobookprint.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_button_createSong_clicked();

    void on_button_printSong_clicked();

    void on_button_createAudiobook_clicked();

    void on_button_printAudiobook_clicked();

private:
    Ui::MainWindow *ui;
    DialogCreateSong* dialogCreateSong;
    DialogPrintSong* dialogPrintSong;
    DialogAudiobookCreate* dialogAudiobookCreate;
    DialogAudiobookPrint* dialogAudiobookPrint;
};
#endif // MAINWINDOW_H
