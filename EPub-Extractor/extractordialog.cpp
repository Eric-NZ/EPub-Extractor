#include "extractordialog.h"
#include "ui_extractordialog.h"

#include <QDebug>
#include <QDir>

ExtractorDialog::ExtractorDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ExtractorDialog)
{
    ui->setupUi(this);

    embededStackedWidget = ui->embededStackedWidget;
    pFilePickerWidget = new FilePickerWidget(embededStackedWidget);
    pFileListWidget = new FileListWidget(embededStackedWidget);

    embededStackedWidget->addWidget(pFileListWidget);
    embededStackedWidget->addWidget(pFilePickerWidget);
    embededStackedWidget->setCurrentWidget(pFilePickerWidget);
}

void ExtractorDialog::onFileSelected(QStringList filenames) {
    this->filenames = filenames;
    switchToList();
}

void ExtractorDialog::onFolderSelected(QString path) {
    fetchFilenamesInFolder(path);
    switchToList();
}

void ExtractorDialog::switchToList(){
    embededStackedWidget->setCurrentWidget(pFileListWidget);
}

void ExtractorDialog::fetchFilenamesInFolder(QString path) {
    QStringList filenames = QDir(path).entryList(QStringList() << "*.epub", QDir::Files);

    for (int i = 0; i < filenames.size(); i++) {
        this->filenames += path + "/" + filenames[i];
    }
}

ExtractorDialog::~ExtractorDialog()
{
    delete ui;
}

