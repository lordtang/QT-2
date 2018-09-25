#ifndef EXPR_H
#define EXPR_H

#include <QDialog>
#include "model.h"
#include <QString>

namespace Ui {
class expr;
}

class expr : public QDialog
{
    Q_OBJECT

public:
    explicit expr(QWidget *parent = nullptr);
    ~expr();
private slots:
    void getBtn_zero();
    void getBtn_one();
    void getBtn_two();
    void getBtn_three();

    void on_btn_plus_clicked();

    void on_btn_four_clicked();

    void on_btn_five_clicked();

    void on_btn_six_clicked();

    void on_btn_seven_clicked();

    void on_btn_eight_clicked();

    void on_btn_nine_clicked();

    void on_btn_sub_clicked();

    void on_btn_mul_clicked();

    void on_btn_div_clicked();

    void on_btn_equal_clicked();

    void on_btn_clear_clicked();

private:
    QString temp;
    Ui::expr *ui;
    model *mode;
};

#endif // EXPR_H
