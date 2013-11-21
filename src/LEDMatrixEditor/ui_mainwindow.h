/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "ledmatrix.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_Animation;
    QAction *actionSave_Animation;
    QAction *actionExit;
    QAction *actionAdd_Textanimation;
    QAction *actionNew_Animation;
    QAction *actionAdd_Word;
    QWidget *centralWidget;
    LEDMatrix *widget;
    QLCDNumber *lcdNumber;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QScrollBar *horizontalScrollBar;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_2;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QCheckBox *checkBox;
    QSpinBox *spinBox;
    QLabel *label_11;
    QCommandLinkButton *commandLinkButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuTools;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1019, 612);
        actionOpen_Animation = new QAction(MainWindow);
        actionOpen_Animation->setObjectName(QStringLiteral("actionOpen_Animation"));
        actionSave_Animation = new QAction(MainWindow);
        actionSave_Animation->setObjectName(QStringLiteral("actionSave_Animation"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionAdd_Textanimation = new QAction(MainWindow);
        actionAdd_Textanimation->setObjectName(QStringLiteral("actionAdd_Textanimation"));
        actionNew_Animation = new QAction(MainWindow);
        actionNew_Animation->setObjectName(QStringLiteral("actionNew_Animation"));
        actionAdd_Word = new QAction(MainWindow);
        actionAdd_Word->setObjectName(QStringLiteral("actionAdd_Word"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new LEDMatrix(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(200, 10, 571, 381));
        widget->setAutoFillBackground(true);
        widget->setStyleSheet(QStringLiteral(""));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(780, 10, 231, 41));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(10, 400, 1001, 130));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 999, 111));
        scrollArea->setWidget(scrollAreaWidgetContents);
        horizontalScrollBar = new QScrollBar(centralWidget);
        horizontalScrollBar->setObjectName(QStringLiteral("horizontalScrollBar"));
        horizontalScrollBar->setGeometry(QRect(10, 530, 1001, 16));
        horizontalScrollBar->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(780, 60, 231, 151));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 216, 129));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 2, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 1, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 3, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_9, 4, 0, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 4, 1, 1, 1);

        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(790, 220, 221, 23));
        checkBox->setChecked(true);
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(880, 250, 121, 24));
        spinBox->setFocusPolicy(Qt::WheelFocus);
        spinBox->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        spinBox->setMinimum(10);
        spinBox->setMaximum(99999);
        spinBox->setSingleStep(25);
        spinBox->setValue(100);
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(790, 250, 81, 21));
        commandLinkButton = new QCommandLinkButton(centralWidget);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(810, 350, 172, 41));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1019, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuFile->addAction(actionNew_Animation);
        menuFile->addAction(actionOpen_Animation);
        menuFile->addAction(actionSave_Animation);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuTools->addAction(actionAdd_Textanimation);
        menuTools->addAction(actionAdd_Word);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "New animation", 0));
        actionOpen_Animation->setText(QApplication::translate("MainWindow", "Open Animation", 0));
        actionSave_Animation->setText(QApplication::translate("MainWindow", "Save Animation", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        actionAdd_Textanimation->setText(QApplication::translate("MainWindow", "Add Textanimation", 0));
        actionNew_Animation->setText(QApplication::translate("MainWindow", "New Animation", 0));
        actionAdd_Word->setText(QApplication::translate("MainWindow", "Add Word", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Shortcuts", 0));
        label->setText(QApplication::translate("MainWindow", "N:", 0));
        label_5->setText(QApplication::translate("MainWindow", "Move whole image", 0));
        label_6->setText(QApplication::translate("MainWindow", "Remove current Frame", 0));
        label_3->setText(QApplication::translate("MainWindow", "R:", 0));
        label_4->setText(QApplication::translate("MainWindow", "W/A/S/D:", 0));
        label_7->setText(QApplication::translate("MainWindow", "C:", 0));
        label_2->setText(QApplication::translate("MainWindow", "Add new frame", 0));
        label_8->setText(QApplication::translate("MainWindow", "Clear frame", 0));
        label_9->setText(QApplication::translate("MainWindow", "F:", 0));
        label_10->setText(QApplication::translate("MainWindow", "Fill frame", 0));
        checkBox->setText(QApplication::translate("MainWindow", "Copy frame when new added", 0));
        spinBox->setSuffix(QString());
        label_11->setText(QApplication::translate("MainWindow", "Delay in ms:", 0));
        commandLinkButton->setText(QApplication::translate("MainWindow", "Play", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
