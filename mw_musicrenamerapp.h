#ifndef MW_MUSICRENAMERAPP_H
#define MW_MUSICRENAMERAPP_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MW_MusicRenamerApp; }
QT_END_NAMESPACE

class MW_MusicRenamerApp : public QMainWindow
{
    Q_OBJECT

public:
    MW_MusicRenamerApp(QWidget *parent = nullptr);
    ~MW_MusicRenamerApp();

private:
    Ui::MW_MusicRenamerApp *ui;
};
#endif // MW_MUSICRENAMERAPP_H
