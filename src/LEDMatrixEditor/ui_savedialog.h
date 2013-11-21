/********************************************************************************
** Form generated from reading UI file 'savedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEDIALOG_H
#define UI_SAVEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SaveDialog
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QCalendarWidget *calendarWidget;
    QDialogButtonBox *buttonBoxEveryYear;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTimeEdit *timeEdit;
    QTimeEdit *timeEdit_2;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QWidget *widget;
    QSpinBox *spinBox;
    QLabel *label_4;
    QWidget *tab_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QTimeEdit *timeEdit_3;
    QTimeEdit *timeEdit_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QWidget *widget_2;
    QSpinBox *spinBox_2;
    QLabel *label_8;
    QDialogButtonBox *buttonBox_2;
    QWidget *tab_3;
    QCalendarWidget *calendarWidget_2;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QTimeEdit *timeEdit_5;
    QTimeEdit *timeEdit_6;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QWidget *widget_3;
    QSpinBox *spinBox_3;
    QLabel *label_12;
    QDialogButtonBox *buttonBox_3;

    void setupUi(QDialog *SaveDialog)
    {
        if (SaveDialog->objectName().isEmpty())
            SaveDialog->setObjectName(QStringLiteral("SaveDialog"));
        SaveDialog->resize(275, 396);
        tabWidget = new QTabWidget(SaveDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 261, 381));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        calendarWidget = new QCalendarWidget(tab);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(0, 10, 251, 181));
        buttonBoxEveryYear = new QDialogButtonBox(tab);
        buttonBoxEveryYear->setObjectName(QStringLiteral("buttonBoxEveryYear"));
        buttonBoxEveryYear->setGeometry(QRect(10, 320, 231, 23));
        buttonBoxEveryYear->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);
        gridLayoutWidget = new QWidget(tab);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 200, 231, 111));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        timeEdit = new QTimeEdit(gridLayoutWidget);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setMaximumTime(QTime(22, 0, 0));
        timeEdit->setMinimumTime(QTime(6, 0, 0));

        gridLayout->addWidget(timeEdit, 0, 1, 1, 1);

        timeEdit_2 = new QTimeEdit(gridLayoutWidget);
        timeEdit_2->setObjectName(QStringLiteral("timeEdit_2"));
        timeEdit_2->setMaximumTime(QTime(22, 0, 0));
        timeEdit_2->setMinimumTime(QTime(6, 0, 0));

        gridLayout->addWidget(timeEdit_2, 1, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        widget = new QWidget(gridLayoutWidget);
        widget->setObjectName(QStringLiteral("widget"));
        spinBox = new QSpinBox(widget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(0, 10, 51, 20));
        spinBox->setMinimum(3);
        spinBox->setMaximum(99999);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(55, 10, 51, 21));

        gridLayout->addWidget(widget, 2, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayoutWidget_2 = new QWidget(tab_2);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(100, 20, 51, 167));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        checkBox_6 = new QCheckBox(gridLayoutWidget_2);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));

        gridLayout_2->addWidget(checkBox_6, 5, 0, 1, 1);

        checkBox_3 = new QCheckBox(gridLayoutWidget_2);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        gridLayout_2->addWidget(checkBox_3, 2, 0, 1, 1);

        checkBox_5 = new QCheckBox(gridLayoutWidget_2);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));

        gridLayout_2->addWidget(checkBox_5, 4, 0, 1, 1);

        checkBox_7 = new QCheckBox(gridLayoutWidget_2);
        checkBox_7->setObjectName(QStringLiteral("checkBox_7"));

        gridLayout_2->addWidget(checkBox_7, 6, 0, 1, 1);

        checkBox_4 = new QCheckBox(gridLayoutWidget_2);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));

        gridLayout_2->addWidget(checkBox_4, 3, 0, 1, 1);

        checkBox = new QCheckBox(gridLayoutWidget_2);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout_2->addWidget(checkBox, 0, 0, 1, 1);

        checkBox_2 = new QCheckBox(gridLayoutWidget_2);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        gridLayout_2->addWidget(checkBox_2, 1, 0, 1, 1);

        gridLayoutWidget_3 = new QWidget(tab_2);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(10, 210, 231, 101));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        timeEdit_3 = new QTimeEdit(gridLayoutWidget_3);
        timeEdit_3->setObjectName(QStringLiteral("timeEdit_3"));
        timeEdit_3->setMaximumTime(QTime(22, 0, 0));
        timeEdit_3->setMinimumTime(QTime(6, 0, 0));

        gridLayout_3->addWidget(timeEdit_3, 0, 1, 1, 1);

        timeEdit_4 = new QTimeEdit(gridLayoutWidget_3);
        timeEdit_4->setObjectName(QStringLiteral("timeEdit_4"));
        timeEdit_4->setMaximumTime(QTime(22, 0, 0));
        timeEdit_4->setMinimumTime(QTime(6, 0, 0));

        gridLayout_3->addWidget(timeEdit_4, 1, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 2, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_3->addWidget(label_7, 1, 0, 1, 1);

        widget_2 = new QWidget(gridLayoutWidget_3);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        spinBox_2 = new QSpinBox(widget_2);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(0, 0, 51, 20));
        spinBox_2->setMinimum(3);
        spinBox_2->setMaximum(99999);
        label_8 = new QLabel(widget_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(50, 0, 51, 21));

        gridLayout_3->addWidget(widget_2, 2, 1, 1, 1);

        buttonBox_2 = new QDialogButtonBox(tab_2);
        buttonBox_2->setObjectName(QStringLiteral("buttonBox_2"));
        buttonBox_2->setGeometry(QRect(10, 320, 231, 23));
        buttonBox_2->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        calendarWidget_2 = new QCalendarWidget(tab_3);
        calendarWidget_2->setObjectName(QStringLiteral("calendarWidget_2"));
        calendarWidget_2->setGeometry(QRect(0, 10, 251, 181));
        gridLayoutWidget_4 = new QWidget(tab_3);
        gridLayoutWidget_4->setObjectName(QStringLiteral("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(10, 200, 231, 111));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        timeEdit_5 = new QTimeEdit(gridLayoutWidget_4);
        timeEdit_5->setObjectName(QStringLiteral("timeEdit_5"));
        timeEdit_5->setMaximumTime(QTime(22, 0, 0));
        timeEdit_5->setMinimumTime(QTime(6, 0, 0));

        gridLayout_4->addWidget(timeEdit_5, 0, 1, 1, 1);

        timeEdit_6 = new QTimeEdit(gridLayoutWidget_4);
        timeEdit_6->setObjectName(QStringLiteral("timeEdit_6"));
        timeEdit_6->setMaximumTime(QTime(22, 0, 0));
        timeEdit_6->setMinimumTime(QTime(6, 0, 0));

        gridLayout_4->addWidget(timeEdit_6, 1, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_4);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_4->addWidget(label_9, 2, 0, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_4);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_4->addWidget(label_10, 0, 0, 1, 1);

        label_11 = new QLabel(gridLayoutWidget_4);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_4->addWidget(label_11, 1, 0, 1, 1);

        widget_3 = new QWidget(gridLayoutWidget_4);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        spinBox_3 = new QSpinBox(widget_3);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setGeometry(QRect(0, 10, 51, 20));
        spinBox_3->setMinimum(3);
        spinBox_3->setMaximum(99999);
        label_12 = new QLabel(widget_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(55, 10, 51, 21));

        gridLayout_4->addWidget(widget_3, 2, 1, 1, 1);

        buttonBox_3 = new QDialogButtonBox(tab_3);
        buttonBox_3->setObjectName(QStringLiteral("buttonBox_3"));
        buttonBox_3->setGeometry(QRect(10, 320, 221, 23));
        buttonBox_3->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);
        tabWidget->addTab(tab_3, QString());

        retranslateUi(SaveDialog);
        QObject::connect(buttonBox_3, SIGNAL(rejected()), SaveDialog, SLOT(reject()));
        QObject::connect(buttonBox_2, SIGNAL(rejected()), SaveDialog, SLOT(reject()));
        QObject::connect(buttonBoxEveryYear, SIGNAL(rejected()), SaveDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SaveDialog);
    } // setupUi

    void retranslateUi(QDialog *SaveDialog)
    {
        SaveDialog->setWindowTitle(QApplication::translate("SaveDialog", "Save Animation", 0));
        label_3->setText(QApplication::translate("SaveDialog", "Show every", 0));
        label->setText(QApplication::translate("SaveDialog", "Alarm start:", 0));
        label_2->setText(QApplication::translate("SaveDialog", "Alarm end:", 0));
        label_4->setText(QApplication::translate("SaveDialog", "minutes", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("SaveDialog", "Every year", 0));
        checkBox_6->setText(QApplication::translate("SaveDialog", "Sa", 0));
        checkBox_3->setText(QApplication::translate("SaveDialog", "Mi", 0));
        checkBox_5->setText(QApplication::translate("SaveDialog", "Fr", 0));
        checkBox_7->setText(QApplication::translate("SaveDialog", "So", 0));
        checkBox_4->setText(QApplication::translate("SaveDialog", "Do", 0));
        checkBox->setText(QApplication::translate("SaveDialog", "Mo", 0));
        checkBox_2->setText(QApplication::translate("SaveDialog", "Di", 0));
        label_5->setText(QApplication::translate("SaveDialog", "Show every", 0));
        label_6->setText(QApplication::translate("SaveDialog", "Alarm start:", 0));
        label_7->setText(QApplication::translate("SaveDialog", "Alarm end:", 0));
        label_8->setText(QApplication::translate("SaveDialog", "minutes", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("SaveDialog", "Every Week", 0));
        label_9->setText(QApplication::translate("SaveDialog", "Show every", 0));
        label_10->setText(QApplication::translate("SaveDialog", "Alarm start:", 0));
        label_11->setText(QApplication::translate("SaveDialog", "Alarm end:", 0));
        label_12->setText(QApplication::translate("SaveDialog", "minutes", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("SaveDialog", "Once", 0));
    } // retranslateUi

};

namespace Ui {
    class SaveDialog: public Ui_SaveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEDIALOG_H
