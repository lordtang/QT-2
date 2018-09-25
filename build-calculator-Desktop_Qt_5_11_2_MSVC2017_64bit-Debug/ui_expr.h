/********************************************************************************
** Form generated from reading UI file 'expr.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPR_H
#define UI_EXPR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_expr
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lbl_display;
    QGridLayout *gridLayout;
    QPushButton *btn_seven;
    QPushButton *btn_eight;
    QPushButton *btn_nine;
    QPushButton *btn_plus;
    QPushButton *btn_four;
    QPushButton *btn_five;
    QPushButton *btn_six;
    QPushButton *btn_sub;
    QPushButton *btn_one;
    QPushButton *btn_two;
    QPushButton *btn_three;
    QPushButton *btn_mul;
    QPushButton *btn_clear;
    QPushButton *btn_zero;
    QPushButton *btn_equal;
    QPushButton *btn_div;

    void setupUi(QDialog *expr)
    {
        if (expr->objectName().isEmpty())
            expr->setObjectName(QStringLiteral("expr"));
        expr->resize(338, 440);
        verticalLayout = new QVBoxLayout(expr);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        lbl_display = new QLabel(expr);
        lbl_display->setObjectName(QStringLiteral("lbl_display"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lbl_display->sizePolicy().hasHeightForWidth());
        lbl_display->setSizePolicy(sizePolicy);
        lbl_display->setStyleSheet(QString::fromUtf8("font: 75 36pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(84, 181, 255);"));
        lbl_display->setScaledContents(false);
        lbl_display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbl_display->setIndent(-1);

        verticalLayout->addWidget(lbl_display);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btn_seven = new QPushButton(expr);
        btn_seven->setObjectName(QStringLiteral("btn_seven"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_seven->sizePolicy().hasHeightForWidth());
        btn_seven->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(16);
        font.setBold(false);
        font.setWeight(50);
        btn_seven->setFont(font);

        gridLayout->addWidget(btn_seven, 0, 0, 1, 1);

        btn_eight = new QPushButton(expr);
        btn_eight->setObjectName(QStringLiteral("btn_eight"));
        sizePolicy1.setHeightForWidth(btn_eight->sizePolicy().hasHeightForWidth());
        btn_eight->setSizePolicy(sizePolicy1);
        btn_eight->setFont(font);

        gridLayout->addWidget(btn_eight, 0, 1, 1, 1);

        btn_nine = new QPushButton(expr);
        btn_nine->setObjectName(QStringLiteral("btn_nine"));
        sizePolicy1.setHeightForWidth(btn_nine->sizePolicy().hasHeightForWidth());
        btn_nine->setSizePolicy(sizePolicy1);
        btn_nine->setFont(font);

        gridLayout->addWidget(btn_nine, 0, 2, 1, 1);

        btn_plus = new QPushButton(expr);
        btn_plus->setObjectName(QStringLiteral("btn_plus"));
        sizePolicy1.setHeightForWidth(btn_plus->sizePolicy().hasHeightForWidth());
        btn_plus->setSizePolicy(sizePolicy1);
        btn_plus->setFont(font);

        gridLayout->addWidget(btn_plus, 0, 3, 1, 1);

        btn_four = new QPushButton(expr);
        btn_four->setObjectName(QStringLiteral("btn_four"));
        sizePolicy1.setHeightForWidth(btn_four->sizePolicy().hasHeightForWidth());
        btn_four->setSizePolicy(sizePolicy1);
        btn_four->setFont(font);

        gridLayout->addWidget(btn_four, 1, 0, 1, 1);

        btn_five = new QPushButton(expr);
        btn_five->setObjectName(QStringLiteral("btn_five"));
        sizePolicy1.setHeightForWidth(btn_five->sizePolicy().hasHeightForWidth());
        btn_five->setSizePolicy(sizePolicy1);
        btn_five->setFont(font);

        gridLayout->addWidget(btn_five, 1, 1, 1, 1);

        btn_six = new QPushButton(expr);
        btn_six->setObjectName(QStringLiteral("btn_six"));
        sizePolicy1.setHeightForWidth(btn_six->sizePolicy().hasHeightForWidth());
        btn_six->setSizePolicy(sizePolicy1);
        btn_six->setFont(font);

        gridLayout->addWidget(btn_six, 1, 2, 1, 1);

        btn_sub = new QPushButton(expr);
        btn_sub->setObjectName(QStringLiteral("btn_sub"));
        sizePolicy1.setHeightForWidth(btn_sub->sizePolicy().hasHeightForWidth());
        btn_sub->setSizePolicy(sizePolicy1);
        btn_sub->setFont(font);

        gridLayout->addWidget(btn_sub, 1, 3, 1, 1);

        btn_one = new QPushButton(expr);
        btn_one->setObjectName(QStringLiteral("btn_one"));
        sizePolicy1.setHeightForWidth(btn_one->sizePolicy().hasHeightForWidth());
        btn_one->setSizePolicy(sizePolicy1);
        btn_one->setFont(font);

        gridLayout->addWidget(btn_one, 2, 0, 1, 1);

        btn_two = new QPushButton(expr);
        btn_two->setObjectName(QStringLiteral("btn_two"));
        sizePolicy1.setHeightForWidth(btn_two->sizePolicy().hasHeightForWidth());
        btn_two->setSizePolicy(sizePolicy1);
        btn_two->setFont(font);

        gridLayout->addWidget(btn_two, 2, 1, 1, 1);

        btn_three = new QPushButton(expr);
        btn_three->setObjectName(QStringLiteral("btn_three"));
        sizePolicy1.setHeightForWidth(btn_three->sizePolicy().hasHeightForWidth());
        btn_three->setSizePolicy(sizePolicy1);
        btn_three->setFont(font);

        gridLayout->addWidget(btn_three, 2, 2, 1, 1);

        btn_mul = new QPushButton(expr);
        btn_mul->setObjectName(QStringLiteral("btn_mul"));
        sizePolicy1.setHeightForWidth(btn_mul->sizePolicy().hasHeightForWidth());
        btn_mul->setSizePolicy(sizePolicy1);
        btn_mul->setFont(font);

        gridLayout->addWidget(btn_mul, 2, 3, 1, 1);

        btn_clear = new QPushButton(expr);
        btn_clear->setObjectName(QStringLiteral("btn_clear"));
        sizePolicy1.setHeightForWidth(btn_clear->sizePolicy().hasHeightForWidth());
        btn_clear->setSizePolicy(sizePolicy1);
        btn_clear->setFont(font);

        gridLayout->addWidget(btn_clear, 3, 0, 1, 1);

        btn_zero = new QPushButton(expr);
        btn_zero->setObjectName(QStringLiteral("btn_zero"));
        sizePolicy1.setHeightForWidth(btn_zero->sizePolicy().hasHeightForWidth());
        btn_zero->setSizePolicy(sizePolicy1);
        btn_zero->setFont(font);

        gridLayout->addWidget(btn_zero, 3, 1, 1, 1);

        btn_equal = new QPushButton(expr);
        btn_equal->setObjectName(QStringLiteral("btn_equal"));
        sizePolicy1.setHeightForWidth(btn_equal->sizePolicy().hasHeightForWidth());
        btn_equal->setSizePolicy(sizePolicy1);
        btn_equal->setFont(font);

        gridLayout->addWidget(btn_equal, 3, 2, 1, 1);

        btn_div = new QPushButton(expr);
        btn_div->setObjectName(QStringLiteral("btn_div"));
        sizePolicy1.setHeightForWidth(btn_div->sizePolicy().hasHeightForWidth());
        btn_div->setSizePolicy(sizePolicy1);
        btn_div->setFont(font);

        gridLayout->addWidget(btn_div, 3, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 8);

        retranslateUi(expr);

        QMetaObject::connectSlotsByName(expr);
    } // setupUi

    void retranslateUi(QDialog *expr)
    {
        expr->setWindowTitle(QApplication::translate("expr", "\350\256\241\347\256\227\345\231\250", nullptr));
        lbl_display->setText(QApplication::translate("expr", "0", nullptr));
        btn_seven->setText(QApplication::translate("expr", "7", nullptr));
        btn_eight->setText(QApplication::translate("expr", "8", nullptr));
        btn_nine->setText(QApplication::translate("expr", "9", nullptr));
        btn_plus->setText(QApplication::translate("expr", "+", nullptr));
        btn_four->setText(QApplication::translate("expr", "4", nullptr));
        btn_five->setText(QApplication::translate("expr", "5", nullptr));
        btn_six->setText(QApplication::translate("expr", "6", nullptr));
        btn_sub->setText(QApplication::translate("expr", "-", nullptr));
        btn_one->setText(QApplication::translate("expr", "1", nullptr));
        btn_two->setText(QApplication::translate("expr", "2", nullptr));
        btn_three->setText(QApplication::translate("expr", "3", nullptr));
        btn_mul->setText(QApplication::translate("expr", "*", nullptr));
        btn_clear->setText(QApplication::translate("expr", "c", nullptr));
        btn_zero->setText(QApplication::translate("expr", "0", nullptr));
        btn_equal->setText(QApplication::translate("expr", "=", nullptr));
        btn_div->setText(QApplication::translate("expr", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class expr: public Ui_expr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPR_H
