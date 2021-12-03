#include "filelistwidget.h"
#include "ui_filelistwidget.h"

FileListWidget::FileListWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FileListWidget)
{
    ui->setupUi(this);
}

FileListWidget::~FileListWidget()
{
    delete ui;
}
