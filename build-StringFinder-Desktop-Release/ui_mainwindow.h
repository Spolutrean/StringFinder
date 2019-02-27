/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *dirPath;
    QPushButton *selectDirButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpinBox *threadsCount;
    QPushButton *startIndexingButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *textForSearch;
    QTreeWidget *treeWidget;
    QPushButton *startFindingButton;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(470, 491);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        dirPath = new QLineEdit(centralWidget);
        dirPath->setObjectName(QStringLiteral("dirPath"));
        dirPath->setReadOnly(true);

        horizontalLayout->addWidget(dirPath);

        selectDirButton = new QPushButton(centralWidget);
        selectDirButton->setObjectName(QStringLiteral("selectDirButton"));

        horizontalLayout->addWidget(selectDirButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        threadsCount = new QSpinBox(centralWidget);
        threadsCount->setObjectName(QStringLiteral("threadsCount"));
        threadsCount->setMinimum(1);
        threadsCount->setMaximum(140);

        horizontalLayout_3->addWidget(threadsCount);


        verticalLayout->addLayout(horizontalLayout_3);

        startIndexingButton = new QPushButton(centralWidget);
        startIndexingButton->setObjectName(QStringLiteral("startIndexingButton"));
        startIndexingButton->setEnabled(false);

        verticalLayout->addWidget(startIndexingButton);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        textForSearch = new QLineEdit(centralWidget);
        textForSearch->setObjectName(QStringLiteral("textForSearch"));

        horizontalLayout_2->addWidget(textForSearch);


        verticalLayout->addLayout(horizontalLayout_2);

        treeWidget = new QTreeWidget(centralWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        verticalLayout->addWidget(treeWidget);

        startFindingButton = new QPushButton(centralWidget);
        startFindingButton->setObjectName(QStringLiteral("startFindingButton"));
        startFindingButton->setEnabled(false);

        verticalLayout->addWidget(startFindingButton);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        selectDirButton->setText(QApplication::translate("MainWindow", "Select directory", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Threads count:", Q_NULLPTR));
        startIndexingButton->setText(QApplication::translate("MainWindow", "Start indexing", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "String for search:", Q_NULLPTR));
        startFindingButton->setText(QApplication::translate("MainWindow", "Start finding", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
