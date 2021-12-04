#include "filepickerwidget.h"
#include "ui_filepickerwidget.h"

FilePickerWidget::FilePickerWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FilePickerWidget)
{
    ui->setupUi(this);

//    qDebug()<<"parent: "<<parent->parent();
    pMenu = new QMenu(this);
    pMenu->addAction("one");
    pMenu->addAction("two");
    pMenu->addAction("three");

    ui->buttonSelectFile->setMenu(pMenu);
}

FilePickerWidget::~FilePickerWidget()
{
    delete pMenu;
    delete ui;
}
