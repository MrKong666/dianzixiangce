/********************************************************************************
** Form generated from reading UI file 'sideshowdlg.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIDESHOWDLG_H
#define UI_SIDESHOWDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SideShowDig
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *slideShow;
    QGridLayout *gridLayout;
    QWidget *slideprewid;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *slidpreBtn;
    QWidget *picAnimation;
    QWidget *slidenextwid;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *sildnextBtn;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *playBtn;
    QPushButton *closeBtn;
    QWidget *preShow;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QListWidget *PreListWidget;

    void setupUi(QDialog *SideShowDig)
    {
        if (SideShowDig->objectName().isEmpty())
            SideShowDig->setObjectName("SideShowDig");
        SideShowDig->resize(730, 429);
        verticalLayout = new QVBoxLayout(SideShowDig);
        verticalLayout->setObjectName("verticalLayout");
        slideShow = new QWidget(SideShowDig);
        slideShow->setObjectName("slideShow");
        gridLayout = new QGridLayout(slideShow);
        gridLayout->setObjectName("gridLayout");
        slideprewid = new QWidget(slideShow);
        slideprewid->setObjectName("slideprewid");
        slideprewid->setMinimumSize(QSize(80, 0));
        slideprewid->setMaximumSize(QSize(80, 16777215));
        horizontalLayout_5 = new QHBoxLayout(slideprewid);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        slidpreBtn = new QPushButton(slideprewid);
        slidpreBtn->setObjectName("slidpreBtn");

        horizontalLayout_5->addWidget(slidpreBtn);


        gridLayout->addWidget(slideprewid, 1, 0, 1, 1);

        picAnimation = new QWidget(slideShow);
        picAnimation->setObjectName("picAnimation");

        gridLayout->addWidget(picAnimation, 1, 1, 1, 1);

        slidenextwid = new QWidget(slideShow);
        slidenextwid->setObjectName("slidenextwid");
        slidenextwid->setMinimumSize(QSize(80, 0));
        slidenextwid->setMaximumSize(QSize(80, 16777215));
        horizontalLayout_6 = new QHBoxLayout(slidenextwid);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        sildnextBtn = new QPushButton(slidenextwid);
        sildnextBtn->setObjectName("sildnextBtn");

        horizontalLayout_6->addWidget(sildnextBtn);


        gridLayout->addWidget(slidenextwid, 1, 2, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        playBtn = new QPushButton(slideShow);
        playBtn->setObjectName("playBtn");

        horizontalLayout_4->addWidget(playBtn);

        closeBtn = new QPushButton(slideShow);
        closeBtn->setObjectName("closeBtn");

        horizontalLayout_4->addWidget(closeBtn);


        gridLayout->addLayout(horizontalLayout_4, 0, 2, 1, 1);


        verticalLayout->addWidget(slideShow);

        preShow = new QWidget(SideShowDig);
        preShow->setObjectName("preShow");
        horizontalLayout = new QHBoxLayout(preShow);
        horizontalLayout->setObjectName("horizontalLayout");
        widget = new QWidget(preShow);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(0, 120));
        widget->setMaximumSize(QSize(16777215, 120));
        PreListWidget = new QListWidget(widget);
        PreListWidget->setObjectName("PreListWidget");
        PreListWidget->setGeometry(QRect(10, 10, 16777215, 110));
        PreListWidget->setMinimumSize(QSize(0, 110));
        PreListWidget->setMaximumSize(QSize(16777215, 110));

        horizontalLayout->addWidget(widget);


        verticalLayout->addWidget(preShow);

        verticalLayout->setStretch(0, 7);
        verticalLayout->setStretch(1, 1);

        retranslateUi(SideShowDig);

        QMetaObject::connectSlotsByName(SideShowDig);
    } // setupUi

    void retranslateUi(QDialog *SideShowDig)
    {
        SideShowDig->setWindowTitle(QCoreApplication::translate("SideShowDig", "Dialog", nullptr));
        slidpreBtn->setText(QCoreApplication::translate("SideShowDig", "\345\211\215\344\270\200\344\270\252", nullptr));
        sildnextBtn->setText(QCoreApplication::translate("SideShowDig", "\345\220\216\344\270\200\344\270\252", nullptr));
        playBtn->setText(QCoreApplication::translate("SideShowDig", "\346\222\255\346\224\276", nullptr));
        closeBtn->setText(QCoreApplication::translate("SideShowDig", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SideShowDig: public Ui_SideShowDig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIDESHOWDLG_H
