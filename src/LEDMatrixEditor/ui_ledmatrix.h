/********************************************************************************
** Form generated from reading UI file 'ledmatrix.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEDMATRIX_H
#define UI_LEDMATRIX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LEDMatrix
{
public:

    void setupUi(QWidget *LEDMatrix)
    {
        if (LEDMatrix->objectName().isEmpty())
            LEDMatrix->setObjectName(QStringLiteral("LEDMatrix"));
        LEDMatrix->resize(400, 300);

        retranslateUi(LEDMatrix);

        QMetaObject::connectSlotsByName(LEDMatrix);
    } // setupUi

    void retranslateUi(QWidget *LEDMatrix)
    {
        LEDMatrix->setWindowTitle(QApplication::translate("LEDMatrix", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class LEDMatrix: public Ui_LEDMatrix {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEDMATRIX_H
