/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_5;
    QLineEdit *Serial;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *Name;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *Type;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *Jobcard;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLineEdit *Location;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *Gate;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QLineEdit *Remarks;
    QHBoxLayout *horizontalLayout_11;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(728, 365);
        horizontalLayout_12 = new QHBoxLayout(Dialog);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_9->addWidget(label_5);

        Serial = new QLineEdit(Dialog);
        Serial->setObjectName(QStringLiteral("Serial"));

        horizontalLayout_9->addWidget(Serial);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        Name = new QLineEdit(Dialog);
        Name->setObjectName(QStringLiteral("Name"));

        horizontalLayout_2->addWidget(Name);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        dateEdit = new QDateEdit(Dialog);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setCalendarPopup(true);

        horizontalLayout->addWidget(dateEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        comboBox = new QComboBox(Dialog);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_3->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        Type = new QLineEdit(Dialog);
        Type->setObjectName(QStringLiteral("Type"));

        horizontalLayout_4->addWidget(Type);


        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout_10->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_5->addWidget(label_6);

        Jobcard = new QLineEdit(Dialog);
        Jobcard->setObjectName(QStringLiteral("Jobcard"));

        horizontalLayout_5->addWidget(Jobcard);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_7 = new QLabel(Dialog);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_6->addWidget(label_7);

        Location = new QLineEdit(Dialog);
        Location->setObjectName(QStringLiteral("Location"));

        horizontalLayout_6->addWidget(Location);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_8 = new QLabel(Dialog);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_7->addWidget(label_8);

        Gate = new QLineEdit(Dialog);
        Gate->setObjectName(QStringLiteral("Gate"));

        horizontalLayout_7->addWidget(Gate);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_9 = new QLabel(Dialog);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_8->addWidget(label_9);

        Remarks = new QLineEdit(Dialog);
        Remarks->setObjectName(QStringLiteral("Remarks"));

        horizontalLayout_8->addWidget(Remarks);


        verticalLayout_2->addLayout(horizontalLayout_8);


        horizontalLayout_10->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_10);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_11->addWidget(buttonBox);


        verticalLayout_4->addLayout(horizontalLayout_11);


        horizontalLayout_12->addLayout(verticalLayout_4);

#ifndef QT_NO_SHORTCUT
        label_5->setBuddy(Serial);
        label->setBuddy(Name);
        label_2->setBuddy(dateEdit);
        label_3->setBuddy(comboBox);
        label_4->setBuddy(Type);
        label_6->setBuddy(Jobcard);
        label_7->setBuddy(Location);
        label_8->setBuddy(Gate);
        label_9->setBuddy(Remarks);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(Serial, Name);
        QWidget::setTabOrder(Name, dateEdit);
        QWidget::setTabOrder(dateEdit, comboBox);
        QWidget::setTabOrder(comboBox, Type);
        QWidget::setTabOrder(Type, Jobcard);
        QWidget::setTabOrder(Jobcard, Location);
        QWidget::setTabOrder(Location, Gate);
        QWidget::setTabOrder(Gate, Remarks);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        label_5->setText(QApplication::translate("Dialog", "Serial No.", nullptr));
        label->setText(QApplication::translate("Dialog", "Name", nullptr));
        label_2->setText(QApplication::translate("Dialog", "Date of Reciept", nullptr));
        label_3->setText(QApplication::translate("Dialog", "Motor/Pump", nullptr));
        comboBox->setItemText(0, QApplication::translate("Dialog", "Pump", nullptr));
        comboBox->setItemText(1, QApplication::translate("Dialog", "Motor", nullptr));

        label_4->setText(QApplication::translate("Dialog", "Type of Sample", nullptr));
        label_6->setText(QApplication::translate("Dialog", "Jobcard No.", nullptr));
        label_7->setText(QApplication::translate("Dialog", "Sample Location", nullptr));
        label_8->setText(QApplication::translate("Dialog", "Gate Pass", nullptr));
        label_9->setText(QApplication::translate("Dialog", "Remarks", nullptr));
        Remarks->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
