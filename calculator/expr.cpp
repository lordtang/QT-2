#include "expr.h"
#include "ui_expr.h"

expr::expr(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::expr)
{
    ui->setupUi(this);
    connect(this->ui->btn_zero,SIGNAL(clicked(bool)),this,SLOT(getBtn_zero()));
    connect(this->ui->btn_one,SIGNAL(clicked(bool)),this,SLOT(getBtn_one()));
    connect(this->ui->btn_two,SIGNAL(clicked(bool)),this,SLOT(getBtn_two()));
    connect(this->ui->btn_three,SIGNAL(clicked(bool)),this,SLOT(getBtn_three()));
    this->mode = new model;
    this->temp = "";
    QString ex= this->ui->btn_plus->text();
    this->mode->setflag(ex);
}

expr::~expr()
{
    delete ui;
}

void expr::getBtn_zero(){
    //非bool类型的为属性名本身，设置：set+属性名
    if(this->temp!=""){
    this->temp+=this->ui->btn_zero->text();
    this->ui->lbl_display->setText(this->temp);}
}

void expr::getBtn_one(){
    this->temp+=this->ui->btn_one->text();
    this->ui->lbl_display->setText(this->temp);
}

void expr::getBtn_two(){
    this->temp+=this->ui->btn_two->text();
    this->ui->lbl_display->setText(this->temp);
}

void expr::getBtn_three(){
    this->temp+=this->ui->btn_three->text();
    this->ui->lbl_display->setText(this->temp);
}
void expr::on_btn_four_clicked()
{
    this->temp+=this->ui->btn_four->text();
    this->ui->lbl_display->setText(this->temp);
}

void expr::on_btn_five_clicked()
{
    this->temp+=this->ui->btn_five->text();
    this->ui->lbl_display->setText(this->temp);
}

void expr::on_btn_six_clicked()
{
    this->temp+=this->ui->btn_six->text();
    this->ui->lbl_display->setText(this->temp);
}

void expr::on_btn_seven_clicked()
{
    this->temp+=this->ui->btn_seven->text();
    this->ui->lbl_display->setText(this->temp);
}

void expr::on_btn_eight_clicked()
{
    this->temp+=this->ui->btn_eight->text();
    this->ui->lbl_display->setText(this->temp);
}

void expr::on_btn_nine_clicked()
{
    this->temp+=this->ui->btn_nine->text();
    this->ui->lbl_display->setText(this->temp);
}


void expr::on_btn_plus_clicked()
{
    int num = this->temp.toInt();
    this->mode->setnum1(num);
    this->temp = "";
    QString ex = this->ui->btn_plus->text();
    this->mode->setflag(ex);
}

void expr::on_btn_sub_clicked()
{
    int num = this->temp.toInt();
    this->mode->setnum1(num);
    this->temp = "";
    QString ex = this->ui->btn_sub->text();
    this->mode->setflag(ex);
}

void expr::on_btn_mul_clicked()
{
    int num = this->temp.toInt();
    this->mode->setnum1(num);
    this->temp = "";
    QString ex = this->ui->btn_mul->text();
    this->mode->setflag(ex);
}

void expr::on_btn_div_clicked()
{
    int num = this->temp.toInt();
    this->mode->setnum1(num);
    this->temp = "";
    QString ex = this->ui->btn_div->text();
    this->mode->setflag(ex);
}

void expr::on_btn_equal_clicked()
{
    int num = this->temp.toInt();
    this->mode->setnum2(num);
    QString res = this->mode->doExpr();
    this->ui->lbl_display->setText(res);
    this->temp = "";
}

void expr::on_btn_clear_clicked()
{
    this->temp = "";
    this->ui->lbl_display->setText("0");
}
