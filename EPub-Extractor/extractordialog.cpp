#include "extractordialog.h"
#include "ui_extractordialog.h"

ExtractorDialog::ExtractorDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ExtractorDialog)
{
    ui->setupUi(this);

}

ExtractorDialog::~ExtractorDialog()
{
    delete ui;
}

