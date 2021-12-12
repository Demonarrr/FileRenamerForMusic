#ifndef MW_MUSICRENAMERAPP_H
#define MW_MUSICRENAMERAPP_H

#include <QMainWindow>
#include <QtWidgets>

QT_BEGIN_NAMESPACE
namespace Ui { class MW_MusicRenamerApp; }
QT_END_NAMESPACE

class MW_MusicRenamerApp : public QMainWindow
{
    Q_OBJECT
private:
    void createRightToolBar();
    void createCentralWidget();



public:
    MW_MusicRenamerApp(QWidget *parent = nullptr);
    ~MW_MusicRenamerApp();

private:
    Ui::MW_MusicRenamerApp *ui;

public slots:
    void slotChooseFile();

};
#endif // MW_MUSICRENAMERAPP_H
