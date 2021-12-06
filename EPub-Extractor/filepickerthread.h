#ifndef FILEPICKERTHREAD_H
#define FILEPICKERTHREAD_H

#include <QThread>

class FilePickerThread : public QThread
{
    Q_OBJECT
public:
    explicit FilePickerThread(QThread *parent = nullptr);

protected:
    void run() override;

signals:

};

#endif // FILEPICKERTHREAD_H
