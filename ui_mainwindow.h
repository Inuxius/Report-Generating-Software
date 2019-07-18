/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionExcel;
    QAction *actionAdd;
    QAction *actionDelete;
    QAction *actionUpdate;
    QAction *actionPdf;
    QAction *actionGenerate_Pdf;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *Filter_text;
    QPushButton *Filter;
    QPushButton *Clear_Filter;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit;
    QPushButton *Search;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuOpen_in;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1150, 635);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionNew->setCheckable(false);
        actionNew->setShortcutContext(Qt::WindowShortcut);
        actionNew->setMenuRole(QAction::TextHeuristicRole);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QStringLiteral("actionSave_as"));
        actionExcel = new QAction(MainWindow);
        actionExcel->setObjectName(QStringLiteral("actionExcel"));
        actionAdd = new QAction(MainWindow);
        actionAdd->setObjectName(QStringLiteral("actionAdd"));
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QStringLiteral("actionDelete"));
        actionUpdate = new QAction(MainWindow);
        actionUpdate->setObjectName(QStringLiteral("actionUpdate"));
        actionPdf = new QAction(MainWindow);
        actionPdf->setObjectName(QStringLiteral("actionPdf"));
        actionGenerate_Pdf = new QAction(MainWindow);
        actionGenerate_Pdf->setObjectName(QStringLiteral("actionGenerate_Pdf"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(25, 4, 15, 3);
        Filter_text = new QLineEdit(centralWidget);
        Filter_text->setObjectName(QStringLiteral("Filter_text"));

        horizontalLayout->addWidget(Filter_text);

        Filter = new QPushButton(centralWidget);
        Filter->setObjectName(QStringLiteral("Filter"));

        horizontalLayout->addWidget(Filter);

        Clear_Filter = new QPushButton(centralWidget);
        Clear_Filter->setObjectName(QStringLiteral("Clear_Filter"));

        horizontalLayout->addWidget(Clear_Filter);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setClearButtonEnabled(false);

        horizontalLayout->addWidget(lineEdit);

        Search = new QPushButton(centralWidget);
        Search->setObjectName(QStringLiteral("Search"));

        horizontalLayout->addWidget(Search);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 9)
            tableWidget->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy1);
        tableWidget->setMouseTracking(true);
        tableWidget->setAutoFillBackground(true);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout->addWidget(tableWidget);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1150, 26));
        menuBar->setContextMenuPolicy(Qt::ActionsContextMenu);
        menuBar->setAutoFillBackground(true);
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuFile->setFocusPolicy(Qt::ClickFocus);
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuOpen_in = new QMenu(menuBar);
        menuOpen_in->setObjectName(QStringLiteral("menuOpen_in"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuOpen_in->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addSeparator();
        menuFile->addAction(actionGenerate_Pdf);
        menuEdit->addSeparator();
        menuEdit->addAction(actionAdd);
        menuEdit->addSeparator();
        menuEdit->addAction(actionUpdate);
        menuEdit->addAction(actionDelete);
        menuOpen_in->addAction(actionExcel);
        menuOpen_in->addAction(actionPdf);

        retranslateUi(MainWindow);
        QObject::connect(Filter_text, SIGNAL(returnPressed()), Filter, SLOT(click()));
        QObject::connect(lineEdit, SIGNAL(returnPressed()), Search, SLOT(click()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QApplication::translate("MainWindow", "New File", nullptr));
#ifndef QT_NO_SHORTCUT
        actionNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionOpen->setText(QApplication::translate("MainWindow", "Open", nullptr));
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave_as->setText(QApplication::translate("MainWindow", "Save as", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave_as->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionExcel->setText(QApplication::translate("MainWindow", "Excel", nullptr));
        actionAdd->setText(QApplication::translate("MainWindow", "Add", nullptr));
#ifndef QT_NO_SHORTCUT
        actionAdd->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_NO_SHORTCUT
        actionDelete->setText(QApplication::translate("MainWindow", "Delete", nullptr));
#ifndef QT_NO_SHORTCUT
        actionDelete->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_NO_SHORTCUT
        actionUpdate->setText(QApplication::translate("MainWindow", "Update", nullptr));
#ifndef QT_NO_SHORTCUT
        actionUpdate->setShortcut(QApplication::translate("MainWindow", "Ctrl+U", nullptr));
#endif // QT_NO_SHORTCUT
        actionPdf->setText(QApplication::translate("MainWindow", "Pdf", nullptr));
#ifndef QT_NO_SHORTCUT
        actionPdf->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_NO_SHORTCUT
        actionGenerate_Pdf->setText(QApplication::translate("MainWindow", "Generate Pdf", nullptr));
#ifndef QT_NO_SHORTCUT
        actionGenerate_Pdf->setShortcut(QApplication::translate("MainWindow", "Ctrl+G", nullptr));
#endif // QT_NO_SHORTCUT
        Filter->setText(QApplication::translate("MainWindow", "Filter", nullptr));
        Clear_Filter->setText(QApplication::translate("MainWindow", "Clear Filter", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit->setToolTip(QApplication::translate("MainWindow", "Search bar", nullptr));
#endif // QT_NO_TOOLTIP
        Search->setText(QApplication::translate("MainWindow", "Search", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Clear Search", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Date of Receipt", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Name of the Party", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Motor/Pump", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Type of Sample", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Serial Number", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Jobcard Number", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Sample Location", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Gate Pass", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "Remarks", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", nullptr));
        menuOpen_in->setTitle(QApplication::translate("MainWindow", "Open in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
