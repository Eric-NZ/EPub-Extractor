#include "filelistwidget.h"
#include "ui_filelistwidget.h"

FileListWidget::FileListWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FileListWidget)
{
    ui->setupUi(this);

    this->pFilenames = new QStringList();
}

void FileListWidget::onShowFiles(QStringList filenames) {
    qDebug() << "files on the table: " << filenames;
}

FileListWidget::~FileListWidget()
{
    delete this->pFilenames;
    delete ui;
}
