#include "mw_musicrenamerapp.h"
#include "ui_mw_musicrenamerapp.h"

MW_MusicRenamerApp::MW_MusicRenamerApp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MW_MusicRenamerApp)
{
   // ui->setupUi(this);//for the moment of writing idk what it's, so don't delete
    //setup main window settings
    //using functions for setup, set and change parts of main window
    addToolBar(Qt::RightToolBarArea, createRightToolBar());
    setCentralWidget(createCentralWidget());

}

MW_MusicRenamerApp::~MW_MusicRenamerApp()
{
    delete ui;
}

//methods:
QWidget *MW_MusicRenamerApp::createCentralWidget()
{
    QWidget *centralWgt = new QWidget(); //this one will be returned

    //creating left part of central widget
    QStringListModel *strlm_fileNames = new QStringListModel(m_strl_fileNames_temp, 0);
    QListView *lv_fileNames = new QListView();
    lv_fileNames->setModel(strlm_fileNames);
    //creating right part of central widget
    QStringListModel *strlm_temp = new  QStringListModel(m_strl_fileNames_temp, 0);
    QListView *lv_renamingResult = new QListView();
    lv_renamingResult->setModel(strlm_temp);

    //layout setup
    QHBoxLayout *hbxl_centralWgtLayout = new QHBoxLayout();
    hbxl_centralWgtLayout->addWidget(lv_fileNames);
    hbxl_centralWgtLayout->addWidget(lv_renamingResult);
    hbxl_centralWgtLayout->setSpacing(15);

    centralWgt->setLayout(hbxl_centralWgtLayout);

    centralWgt->show();

    return centralWgt;
}

QToolBar *MW_MusicRenamerApp::createRightToolBar()
{
    QToolBar *rightToolBar = new QToolBar("Right Tool Bar"); //this one will be returned
    //creats and connect button for pick file
    QPushButton *pbtn_chooseFile = new QPushButton("Choose file...");
    connect(pbtn_chooseFile,
                SIGNAL(clicked()),
                SLOT(slotChooseFile())
            );

    QVBoxLayout *vbxl_rightTB = new QVBoxLayout(); //needed for more beatiful buttons placing
    vbxl_rightTB->addWidget(pbtn_chooseFile);
    vbxl_rightTB->setSpacing(5);

    QWidget *wgt_container = new QWidget(); //needed for more beatiful buttons placing
    wgt_container->setLayout(vbxl_rightTB);

    rightToolBar->addWidget(wgt_container);

    ;return rightToolBar;
}

//slots:

//giving list of files for the left part of central widget
void MW_MusicRenamerApp::slotChooseFile()
{
   m_strl_fileNames_temp = QFileDialog::getOpenFileNames(0, "Choose file for rename", "");
   this->setCentralWidget(createCentralWidget()); //refresh the lists in central wgt

}
