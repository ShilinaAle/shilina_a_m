/********************************************************************************
** Form generated from reading UI file 'level.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEVEL_H
#define UI_LEVEL_H

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

class Ui_Level
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *downArrow;
    QPushButton *upArrow;
    QPushButton *leftArrow;
    QPushButton *rightArrow;
    QPushButton *jumpButton;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_2;
    QLabel *steps;
    QLabel *cookies;
    QSpacerItem *horizontalSpacer;
    QLCDNumber *stepsNumber;
    QLCDNumber *cookiesNumber;
    QPushButton *backToChoose;
    QGraphicsView *graphicsView;
    QWidget *gridLayoutWidget_2;
    QGridLayout *fieldLayout;
    QPushButton *startMoveButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Level)
    {
        if (Level->objectName().isEmpty())
            Level->setObjectName(QStringLiteral("Level"));
        Level->resize(545, 465);
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
        Level->setPalette(palette);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/cookie1.png"), QSize(), QIcon::Normal, QIcon::Off);
        Level->setWindowIcon(icon);
        centralwidget = new QWidget(Level);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(340, 260, 177, 134));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        downArrow = new QPushButton(gridLayoutWidget);
        downArrow->setObjectName(QStringLiteral("downArrow"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/images/downarrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        downArrow->setIcon(icon1);
        downArrow->setIconSize(QSize(32, 32));

        gridLayout->addWidget(downArrow, 3, 1, 1, 1);

        upArrow = new QPushButton(gridLayoutWidget);
        upArrow->setObjectName(QStringLiteral("upArrow"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/images/uparrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        upArrow->setIcon(icon2);
        upArrow->setIconSize(QSize(32, 32));

        gridLayout->addWidget(upArrow, 0, 1, 1, 1);

        leftArrow = new QPushButton(gridLayoutWidget);
        leftArrow->setObjectName(QStringLiteral("leftArrow"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/images/leftarrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        leftArrow->setIcon(icon3);
        leftArrow->setIconSize(QSize(32, 32));

        gridLayout->addWidget(leftArrow, 1, 0, 1, 1);

        rightArrow = new QPushButton(gridLayoutWidget);
        rightArrow->setObjectName(QStringLiteral("rightArrow"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/images/rightarrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        rightArrow->setIcon(icon4);
        rightArrow->setIconSize(QSize(32, 32));

        gridLayout->addWidget(rightArrow, 1, 2, 1, 1);

        jumpButton = new QPushButton(gridLayoutWidget);
        jumpButton->setObjectName(QStringLiteral("jumpButton"));

        gridLayout->addWidget(jumpButton, 1, 1, 2, 1);

        gridLayoutWidget_3 = new QWidget(centralwidget);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(19, 20, 231, 81));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        steps = new QLabel(gridLayoutWidget_3);
        steps->setObjectName(QStringLiteral("steps"));

        gridLayout_2->addWidget(steps, 0, 0, 1, 1);

        cookies = new QLabel(gridLayoutWidget_3);
        cookies->setObjectName(QStringLiteral("cookies"));

        gridLayout_2->addWidget(cookies, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 1, 1);

        stepsNumber = new QLCDNumber(gridLayoutWidget_3);
        stepsNumber->setObjectName(QStringLiteral("stepsNumber"));

        gridLayout_2->addWidget(stepsNumber, 1, 0, 1, 1);

        cookiesNumber = new QLCDNumber(gridLayoutWidget_3);
        cookiesNumber->setObjectName(QStringLiteral("cookiesNumber"));

        gridLayout_2->addWidget(cookiesNumber, 1, 2, 1, 1);

        backToChoose = new QPushButton(centralwidget);
        backToChoose->setObjectName(QStringLiteral("backToChoose"));
        backToChoose->setGeometry(QRect(380, 40, 91, 31));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(20, 150, 237, 237));
        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(20, 150, 251, 251));
        fieldLayout = new QGridLayout(gridLayoutWidget_2);
        fieldLayout->setSpacing(0);
        fieldLayout->setObjectName(QStringLiteral("fieldLayout"));
        fieldLayout->setSizeConstraint(QLayout::SetFixedSize);
        fieldLayout->setContentsMargins(0, 0, 0, 0);
        startMoveButton = new QPushButton(centralwidget);
        startMoveButton->setObjectName(QStringLiteral("startMoveButton"));
        startMoveButton->setGeometry(QRect(390, 160, 75, 23));
        Level->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Level);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Level->setStatusBar(statusbar);

        retranslateUi(Level);

        QMetaObject::connectSlotsByName(Level);
    } // setupUi

    void retranslateUi(QMainWindow *Level)
    {
        Level->setWindowTitle(QApplication::translate("Level", "Cookies: Level 1", Q_NULLPTR));
        downArrow->setText(QString());
        upArrow->setText(QString());
        leftArrow->setText(QString());
        rightArrow->setText(QString());
        jumpButton->setText(QApplication::translate("Level", "JUMP", Q_NULLPTR));
        steps->setText(QApplication::translate("Level", "\320\245\320\236\320\224\320\253", Q_NULLPTR));
        cookies->setText(QApplication::translate("Level", "\320\237\320\225\320\247\320\225\320\235\320\254\320\232\320\230", Q_NULLPTR));
        backToChoose->setText(QApplication::translate("Level", "\320\222\321\213\320\261\320\276\321\200 \321\203\321\200\320\276\320\262\320\275\321\217", Q_NULLPTR));
        startMoveButton->setText(QApplication::translate("Level", "\320\227\320\260\320\277\321\203\321\201\320\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Level: public Ui_Level {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEVEL_H
