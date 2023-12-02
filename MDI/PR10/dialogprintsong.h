#ifndef DIALOGPRINTSONG_H
#define DIALOGPRINTSONG_H

#include <QDialog>
#include <QSqlTableModel>
#include "song.h"
#include "sqlitedbmanager.h"
class QSqlTableModel;

class DBManager;
namespace Ui {
class DialogPrintSong;
}

class DialogPrintSong : public QDialog
{
    Q_OBJECT

public:
    explicit DialogPrintSong(DBManager* dbManager,QWidget *parent = nullptr);
    DialogPrintSong() = default;
    ~DialogPrintSong();

public slots:
    void on_cretedSong(Song *song);
private:
    Ui::DialogPrintSong *ui;
    DBManager* dbManager;
    QSqlTableModel* model;
private:
    void setupModel(const QString& tableName, const QStringList& headers);
    void createUI();

};

#endif // DIALOGPRINTSONG_H
