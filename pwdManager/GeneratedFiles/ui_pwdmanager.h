/********************************************************************************
** Form generated from reading UI file 'pwdmanager.ui'
**
** Created: Sat Jul 19 13:25:19 2014
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PWDMANAGER_H
#define UI_PWDMANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pwdManagerClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *pwdManagerClass)
    {
        if (pwdManagerClass->objectName().isEmpty())
            pwdManagerClass->setObjectName(QString::fromUtf8("pwdManagerClass"));
        pwdManagerClass->resize(600, 400);
        menuBar = new QMenuBar(pwdManagerClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        pwdManagerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(pwdManagerClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        pwdManagerClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(pwdManagerClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pwdManagerClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(pwdManagerClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        pwdManagerClass->setStatusBar(statusBar);

        retranslateUi(pwdManagerClass);

        QMetaObject::connectSlotsByName(pwdManagerClass);
    } // setupUi

    void retranslateUi(QMainWindow *pwdManagerClass)
    {
        pwdManagerClass->setWindowTitle(QApplication::translate("pwdManagerClass", "pwdManager", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pwdManagerClass: public Ui_pwdManagerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PWDMANAGER_H
