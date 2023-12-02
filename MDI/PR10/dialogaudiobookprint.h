#ifndef DIALOGAUDIOBOOKPRINT_H
#define DIALOGAUDIOBOOKPRINT_H

#include <QDialog>
#include <QSqlTableModel>
#include "audiobook.h"
#include "sqlitedbmanager.h"
class QSqlTableModel;
class DBManager;
namespace Ui {
class DialogAudiobookPrint;
}

class DialogAudiobookPrint : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAudiobookPrint(DBManager* dbManager,QWidget *parent = nullptr);
    ~DialogAudiobookPrint();
public slots:
    void on_cretedAudiobook(Audiobook *Audiobook);
private:
    Ui::DialogAudiobookPrint *ui;
    DBManager* dbManager;
    QSqlTableModel* model;
private:
    void setupModel(const QString& tableName, const QStringList& headers);
    void createUI();
};
#endif // DIALOGAUDIOBOOKPRINT_H
