#include "extractordialog.h"
#include "ui_extractordialog.h"

#include <QDebug>

ExtractorDialog::ExtractorDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ExtractorDialog)
{
    ui->setupUi(this);

    QStackedWidget * embededStackedWidget = ui->embededStackedWidget;
    pFilePickerWidget = new FilePickerWidget(embededStackedWidget);
    pFileListWidget = new FileListWidget(embededStackedWidget);

    embededStackedWidget->addWidget(pFileListWidget);
    embededStackedWidget->addWidget(pFilePickerWidget);
    embededStackedWidget->setCurrentWidget(pFilePickerWidget);
}

void ExtractorDialog::onFileSelected(QStringList fileNames) {
    qDebug() << "file names: " << fileNames;
}

void ExtractorDialog::onFolderSelected(QString path) {
    qDebug() << "path: " << path;
}

ExtractorDialog::~ExtractorDialog()
{
    delete ui;
}

