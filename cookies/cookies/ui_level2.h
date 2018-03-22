/********************************************************************************
** Form generated from reading UI file 'level2.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEVEL2_H
#define UI_LEVEL2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Level2
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *steps_2;
    QLabel *cookies_2;
    QSpacerItem *horizontalSpacer_2;
    QLCDNumber *stepsNumber_2;
    QLCDNumber *cookiesNumber_2;
    QPushButton *backToChoose;
    QGraphicsView *graphicsView;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_4;
    QPushButton *downArrow_2;
    QPushButton *upArrow_2;
    QPushButton *leftArrow_2;
    QPushButton *rightArrow_2;
    QPushButton *jumpButton_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *fieldLayout_2;
    QPushButton *startMoveButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Level2)
    {
        if (Level2->objectName().isEmpty())
            Level2->setObjectName(QStringLiteral("Level2"));
        Level2->resize(545, 500);
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
        Level2->setPalette(palette);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/cookie1.png"), QSize(), QIcon::Normal, QIcon::Off);
        Level2->setWindowIcon(icon);
        centralwidget = new QWidget(Level2);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayoutWidget_3 = new QWidget(centralwidget);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(20, 10, 231, 81));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        steps_2 = new QLabel(gridLayoutWidget_3);
        steps_2->setObjectName(QStringLiteral("steps_2"));

        gridLayout_3->addWidget(steps_2, 0, 0, 1, 1);

        cookies_2 = new QLabel(gridLayoutWidget_3);
        cookies_2->setObjectName(QStringLiteral("cookies_2"));

        gridLayout_3->addWidget(cookies_2, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        stepsNumber_2 = new QLCDNumber(gridLayoutWidget_3);
        stepsNumber_2->setObjectName(QStringLiteral("stepsNumber_2"));

        gridLayout_3->addWidget(stepsNumber_2, 1, 0, 1, 1);

        cookiesNumber_2 = new QLCDNumber(gridLayoutWidget_3);
        cookiesNumber_2->setObjectName(QStringLiteral("cookiesNumber_2"));

        gridLayout_3->addWidget(cookiesNumber_2, 1, 2, 1, 1);

        backToChoose = new QPushButton(centralwidget);
        backToChoose->setObjectName(QStringLiteral("backToChoose"));
        backToChoose->setGeometry(QRect(400, 60, 91, 31));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(21, 140, 316, 316));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(360, 290, 177, 134));
        gridLayout_4 = new QGridLayout(gridLayoutWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        downArrow_2 = new QPushButton(gridLayoutWidget);
        downArrow_2->setObjectName(QStringLiteral("downArrow_2"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/images/downarrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        downArrow_2->setIcon(icon1);
        downArrow_2->setIconSize(QSize(32, 32));

        gridLayout_4->addWidget(downArrow_2, 3, 1, 1, 1);

        upArrow_2 = new QPushButton(gridLayoutWidget);
        upArrow_2->setObjectName(QStringLiteral("upArrow_2"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/images/uparrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        upArrow_2->setIcon(icon2);
        upArrow_2->setIconSize(QSize(32, 32));

        gridLayout_4->addWidget(upArrow_2, 0, 1, 1, 1);

        leftArrow_2 = new QPushButton(gridLayoutWidget);
        leftArrow_2->setObjectName(QStringLiteral("leftArrow_2"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/images/leftarrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        leftArrow_2->setIcon(icon3);
        leftArrow_2->setIconSize(QSize(32, 32));

        gridLayout_4->addWidget(leftArrow_2, 1, 0, 1, 1);

        rightArrow_2 = new QPushButton(gridLayoutWidget);
        rightArrow_2->setObjectName(QStringLiteral("rightArrow_2"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/images/rightarrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        rightArrow_2->setIcon(icon4);
        rightArrow_2->setIconSize(QSize(32, 32));

        gridLayout_4->addWidget(rightArrow_2, 1, 2, 1, 1);

        jumpButton_2 = new QPushButton(gridLayoutWidget);
        jumpButton_2->setObjectName(QStringLiteral("jumpButton_2"));

        gridLayout_4->addWidget(jumpButton_2, 1, 1, 2, 1);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(21, 140, 281, 251));
        fieldLayout_2 = new QGridLayout(gridLayoutWidget_2);
        fieldLayout_2->setSpacing(0);
        fieldLayout_2->setObjectName(QStringLiteral("fieldLayout_2"));
        fieldLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        fieldLayout_2->setContentsMargins(0, 0, 0, 0);
        startMoveButton = new QPushButton(centralwidget);
        startMoveButton->setObjectName(QStringLiteral("startMoveButton"));
        startMoveButton->setGeometry(QRect(410, 180, 75, 23));
        Level2->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Level2);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Level2->setStatusBar(statusbar);

        retranslateUi(Level2);

        QMetaObject::connectSlotsByName(Level2);
    } // setupUi

    void retranslateUi(QMainWindow *Level2)
    {
        Level2->setWindowTitle(QApplication::translate("Level2", "Cookies: Level 2", Q_NULLPTR));
        steps_2->setText(QApplication::translate("Level2", "\320\245\320\236\320\224\320\253", Q_NULLPTR));
        cookies_2->setText(QApplication::translate("Level2", "\320\237\320\225\320\247\320\225\320\235\320\254\320\232\320\230", Q_NULLPTR));
        backToChoose->setText(QApplication::translate("Level2", "\320\222\321\213\320\261\320\276\321\200 \321\203\321\200\320\276\320\262\320\275\321\217", Q_NULLPTR));
        downArrow_2->setText(QString());
        upArrow_2->setText(QString());
        leftArrow_2->setText(QString());
        rightArrow_2->setText(QString());
        jumpButton_2->setText(QApplication::translate("Level2", "JUMP", Q_NULLPTR));
        startMoveButton->setText(QApplication::translate("Level2", "\320\227\320\260\320\277\321\203\321\201\320\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Level2: public Ui_Level2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEVEL2_H
