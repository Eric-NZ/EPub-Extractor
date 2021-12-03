#include "filepickerwidget.h"
#include "ui_filepickerwidget.h"

FilePickerWidget::FilePickerWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FilePickerWidget)
{
    ui->setupUi(this);
}

FilePickerWidget::~FilePickerWidget()
{
    delete ui;
}
