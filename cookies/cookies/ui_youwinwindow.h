/********************************************************************************
** Form generated from reading UI file 'youwinwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YOUWINWINDOW_H
#define UI_YOUWINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_youWinWindow
{
public:
    QPushButton *toChooseButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *star1;
    QSpacerItem *horizontalSpacer_3;
    QLabel *star2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *star3;
    QSpacerItem *horizontalSpacer;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QLabel *text;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QDialog *youWinWindow)
    {
        if (youWinWindow->objectName().isEmpty())
            youWinWindow->setObjectName(QStringLiteral("youWinWindow"));
        youWinWindow->resize(345, 385);
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
        youWinWindow->setPalette(palette);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/cookie1.png"), QSize(), QIcon::Normal, QIcon::Off);
        youWinWindow->setWindowIcon(icon);
        toChooseButton = new QPushButton(youWinWindow);
        toChooseButton->setObjectName(QStringLiteral("toChooseButton"));
        toChooseButton->setGeometry(QRect(120, 330, 91, 31));
        layoutWidget = new QWidget(youWinWindow);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 120, 331, 82));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        star1 = new QLabel(layoutWidget);
        star1->setObjectName(QStringLiteral("star1"));
        star1->setPixmap(QPixmap(QString::fromUtf8(":/images/images/star80.png")));

        horizontalLayout->addWidget(star1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        star2 = new QLabel(layoutWidget);
        star2->setObjectName(QStringLiteral("star2"));
        star2->setPixmap(QPixmap(QString::fromUtf8(":/images/images/star80.png")));

        horizontalLayout->addWidget(star2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        star3 = new QLabel(layoutWidget);
        star3->setObjectName(QStringLiteral("star3"));
        star3->setPixmap(QPixmap(QString::fromUtf8(":/images/images/star80.png")));

        horizontalLayout->addWidget(star3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        layoutWidget1 = new QWidget(youWinWindow);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 70, 341, 27));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        text = new QLabel(layoutWidget1);
        text->setObjectName(QStringLiteral("text"));

        horizontalLayout_2->addWidget(text);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        retranslateUi(youWinWindow);

        QMetaObject::connectSlotsByName(youWinWindow);
    } // setupUi

    void retranslateUi(QDialog *youWinWindow)
    {
        youWinWindow->setWindowTitle(QApplication::translate("youWinWindow", "Win!", Q_NULLPTR));
        toChooseButton->setText(QApplication::translate("youWinWindow", "\320\222\321\213\320\261\320\276\321\200 \321\203\321\200\320\276\320\262\320\275\321\217", Q_NULLPTR));
        star1->setText(QString());
        star2->setText(QString());
        star3->setText(QString());
        text->setText(QApplication::translate("youWinWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600; color:#ffffff;\">\320\222\321\213 \320\262\321\213\320\270\320\263\321\200\320\260\320\273\320\270!</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class youWinWindow: public Ui_youWinWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YOUWINWINDOW_H
