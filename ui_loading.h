/********************************************************************************
** Form generated from reading UI file 'loading.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADING_H
#define UI_LOADING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Loading
{
public:
    QLabel *label;

    void setupUi(QDialog *Loading)
    {
        if (Loading->objectName().isEmpty())
            Loading->setObjectName(QStringLiteral("Loading"));
        Loading->resize(545, 342);
        label = new QLabel(Loading);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);
        label->setGeometry(QRect(0, 0, 551, 341));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMaximumSize(QSize(16777215, 16777215));
        label->setAutoFillBackground(true);
        label->setPixmap(QPixmap(QString::fromUtf8("NSIC.jpg")));
        label->setScaledContents(true);

        retranslateUi(Loading);

        QMetaObject::connectSlotsByName(Loading);
    } // setupUi

    void retranslateUi(QDialog *Loading)
    {
        Loading->setWindowTitle(QApplication::translate("Loading", "Dialog", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Loading: public Ui_Loading {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADING_H
