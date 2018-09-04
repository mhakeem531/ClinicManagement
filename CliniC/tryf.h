#ifndef TRYF_H
#define TRYF_H

#include <QMainWindow>

namespace Ui {
class Tryf;
}

class Tryf : public QMainWindow
{
    Q_OBJECT

public:
    explicit Tryf(QWidget *parent = 0);
    ~Tryf();

private:
    Ui::Tryf *ui;
};

#endif // TRYF_H
