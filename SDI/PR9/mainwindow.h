#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class mainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_actionCreate_2_triggered();

    void on_actionExit_triggered();

    void on_actionOutput_triggered();

private:
    Ui::mainWindow *ui;
};
#endif // MAINWINDOW_H
