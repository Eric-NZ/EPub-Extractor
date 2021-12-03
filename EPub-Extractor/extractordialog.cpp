#include "extractordialog.h"
#include "ui_extractordialog.h"

ExtractorDialog::ExtractorDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ExtractorDialog)
{
    ui->setupUi(this);

    QStackedWidget * embededStackedWidget = ui->embededStackedWidget;
    filePickerWidget = new FilePickerWidget(embededStackedWidget);
    fileListWidget = new FileListWidget(embededStackedWidget);

    embededStackedWidget->addWidget(fileListWidget);
    embededStackedWidget->addWidget(filePickerWidget);
    embededStackedWidget->setCurrentWidget(filePickerWidget);
}

ExtractorDialog::~ExtractorDialog()
{
    delete ui;
}

