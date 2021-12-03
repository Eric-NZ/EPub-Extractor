#ifndef FILELISTWIDGET_H
#define FILELISTWIDGET_H

#include <QWidget>

namespace Ui {
class FileListWidget;
}

class FileListWidget : public QWidget
{
    Q_OBJECT

public:
    explicit FileListWidget(QWidget *parent = nullptr);
    ~FileListWidget();

private:
    Ui::FileListWidget *ui;
};

#endif // FILELISTWIDGET_H
