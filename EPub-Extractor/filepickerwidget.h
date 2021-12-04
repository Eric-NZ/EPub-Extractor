#ifndef FILEPICKERWIDGET_H
#define FILEPICKERWIDGET_H

#include <QWidget>

#include <QDebug>
#include <QMenu>

namespace Ui {
class FilePickerWidget;
}

class FilePickerWidget : public QWidget
{
    Q_OBJECT

public:
    explicit FilePickerWidget(QWidget *parent = nullptr);
    ~FilePickerWidget();

private:
    Ui::FilePickerWidget *ui;
    QMenu * pMenu;

private slots:
    void selectSingleFile();
    void selectFromFolder();
};

#endif // FILEPICKERWIDGET_H
