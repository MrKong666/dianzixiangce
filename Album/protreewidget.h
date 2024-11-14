#ifndef PROTREEWIDGET_H
#define PROTREEWIDGET_H

#include <QTreeWidget>
#include<QTreeWidgetItem>
#include<QAction>
#include<QFileDialog>
#include<QProgressDialog>
#include"protreethread.h"
#include"opentreethread.h"

class SlideShowDlg;
class ProTreeWidget : public QTreeWidget
{
    Q_OBJECT
public:
    ProTreeWidget(QWidget *parent = nullptr);
    void AddProToTree(const QString& name,const QString& path);
private:
    QSet<QString>_set_path;
    //右键单击某个item后弹出菜单
    QTreeWidgetItem* _right_btn_item;
    QTreeWidgetItem* _active_item;
     QTreeWidgetItem* _seleted_item;
    QAction* _action_import;
    QAction* _action_setstart;
    QAction* _action_closepro;
    QAction* _action_slideshow;
    QProgressDialog* _dialog_progress;
    QProgressDialog* _open_progressdlg;
    std::shared_ptr<ProTreeThread>_thread_creat_pro;
    std::shared_ptr<OpenTreeThread>_thread_open_pro;


    std::shared_ptr<SlideShowDlg>_slide_show_dlg;
private slots:
    void SlotItemPressed(QTreeWidgetItem* pressedItem,int column);
    void SlotImport();
    void SlotUpdateProgress(int count);
    void SlotFinishProgress();
    void SlotCancelProgress();
    void SlotSetActive();
    void SlotClosePro();

    void SlotUpOpenProgress(int count);
    void SlotFinishOpenProgress();
    void SlotCancelOpenProgress();
    void SlotDoubleClickItem(QTreeWidgetItem* doubleitem,int column);

    void SlotSlideShow();

public slots:
    void SlotOpenPro(const QString& path);
    void SlotNextShow();
    void SlotPreShow();
signals:
    void SigCancelProgress();
    void SigCancelOpenProgress();
    void SigUpdateSelected(const QString&);
    void SigUpdatePic(const QString&);
    void SigClearSelected();
};

#endif // PROTREEWIDGET_H
