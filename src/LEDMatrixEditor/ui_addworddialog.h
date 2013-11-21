/********************************************************************************
** Form generated from reading UI file 'addworddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDWORDDIALOG_H
#define UI_ADDWORDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AddWordDialog
{
public:
    QDialogButtonBox *buttonBox;
    QCheckBox *checkBox;
    QLineEdit *lineEdit;
    QLabel *label;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *AddWordDialog)
    {
        if (AddWordDialog->objectName().isEmpty())
            AddWordDialog->setObjectName(QStringLiteral("AddWordDialog"));
        AddWordDialog->resize(355, 103);
        buttonBox = new QDialogButtonBox(AddWordDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(80, 70, 261, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        checkBox = new QCheckBox(AddWordDialog);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(20, 40, 151, 17));
        lineEdit = new QLineEdit(AddWordDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(60, 10, 113, 20));
        label = new QLabel(AddWordDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 46, 21));
        spinBox = new QSpinBox(AddWordDialog);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(211, 10, 51, 22));
        spinBox_2 = new QSpinBox(AddWordDialog);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(211, 40, 51, 22));
        pushButton = new QPushButton(AddWordDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 10, 71, 51));
        pushButton->setFlat(false);
        label_2 = new QLabel(AddWordDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 10, 21, 16));
        label_3 = new QLabel(AddWordDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(190, 40, 21, 16));

        retranslateUi(AddWordDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddWordDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddWordDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddWordDialog);
    } // setupUi

    void retranslateUi(QDialog *AddWordDialog)
    {
        AddWordDialog->setWindowTitle(QApplication::translate("AddWordDialog", "Add word to current frame", 0));
        checkBox->setText(QApplication::translate("AddWordDialog", "Invertiv behaviour", 0));
        label->setText(QApplication::translate("AddWordDialog", "Word:", 0));
        pushButton->setText(QApplication::translate("AddWordDialog", "Center", 0));
        label_2->setText(QApplication::translate("AddWordDialog", "X:", 0));
        label_3->setText(QApplication::translate("AddWordDialog", "Y:", 0));
    } // retranslateUi

};

namespace Ui {
    class AddWordDialog: public Ui_AddWordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWORDDIALOG_H
