#ifndef MODEL_H
#define MODEL_H
#include <QString>
/*
 * 操作数：num1.num2.以及操作符+*-/
*/

class model
{
public:
    model();
    void setnum1(int num);
    void setnum2(int num);
    void setflag(QString flag);
    QString doExpr();
private:
    int num1;
    int num2;
    QString flag;
};

#endif // MODEL_H
