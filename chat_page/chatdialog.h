#ifndef CHATDIALOG_H
#define CHATDIALOG_H

#include <QDialog>

namespace Ui {
class chatdialog;
}

class chatdialog : public QDialog
{
    Q_OBJECT

public:
    explicit chatdialog(QWidget *parent = nullptr);
    ~chatdialog();

private:
    Ui::chatdialog *ui;
};

#endif // CHATDIALOG_H
