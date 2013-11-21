/********************************************************************************
** Form generated from reading UI file 'addtextanimationdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTEXTANIMATIONDIALOG_H
#define UI_ADDTEXTANIMATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AddTextAnimationDialog
{
public:
    QDialogButtonBox *buttonBox;
    QPlainTextEdit *plainTextEdit;
    QLabel *label;
    QSlider *verticalSlider;
    QSlider *verticalSlider_2;
    QLabel *label_2;
    QComboBox *comboBox;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QComboBox *comboBox_2;
    QLabel *label_11;
    QSpinBox *spinBox;

    void setupUi(QDialog *AddTextAnimationDialog)
    {
        if (AddTextAnimationDialog->objectName().isEmpty())
            AddTextAnimationDialog->setObjectName(QStringLiteral("AddTextAnimationDialog"));
        AddTextAnimationDialog->resize(456, 300);
        buttonBox = new QDialogButtonBox(AddTextAnimationDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        plainTextEdit = new QPlainTextEdit(AddTextAnimationDialog);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(20, 40, 351, 71));
        label = new QLabel(AddTextAnimationDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 61, 16));
        verticalSlider = new QSlider(AddTextAnimationDialog);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setGeometry(QRect(390, 10, 16, 231));
        verticalSlider->setMaximum(16);
        verticalSlider->setOrientation(Qt::Vertical);
        verticalSlider_2 = new QSlider(AddTextAnimationDialog);
        verticalSlider_2->setObjectName(QStringLiteral("verticalSlider_2"));
        verticalSlider_2->setGeometry(QRect(420, 10, 16, 231));
        verticalSlider_2->setMaximum(16);
        verticalSlider_2->setValue(6);
        verticalSlider_2->setOrientation(Qt::Vertical);
        label_2 = new QLabel(AddTextAnimationDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(400, 250, 46, 13));
        comboBox = new QComboBox(AddTextAnimationDialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(20, 120, 121, 22));
        checkBox = new QCheckBox(AddTextAnimationDialog);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(20, 150, 241, 17));
        checkBox_2 = new QCheckBox(AddTextAnimationDialog);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(20, 170, 261, 17));
        comboBox_2 = new QComboBox(AddTextAnimationDialog);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(250, 120, 121, 22));
        label_11 = new QLabel(AddTextAnimationDialog);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 210, 81, 21));
        spinBox = new QSpinBox(AddTextAnimationDialog);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(110, 210, 121, 24));
        spinBox->setFocusPolicy(Qt::WheelFocus);
        spinBox->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        spinBox->setMinimum(10);
        spinBox->setMaximum(99999);
        spinBox->setSingleStep(25);
        spinBox->setValue(100);

        retranslateUi(AddTextAnimationDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddTextAnimationDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddTextAnimationDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddTextAnimationDialog);
    } // setupUi

    void retranslateUi(QDialog *AddTextAnimationDialog)
    {
        AddTextAnimationDialog->setWindowTitle(QApplication::translate("AddTextAnimationDialog", "Add Animation", 0));
        label->setText(QApplication::translate("AddTextAnimationDialog", "Textinput:", 0));
        label_2->setText(QApplication::translate("AddTextAnimationDialog", "Y-Pos", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("AddTextAnimationDialog", "Left <- Right", 0)
         << QApplication::translate("AddTextAnimationDialog", "Left -> Right", 0)
        );
        checkBox->setText(QApplication::translate("AddTextAnimationDialog", "Invertive behaviour", 0));
        checkBox_2->setText(QApplication::translate("AddTextAnimationDialog", "Set current frame as background", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("AddTextAnimationDialog", "5x7 Font", 0)
         << QApplication::translate("AddTextAnimationDialog", "3x6 Font", 0)
        );
        label_11->setText(QApplication::translate("AddTextAnimationDialog", "Delay in ms:", 0));
        spinBox->setSuffix(QString());
    } // retranslateUi

};

namespace Ui {
    class AddTextAnimationDialog: public Ui_AddTextAnimationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTEXTANIMATIONDIALOG_H
