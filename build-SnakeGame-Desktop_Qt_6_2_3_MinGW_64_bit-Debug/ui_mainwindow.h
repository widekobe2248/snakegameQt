/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QLabel *label_3;
    QPushButton *pushButton;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(502, 381);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 501, 341));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Light, brush);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush1(QColor(0, 0, 0, 128));
        brush1.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        frame->setPalette(palette);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 10, 171, 51));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush2(QColor(255, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        QBrush brush3(QColor(255, 127, 127, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush3);
        QBrush brush4(QColor(255, 63, 63, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush4);
        QBrush brush5(QColor(127, 0, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush5);
        QBrush brush6(QColor(170, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush7(QColor(255, 255, 255, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        label->setPalette(palette1);
        QFont font;
        font.setFamilies({QString::fromUtf8("OCR A Extended")});
        font.setPointSize(24);
        label->setFont(font);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 60, 101, 21));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush7);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        label_2->setPalette(palette2);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Gloucester MT Extra Condensed")});
        font1.setPointSize(14);
        label_2->setFont(font1);
        horizontalLayoutWidget = new QWidget(frame);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(130, 90, 222, 81));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(horizontalLayoutWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush9(QColor(144, 238, 144, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush5);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush7);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        radioButton->setPalette(palette3);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("OCR A Extended")});
        radioButton->setFont(font2);
        radioButton->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 238, 144);\n"
"border: 1 solid"));
        radioButton->setChecked(true);

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(horizontalLayoutWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush10(QColor(90, 90, 255, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush5);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush7);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        radioButton_2->setPalette(palette4);
        radioButton_2->setFont(font2);
        radioButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(90, 90, 255);\n"
"border: 1 solid"));
        radioButton_2->setChecked(false);

        horizontalLayout->addWidget(radioButton_2);

        horizontalLayoutWidget_2 = new QWidget(frame);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(130, 210, 221, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        radioButton_3 = new QRadioButton(horizontalLayoutWidget_2);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush5);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush7);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        radioButton_3->setPalette(palette5);
        radioButton_3->setFont(font2);
        radioButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(90, 90, 255);\n"
"border: 1 solid"));

        horizontalLayout_2->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(horizontalLayoutWidget_2);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush4);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush5);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush7);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        radioButton_4->setPalette(palette6);
        radioButton_4->setFont(font2);
        radioButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 238, 144);\n"
"border: 1 solid"));
        radioButton_4->setChecked(true);

        horizontalLayout_2->addWidget(radioButton_4);

        radioButton_5 = new QRadioButton(horizontalLayoutWidget_2);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush7);
        QBrush brush11(QColor(199, 246, 199, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        QBrush brush12(QColor(72, 119, 72, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush12);
        QBrush brush13(QColor(96, 159, 96, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush7);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush7);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush7);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush11);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush7);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush7);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        radioButton_5->setPalette(palette7);
        radioButton_5->setFont(font2);
        radioButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"border: 1 solid"));

        horizontalLayout_2->addWidget(radioButton_5);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(130, 180, 101, 21));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush4);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush5);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush7);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush4);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush5);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush7);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush5);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush7);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        label_3->setPalette(palette8);
        label_3->setFont(font1);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 300, 83, 29));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush9);
        QBrush brush14(QColor(127, 255, 127, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette9.setBrush(QPalette::Active, QPalette::Light, brush14);
        QBrush brush15(QColor(63, 255, 63, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette9.setBrush(QPalette::Active, QPalette::Midlight, brush15);
        QBrush brush16(QColor(0, 127, 0, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette9.setBrush(QPalette::Active, QPalette::Dark, brush16);
        QBrush brush17(QColor(0, 170, 0, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette9.setBrush(QPalette::Active, QPalette::Mid, brush17);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush18(QColor(0, 255, 0, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette9.setBrush(QPalette::Active, QPalette::BrightText, brush18);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette9.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette9.setBrush(QPalette::Active, QPalette::NoRole, brush18);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipBase, brush18);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush19(QColor(0, 255, 0, 128));
        brush19.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush19);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette9.setBrush(QPalette::Inactive, QPalette::Light, brush14);
        palette9.setBrush(QPalette::Inactive, QPalette::Midlight, brush15);
        palette9.setBrush(QPalette::Inactive, QPalette::Dark, brush16);
        palette9.setBrush(QPalette::Inactive, QPalette::Mid, brush17);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::BrightText, brush18);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette9.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette9.setBrush(QPalette::Inactive, QPalette::NoRole, brush18);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush18);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush19);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush16);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette9.setBrush(QPalette::Disabled, QPalette::Light, brush14);
        palette9.setBrush(QPalette::Disabled, QPalette::Midlight, brush15);
        palette9.setBrush(QPalette::Disabled, QPalette::Dark, brush16);
        palette9.setBrush(QPalette::Disabled, QPalette::Mid, brush17);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush16);
        palette9.setBrush(QPalette::Disabled, QPalette::BrightText, brush18);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush16);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette9.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush18);
        palette9.setBrush(QPalette::Disabled, QPalette::NoRole, brush18);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush18);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush19);
#endif
        pushButton->setPalette(palette9);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 238, 144);\n"
"border: 1 solid"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(130, 0, 51, 61));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush9);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette10.setBrush(QPalette::Active, QPalette::Light, brush7);
        palette10.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette10.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette10.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush);
        palette10.setBrush(QPalette::Active, QPalette::BrightText, brush7);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette10.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush9);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette10.setBrush(QPalette::Inactive, QPalette::Light, brush7);
        palette10.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette10.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette10.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::BrightText, brush7);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette10.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush11);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette10.setBrush(QPalette::Disabled, QPalette::Light, brush7);
        palette10.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette10.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette10.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette10.setBrush(QPalette::Disabled, QPalette::BrightText, brush7);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette10.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        label_4->setPalette(palette10);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Bradley Hand ITC")});
        font3.setPointSize(48);
        label_4->setFont(font3);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 502, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "nake Game", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Mode:", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "1 PLAYER", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "2 PLAYER", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "Slug", nullptr));
        radioButton_4->setText(QCoreApplication::translate("MainWindow", "Worm", nullptr));
        radioButton_5->setText(QCoreApplication::translate("MainWindow", "Python", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Speed:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Start Game", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "S", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
