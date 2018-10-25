/********************************************************************************
** Form generated from reading UI file 'qtprogramwin.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTPROGRAMWIN_H
#define UI_QTPROGRAMWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtProgramWin
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushButton_0;
    QPushButton *pushButton_add;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_1;
    QPushButton *pushButton_subtract;
    QPushButton *pushButton_multiply;
    QPushButton *pushButton_divide;
    QPushButton *pushButton_negative;
    QPushButton *pushButton_equals;

    void setupUi(QMainWindow *QtProgramWin)
    {
        if (QtProgramWin->objectName().isEmpty())
            QtProgramWin->setObjectName(QStringLiteral("QtProgramWin"));
        QtProgramWin->resize(300, 400);
        centralWidget = new QWidget(QtProgramWin);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 300, 100));
        QFont font;
        font.setFamily(QStringLiteral("Arial Narrow"));
        font.setPointSize(16);
        label->setFont(font);
        label->setMargin(10);
        pushButton_0 = new QPushButton(centralWidget);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        pushButton_0->setGeometry(QRect(0, 100, 100, 100));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(16);
        pushButton_0->setFont(font1);
        pushButton_add = new QPushButton(centralWidget);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        pushButton_add->setGeometry(QRect(0, 200, 100, 100));
        pushButton_add->setFont(font1);
        pushButton_clear = new QPushButton(centralWidget);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(200, 100, 100, 100));
        pushButton_clear->setFont(font1);
        pushButton_1 = new QPushButton(centralWidget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(100, 100, 100, 100));
        pushButton_1->setFont(font1);
        pushButton_subtract = new QPushButton(centralWidget);
        pushButton_subtract->setObjectName(QStringLiteral("pushButton_subtract"));
        pushButton_subtract->setGeometry(QRect(100, 200, 100, 100));
        pushButton_subtract->setFont(font1);
        pushButton_multiply = new QPushButton(centralWidget);
        pushButton_multiply->setObjectName(QStringLiteral("pushButton_multiply"));
        pushButton_multiply->setGeometry(QRect(200, 200, 100, 100));
        pushButton_multiply->setFont(font1);
        pushButton_divide = new QPushButton(centralWidget);
        pushButton_divide->setObjectName(QStringLiteral("pushButton_divide"));
        pushButton_divide->setGeometry(QRect(0, 300, 100, 100));
        pushButton_divide->setFont(font1);
        pushButton_negative = new QPushButton(centralWidget);
        pushButton_negative->setObjectName(QStringLiteral("pushButton_negative"));
        pushButton_negative->setGeometry(QRect(100, 300, 100, 100));
        pushButton_negative->setFont(font1);
        pushButton_equals = new QPushButton(centralWidget);
        pushButton_equals->setObjectName(QStringLiteral("pushButton_equals"));
        pushButton_equals->setGeometry(QRect(200, 300, 100, 100));
        pushButton_equals->setFont(font1);
        pushButton_equals->setAutoDefault(false);
        QtProgramWin->setCentralWidget(centralWidget);

        retranslateUi(QtProgramWin);

        pushButton_equals->setDefault(false);


        QMetaObject::connectSlotsByName(QtProgramWin);
    } // setupUi

    void retranslateUi(QMainWindow *QtProgramWin)
    {
        QtProgramWin->setWindowTitle(QApplication::translate("QtProgramWin", "QtProgramWin", Q_NULLPTR));
        label->setText(QApplication::translate("QtProgramWin", "0", Q_NULLPTR));
        pushButton_0->setText(QApplication::translate("QtProgramWin", "0", Q_NULLPTR));
        pushButton_0->setShortcut(QApplication::translate("QtProgramWin", "0", Q_NULLPTR));
        pushButton_add->setText(QApplication::translate("QtProgramWin", "+", Q_NULLPTR));
        pushButton_add->setShortcut(QApplication::translate("QtProgramWin", "+", Q_NULLPTR));
        pushButton_clear->setText(QApplication::translate("QtProgramWin", "C", Q_NULLPTR));
        pushButton_clear->setShortcut(QApplication::translate("QtProgramWin", "Backspace", Q_NULLPTR));
        pushButton_1->setText(QApplication::translate("QtProgramWin", "1", Q_NULLPTR));
        pushButton_1->setShortcut(QApplication::translate("QtProgramWin", "1", Q_NULLPTR));
        pushButton_subtract->setText(QApplication::translate("QtProgramWin", "-", Q_NULLPTR));
        pushButton_subtract->setShortcut(QApplication::translate("QtProgramWin", "-", Q_NULLPTR));
        pushButton_multiply->setText(QApplication::translate("QtProgramWin", "x", Q_NULLPTR));
        pushButton_multiply->setShortcut(QApplication::translate("QtProgramWin", "*", Q_NULLPTR));
        pushButton_divide->setText(QApplication::translate("QtProgramWin", "/", Q_NULLPTR));
        pushButton_divide->setShortcut(QApplication::translate("QtProgramWin", "/", Q_NULLPTR));
        pushButton_negative->setText(QApplication::translate("QtProgramWin", "+/-", Q_NULLPTR));
        pushButton_negative->setShortcut(QApplication::translate("QtProgramWin", "N", Q_NULLPTR));
        pushButton_equals->setText(QApplication::translate("QtProgramWin", "=", Q_NULLPTR));
        pushButton_equals->setShortcut(QApplication::translate("QtProgramWin", "Return", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtProgramWin: public Ui_QtProgramWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTPROGRAMWIN_H
