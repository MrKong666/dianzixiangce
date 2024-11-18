#include "slideshowdlg.h"
#include "ui_slideshowdlg.h"
#include"protreeitem.h"
#include"prelistwid.h"
#include"protreewidget.h"
SlideShowDlg::SlideShowDlg(QWidget *parent,
                           QTreeWidgetItem *first_item,
                           QTreeWidgetItem *last_item)
    : QDialog(parent)
    , ui(new Ui::SlideShowDlg),_first_item(first_item),
    _last_item(last_item)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);
    ui->slidepreBtn->SetIcons(":/icon/previous.png",
                              ":/icon/previous_hover.png",
                              ":/icon/previous_press.png");
    ui->slidenextBtn->SetIcons(":/icon/next.png",
                              ":/icon/next_hover.png",
                              ":/icon/next_press.png");
    ui->closeBtn->SetIcons(":/icon/closeshow.png",
                           ":/icon/closeshow_hover.png",
                           ":/icon/closeshow_press.png");
    ui->playBtn->SetIcons(":/icon/play.png",
                          ":/icon/play_hover.png",
                          ":/icon/play_press.png",
                          ":/icon/pause.png",
                          ":/icon/pause_hover.png",
                          ":/icon/pause_press.png");
    // auto t=dynamic_cast<ProTreeItem*>(_first_item);
    // qDebug()<<t->GetPath();


    connect(ui->slidenextBtn,&QPushButton::clicked
            ,this,&SlideShowDlg::SlotSlideNext);
    connect(ui->slidepreBtn,&QPushButton::clicked
            ,this,&SlideShowDlg::SlotSlidePre);
    auto* prelistWid=dynamic_cast<PreListWid*>(ui->preListWidget);
    connect(ui->picAnimation,&PicAnimationWid::SigUpPreList
            ,prelistWid,&PreListWid::SlotUpPreList);
    connect(ui->picAnimation,&PicAnimationWid::SigSelectItem,
            prelistWid,&PreListWid::SlotUpSelect);

    connect(prelistWid,&PreListWid::SigUpSelectShow,
            ui->picAnimation,
            &PicAnimationWid::SlotUpSelectShow);
    connect(ui->playBtn,&PicStateBtn::clicked,
            ui->picAnimation,&PicAnimationWid::SlotStartOrStop);
    connect(ui->picAnimation,&PicAnimationWid::SigStart,
            ui->playBtn,&PicStateBtn::SlotStart);
    connect(ui->picAnimation,&PicAnimationWid::SigStop,
            ui->playBtn,&PicStateBtn::SlotStop);

    auto _protree_widget=dynamic_cast<ProTreeWidget*>(parent);
    connect(ui->picAnimation,&PicAnimationWid::SigStartMusic,
            _protree_widget,&ProTreeWidget::SlotStartMusic);
    connect(ui->picAnimation,&PicAnimationWid::SigStopMusic,
            _protree_widget,&ProTreeWidget::SlotStopMusic);
    ui->picAnimation->SetPixmap(_first_item);



    ui->picAnimation->Start();
}

SlideShowDlg::~SlideShowDlg()
{
    delete ui;
}

void SlideShowDlg::on_closeBtn_clicked()
{
    ui->picAnimation->Stop();
    this->close();
}

void SlideShowDlg::SlotSlideNext()
{
    ui->picAnimation->SlideNext();
}

void SlideShowDlg::SlotSlidePre()
{
    ui->picAnimation->SlidePre();
}

