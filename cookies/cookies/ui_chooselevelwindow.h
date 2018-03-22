/********************************************************************************
** Form generated from reading UI file 'chooselevelwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSELEVELWINDOW_H
#define UI_CHOOSELEVELWINDOW_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chooseLevelWindow
{
public:
    QPushButton *backToFWButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QPushButton *l1Button;
    QPushButton *l2Button;
    QPushButton *l3Button;
    QPushButton *l4Button;
    QPushButton *l5Button;

    void setupUi(QDialog *chooseLevelWindow)
    {
        if (chooseLevelWindow->objectName().isEmpty())
            chooseLevelWindow->setObjectName(QStringLiteral("chooseLevelWindow"));
        chooseLevelWindow->resize(330, 376);
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
        chooseLevelWindow->setPalette(palette);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/cookie1.png"), QSize(), QIcon::Normal, QIcon::Off);
        chooseLevelWindow->setWindowIcon(icon);
        backToFWButton = new QPushButton(chooseLevelWindow);
        backToFWButton->setObjectName(QStringLiteral("backToFWButton"));
        backToFWButton->setGeometry(QRect(90, 300, 151, 41));
        layoutWidget = new QWidget(chooseLevelWindow);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 30, 171, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Palatino Linotype"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        layoutWidget1 = new QWidget(chooseLevelWindow);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(100, 80, 121, 151));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        l1Button = new QPushButton(layoutWidget1);
        l1Button->setObjectName(QStringLiteral("l1Button"));

        verticalLayout->addWidget(l1Button);

        l2Button = new QPushButton(layoutWidget1);
        l2Button->setObjectName(QStringLiteral("l2Button"));

        verticalLayout->addWidget(l2Button);

        l3Button = new QPushButton(layoutWidget1);
        l3Button->setObjectName(QStringLiteral("l3Button"));

        verticalLayout->addWidget(l3Button);

        l4Button = new QPushButton(layoutWidget1);
        l4Button->setObjectName(QStringLiteral("l4Button"));

        verticalLayout->addWidget(l4Button);

        l5Button = new QPushButton(layoutWidget1);
        l5Button->setObjectName(QStringLiteral("l5Button"));

        verticalLayout->addWidget(l5Button);


        retranslateUi(chooseLevelWindow);

        QMetaObject::connectSlotsByName(chooseLevelWindow);
    } // setupUi

    void retranslateUi(QDialog *chooseLevelWindow)
    {
        chooseLevelWindow->setWindowTitle(QApplication::translate("chooseLevelWindow", "Cookies", Q_NULLPTR));
        backToFWButton->setText(QApplication::translate("chooseLevelWindow", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217 \320\262 \320\263\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", Q_NULLPTR));
        label->setText(QApplication::translate("chooseLevelWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\203\321\200\320\276\320\262\320\265\320\275\321\214:", Q_NULLPTR));
        l1Button->setText(QApplication::translate("chooseLevelWindow", "\320\243\321\200\320\276\320\262\320\265\320\275\321\214 1", Q_NULLPTR));
        l2Button->setText(QApplication::translate("chooseLevelWindow", "\320\243\321\200\320\276\320\262\320\265\320\275\321\214 2", Q_NULLPTR));
        l3Button->setText(QApplication::translate("chooseLevelWindow", "\320\243\321\200\320\276\320\262\320\265\320\275\321\214 3", Q_NULLPTR));
        l4Button->setText(QApplication::translate("chooseLevelWindow", "\320\243\321\200\320\276\320\262\320\265\320\275\321\214 4", Q_NULLPTR));
        l5Button->setText(QApplication::translate("chooseLevelWindow", "\320\243\321\200\320\276\320\262\320\265\320\275\321\214 5", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class chooseLevelWindow: public Ui_chooseLevelWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSELEVELWINDOW_H
