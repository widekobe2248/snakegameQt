/********************************************************************************
** Form generated from reading UI file 'snakegame.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SNAKEGAME_H
#define UI_SNAKEGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SnakeGame
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SnakeGame)
    {
        if (SnakeGame->objectName().isEmpty())
            SnakeGame->setObjectName(QString::fromUtf8("SnakeGame"));
        SnakeGame->resize(800, 600);
        centralwidget = new QWidget(SnakeGame);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 110, 63, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 170, 63, 20));
        SnakeGame->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SnakeGame);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        SnakeGame->setMenuBar(menubar);
        statusbar = new QStatusBar(SnakeGame);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SnakeGame->setStatusBar(statusbar);

        retranslateUi(SnakeGame);

        QMetaObject::connectSlotsByName(SnakeGame);
    } // setupUi

    void retranslateUi(QMainWindow *SnakeGame)
    {
        SnakeGame->setWindowTitle(QCoreApplication::translate("SnakeGame", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("SnakeGame", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("SnakeGame", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SnakeGame: public Ui_SnakeGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SNAKEGAME_H
