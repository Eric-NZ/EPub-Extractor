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
    this->filenames.clear();
    this->filenames.append(filenames);
    showSelectedFiles();
}

void ExtractorDialog::onFolderSelected(QString path) {
    fetchFilenamesInFolder(path);
    showSelectedFiles();
}

void ExtractorDialog::showSelectedFiles() {
    if (this->filenames.size() <=0)
        return;

    connect(this, SIGNAL(showFiles(QStringList)), pFileListWidget, SLOT(onShowFiles(QStringList)));
    switchToList();
    emit showFiles(this->filenames);
}

void ExtractorDialog::switchToList(){
    if (this->filenames.size() > 0)
        embededStackedWidget->setCurrentWidget(pFileListWidget);
}

void ExtractorDialog::fetchFilenamesInFolder(QString path) {
    QStringList filenames = QDir(path).entryList(QStringList() << "*.epub", QDir::Files);

    this->filenames.clear();
    for (int i = 0; i < filenames.size(); i++) {
        this->filenames += path + "/" + filenames[i];
    }
}

ExtractorDialog::~ExtractorDialog()
{
    delete ui;
}

