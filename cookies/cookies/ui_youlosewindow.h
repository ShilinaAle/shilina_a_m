/********************************************************************************
** Form generated from reading UI file 'youlosewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YOULOSEWINDOW_H
#define UI_YOULOSEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_youlosewindow
{
public:
    QPushButton *backToChooseButton;
    QLabel *label;

    void setupUi(QDialog *youlosewindow)
    {
        if (youlosewindow->objectName().isEmpty())
            youlosewindow->setObjectName(QStringLiteral("youlosewindow"));
        youlosewindow->resize(345, 385);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(160, 190, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        youlosewindow->setPalette(palette);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/cookie1.png"), QSize(), QIcon::Normal, QIcon::Off);
        youlosewindow->setWindowIcon(icon);
        backToChooseButton = new QPushButton(youlosewindow);
        backToChooseButton->setObjectName(QStringLiteral("backToChooseButton"));
        backToChooseButton->setGeometry(QRect(130, 330, 91, 31));
        label = new QLabel(youlosewindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 90, 211, 101));

        retranslateUi(youlosewindow);

        QMetaObject::connectSlotsByName(youlosewindow);
    } // setupUi

    void retranslateUi(QDialog *youlosewindow)
    {
        youlosewindow->setWindowTitle(QApplication::translate("youlosewindow", "Game Over", Q_NULLPTR));
        backToChooseButton->setText(QApplication::translate("youlosewindow", "\320\222\321\213\320\261\320\276\321\200 \321\203\321\200\320\276\320\262\320\275\321\217", Q_NULLPTR));
        label->setText(QApplication::translate("youlosewindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600; color:#ffffff;\">\320\222\321\213 \320\277\321\200\320\276\320\270\320\263\321\200\320\260\320\273\320\270!</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class youlosewindow: public Ui_youlosewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YOULOSEWINDOW_H
