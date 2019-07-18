/********************************************************************************
** Form generated from reading UI file 'wew.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEW_H
#define UI_WEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_wew
{
public:
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *wew)
    {
        if (wew->objectName().isEmpty())
            wew->setObjectName(QStringLiteral("wew"));
        wew->resize(400, 300);
        plainTextEdit = new QPlainTextEdit(wew);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(20, 30, 361, 241));
        QFont font;
        font.setPointSize(16);
        plainTextEdit->setFont(font);
        plainTextEdit->setReadOnly(true);

        retranslateUi(wew);

        QMetaObject::connectSlotsByName(wew);
    } // setupUi

    void retranslateUi(QDialog *wew)
    {
        wew->setWindowTitle(QApplication::translate("wew", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wew: public Ui_wew {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEW_H
