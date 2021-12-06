#ifndef EXTRACTORDIALOG_H
#define EXTRACTORDIALOG_H

#include <QDialog>
#include <QStackedWidget>

#include "filelistwidget.h"
#include "filepickerwidget.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ExtractorDialog; }
QT_END_NAMESPACE

class ExtractorDialog : public QDialog
{
    Q_OBJECT

public:
    ExtractorDialog(QWidget *parent = nullptr);
    ~ExtractorDialog();

public slots:
    void onFileSelected(QStringList fileNames);
    void onFolderSelected(QString path);

private:
    Ui::ExtractorDialog *ui;
    QStackedWidget * embededStackedWidget;

    FileListWidget * pFileListWidget;
    FilePickerWidget * pFilePickerWidget;


    void switchToList();
};
#endif // EXTRACTORDIALOG_H
