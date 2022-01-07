#ifndef MW_MUSICRENAMERAPP_H
#define MW_MUSICRENAMERAPP_H

#include <QMainWindow>
#include <QtWidgets>
#include <QAction>
#include <QFileDialog>
#include <QMessageBox>

//to do:
//add Qstr will contain var from slotChooseFile //done
//   func createCentralWidget
//add func that will work with Qstr
//add central Wgt, with 2 parts. Left part contain list of names before renaming,
//right part contain result. Maybe ist possible to to come up with new ideas
//Something wrong with central widget. It's doesn't display

QT_BEGIN_NAMESPACE
namespace Ui { class MW_MusicRenamerApp; }
QT_END_NAMESPACE

class MW_MusicRenamerApp : public QMainWindow
{
    Q_OBJECT
private:
    //var's and const's
    QStringList m_strl_fileNames_temp = (QStringList() << "str1" << "str2" << "str3"); ; //feels like bad decision, its possible to do way much better
    //functions
    QToolBar *createRightToolBar();
    QWidget *createCentralWidget();

public:
    MW_MusicRenamerApp(QWidget *parent = nullptr);
    ~MW_MusicRenamerApp();

private:
    Ui::MW_MusicRenamerApp *ui;

public slots:
    void slotChooseFile();
};
#endif // MW_MUSICRENAMERAPP_H
