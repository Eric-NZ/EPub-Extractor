#ifndef FILEPICKERWIDGET_H
#define FILEPICKERWIDGET_H

#include <QWidget>

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
};

#endif // FILEPICKERWIDGET_H
