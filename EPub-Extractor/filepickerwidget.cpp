#include "filepickerwidget.h"
#include "ui_filepickerwidget.h"

#include <QDebug>
#include <QFileDialog>

FilePickerWidget::FilePickerWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FilePickerWidget)
{
    ui->setupUi(this);

    pMenu = new QMenu(this);
    QAction * pActionSelectFile = pMenu->addAction("Select File");
    QAction * pActionFromFolder = pMenu->addAction("From Folder");
    // TODO: pMenu->addAction("From Cloud Drive");

    ui->buttonSelectFile->setMenu(pMenu);

    connect(pActionSelectFile, SIGNAL(triggered()), this, SLOT(selectFile()));
    connect(pActionFromFolder, SIGNAL(triggered()), this, SLOT(selectFromFolder()));
}

void FilePickerWidget::selectFile(){
    connect(this, SIGNAL(fileSelected(QStringList)), parent()->parent(), SLOT(onFileSelected(QStringList)));
    QStringList filenames = QFileDialog::getOpenFileNames(NULL, "Select *.epub File", "/", "*.epub");
    emit fileSelected(filenames);
}

void FilePickerWidget::selectFromFolder(){
    connect(this, SIGNAL(folderSelected(QString)), parent()->parent(), SLOT(onFolderSelected(QString)));
    QString path = QFileDialog::getExistingDirectory(NULL, "Select Folder", "/", QFileDialog::ShowDirsOnly);
    emit folderSelected(path);
}

FilePickerWidget::~FilePickerWidget()
{
    delete pMenu;
    delete ui;
}
