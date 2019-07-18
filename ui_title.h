/********************************************************************************
** Form generated from reading UI file 'title.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TITLE_H
#define UI_TITLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Title
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *Title)
    {
        if (Title->objectName().isEmpty())
            Title->setObjectName(QStringLiteral("Title"));
        Title->resize(508, 154);
        buttonBox = new QDialogButtonBox(Title);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(140, 110, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(Title);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 161, 21));
        lineEdit = new QLineEdit(Title);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 60, 471, 22));

        retranslateUi(Title);
        QObject::connect(buttonBox, SIGNAL(accepted()), Title, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Title, SLOT(reject()));

        QMetaObject::connectSlotsByName(Title);
    } // setupUi

    void retranslateUi(QDialog *Title)
    {
        Title->setWindowTitle(QApplication::translate("Title", "Dialog", nullptr));
        label->setText(QApplication::translate("Title", "Title of the Pdf Document", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Title: public Ui_Title {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TITLE_H
