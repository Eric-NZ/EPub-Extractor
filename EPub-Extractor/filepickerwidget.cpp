#include "filepickerwidget.h"
#include "ui_filepickerwidget.h"

#include <QDebug>

FilePickerWidget::FilePickerWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FilePickerWidget)
{
    ui->setupUi(this);

//    qDebug()<<"parent: "<<parent->parent();
    pMenu = new QMenu(this);
    QAction * pActionSingleFile = pMenu->addAction("Single File");
    QAction * pActionFromFolder = pMenu->addAction("From Folder");
    // TODO: pMenu->addAction("From Cloud Drive");

    ui->buttonSelectFile->setMenu(pMenu);

    connect(pActionSingleFile, SIGNAL(triggered()), this, SLOT(selectSingleFile()));
    connect(pActionFromFolder, SIGNAL(triggered()), this, SLOT(selectFromFolder()));
}

void FilePickerWidget::selectSingleFile(){
    qDebug("selectSingleFile");
}

void FilePickerWidget::selectFromFolder(){
    qDebug("selectFromFolder");
}

FilePickerWidget::~FilePickerWidget()
{
    delete pMenu;
    delete ui;
}
