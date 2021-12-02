#ifndef EXTRACTORDIALOG_H
#define EXTRACTORDIALOG_H

#include <QDialog>
#include "ui_filelistform.h"
#include "ui_filepickerform.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ExtractorDialog; }
QT_END_NAMESPACE

class ExtractorDialog : public QDialog
{
    Q_OBJECT

public:
    ExtractorDialog(QWidget *parent = nullptr);
    ~ExtractorDialog();

private:
    Ui::ExtractorDialog *ui;
};
#endif // EXTRACTORDIALOG_H
