#include "mw_musicrenamerapp.h"
#include "ui_mw_musicrenamerapp.h"

MW_MusicRenamerApp::MW_MusicRenamerApp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MW_MusicRenamerApp)
{
    ui->setupUi(this);
}

MW_MusicRenamerApp::~MW_MusicRenamerApp()
{
    delete ui;
}

