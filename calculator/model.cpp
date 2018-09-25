#include "model.h"

model::model()
{
    this->num1 = 0;
    this->num2 = 0;
}

void model::setnum1(int num)
{
    this->num1 = num;
}

void model::setnum2(int num)
{
    this->num2 = num;
}
void model::setflag(QString flag)
{
    this->flag = flag;
}

/*
*先设定结果为0，再计算结果，赋值给result，最后将result转换成QString类型返回输出；
* 中间考虑用户直接摁“=”的情况
*/
QString model::doExpr()
{
    int result = 0;
    if(this->flag =="+") {
        result = num1+num2;}
    else if(this->flag == "-"){
        result = this->num1-this->num2;}
    else if(this->flag =="*"){
        result = this->num1*this->num2;}
    else if(this->flag =="/"){
        if(num2 ==0){
            return "ERROR";}
        result = this->num1/this->num2;}
    else{
        return QString::number(this->num1);
    }
    return QString::number(result);
}
