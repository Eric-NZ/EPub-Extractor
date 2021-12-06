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

public slots:
    void onShowFiles(QStringList filenames);

private:
    Ui::FileListWidget *ui;

    QStringList * pFilenames;
};

#endif // FILELISTWIDGET_H
