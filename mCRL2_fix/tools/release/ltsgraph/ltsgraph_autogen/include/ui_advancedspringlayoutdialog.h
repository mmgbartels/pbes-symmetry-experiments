/********************************************************************************
** Form generated from reading UI file 'advancedspringlayoutdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADVANCEDSPRINGLAYOUTDIALOG_H
#define UI_ADVANCEDSPRINGLAYOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdvancedSpringLayoutDialog
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QFrame *frame_spd;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lbl_spd;
    QLabel *disp_spd;
    QSlider *sld_spd;
    QFrame *frame_acc;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lbl_acc;
    QLabel *disp_acc;
    QSlider *sld_acc;
    QCheckBox *chk_debugDraw;
    QCheckBox *chk_enableTree;
    QPushButton *cmd_reset_positions;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *lbl_attr;
    QComboBox *cmb_attr;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbl_rep;
    QComboBox *cmb_rep;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lbl_stab_thres;
    QLineEdit *txt_stab_thres;
    QHBoxLayout *horizontalLayout_11;
    QLabel *lbl_stab_iters;
    QLineEdit *txt_stab_iters;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *AdvancedSpringLayoutDialog)
    {
        if (AdvancedSpringLayoutDialog->objectName().isEmpty())
            AdvancedSpringLayoutDialog->setObjectName(QString::fromUtf8("AdvancedSpringLayoutDialog"));
        AdvancedSpringLayoutDialog->setWindowModality(Qt::WindowModal);
        AdvancedSpringLayoutDialog->resize(710, 238);
        AdvancedSpringLayoutDialog->setContextMenuPolicy(Qt::DefaultContextMenu);
        AdvancedSpringLayoutDialog->setAutoFillBackground(true);
        horizontalLayout_3 = new QHBoxLayout(AdvancedSpringLayoutDialog);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        frame_spd = new QFrame(AdvancedSpringLayoutDialog);
        frame_spd->setObjectName(QString::fromUtf8("frame_spd"));
        frame_spd->setFrameShape(QFrame::StyledPanel);
        frame_spd->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_spd);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 1, 9, 1);
        lbl_spd = new QLabel(frame_spd);
        lbl_spd->setObjectName(QString::fromUtf8("lbl_spd"));

        horizontalLayout_5->addWidget(lbl_spd);

        disp_spd = new QLabel(frame_spd);
        disp_spd->setObjectName(QString::fromUtf8("disp_spd"));
        disp_spd->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(disp_spd);


        verticalLayout->addWidget(frame_spd);

        sld_spd = new QSlider(AdvancedSpringLayoutDialog);
        sld_spd->setObjectName(QString::fromUtf8("sld_spd"));
        sld_spd->setMaximum(100);
        sld_spd->setOrientation(Qt::Horizontal);
        sld_spd->setTickPosition(QSlider::TicksBelow);
        sld_spd->setTickInterval(25);

        verticalLayout->addWidget(sld_spd);

        frame_acc = new QFrame(AdvancedSpringLayoutDialog);
        frame_acc->setObjectName(QString::fromUtf8("frame_acc"));
        frame_acc->setFrameShape(QFrame::StyledPanel);
        frame_acc->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_acc);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 1, 9, 1);
        lbl_acc = new QLabel(frame_acc);
        lbl_acc->setObjectName(QString::fromUtf8("lbl_acc"));

        horizontalLayout_6->addWidget(lbl_acc);

        disp_acc = new QLabel(frame_acc);
        disp_acc->setObjectName(QString::fromUtf8("disp_acc"));
        disp_acc->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(disp_acc);


        verticalLayout->addWidget(frame_acc);

        sld_acc = new QSlider(AdvancedSpringLayoutDialog);
        sld_acc->setObjectName(QString::fromUtf8("sld_acc"));
        sld_acc->setMaximum(100);
        sld_acc->setOrientation(Qt::Horizontal);
        sld_acc->setTickPosition(QSlider::TicksBelow);
        sld_acc->setTickInterval(25);

        verticalLayout->addWidget(sld_acc);

        chk_debugDraw = new QCheckBox(AdvancedSpringLayoutDialog);
        chk_debugDraw->setObjectName(QString::fromUtf8("chk_debugDraw"));
        chk_debugDraw->setChecked(false);

        verticalLayout->addWidget(chk_debugDraw);

        chk_enableTree = new QCheckBox(AdvancedSpringLayoutDialog);
        chk_enableTree->setObjectName(QString::fromUtf8("chk_enableTree"));
        chk_enableTree->setChecked(true);

        verticalLayout->addWidget(chk_enableTree);

        cmd_reset_positions = new QPushButton(AdvancedSpringLayoutDialog);
        cmd_reset_positions->setObjectName(QString::fromUtf8("cmd_reset_positions"));

        verticalLayout->addWidget(cmd_reset_positions);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lbl_attr = new QLabel(AdvancedSpringLayoutDialog);
        lbl_attr->setObjectName(QString::fromUtf8("lbl_attr"));

        horizontalLayout->addWidget(lbl_attr);

        cmb_attr = new QComboBox(AdvancedSpringLayoutDialog);
        cmb_attr->addItem(QString());
        cmb_attr->addItem(QString());
        cmb_attr->addItem(QString());
        cmb_attr->setObjectName(QString::fromUtf8("cmb_attr"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmb_attr->sizePolicy().hasHeightForWidth());
        cmb_attr->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(cmb_attr);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lbl_rep = new QLabel(AdvancedSpringLayoutDialog);
        lbl_rep->setObjectName(QString::fromUtf8("lbl_rep"));

        horizontalLayout_2->addWidget(lbl_rep);

        cmb_rep = new QComboBox(AdvancedSpringLayoutDialog);
        cmb_rep->addItem(QString());
        cmb_rep->addItem(QString());
        cmb_rep->addItem(QString());
        cmb_rep->setObjectName(QString::fromUtf8("cmb_rep"));
        sizePolicy.setHeightForWidth(cmb_rep->sizePolicy().hasHeightForWidth());
        cmb_rep->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(cmb_rep);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        lbl_stab_thres = new QLabel(AdvancedSpringLayoutDialog);
        lbl_stab_thres->setObjectName(QString::fromUtf8("lbl_stab_thres"));

        horizontalLayout_7->addWidget(lbl_stab_thres);

        txt_stab_thres = new QLineEdit(AdvancedSpringLayoutDialog);
        txt_stab_thres->setObjectName(QString::fromUtf8("txt_stab_thres"));
        sizePolicy.setHeightForWidth(txt_stab_thres->sizePolicy().hasHeightForWidth());
        txt_stab_thres->setSizePolicy(sizePolicy);
        txt_stab_thres->setMinimumSize(QSize(80, 0));
        txt_stab_thres->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_7->addWidget(txt_stab_thres);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        lbl_stab_iters = new QLabel(AdvancedSpringLayoutDialog);
        lbl_stab_iters->setObjectName(QString::fromUtf8("lbl_stab_iters"));

        horizontalLayout_11->addWidget(lbl_stab_iters);

        txt_stab_iters = new QLineEdit(AdvancedSpringLayoutDialog);
        txt_stab_iters->setObjectName(QString::fromUtf8("txt_stab_iters"));
        sizePolicy.setHeightForWidth(txt_stab_iters->sizePolicy().hasHeightForWidth());
        txt_stab_iters->setSizePolicy(sizePolicy);
        txt_stab_iters->setMinimumSize(QSize(80, 0));
        txt_stab_iters->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_11->addWidget(txt_stab_iters);


        verticalLayout_3->addLayout(horizontalLayout_11);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout_3->addLayout(verticalLayout_3);


        retranslateUi(AdvancedSpringLayoutDialog);

        QMetaObject::connectSlotsByName(AdvancedSpringLayoutDialog);
    } // setupUi

    void retranslateUi(QWidget *AdvancedSpringLayoutDialog)
    {
        AdvancedSpringLayoutDialog->setWindowTitle(QCoreApplication::translate("AdvancedSpringLayoutDialog", "Advanced Spring Layout", nullptr));
        lbl_spd->setText(QCoreApplication::translate("AdvancedSpringLayoutDialog", "Speed of state movement:", nullptr));
        disp_spd->setText(QCoreApplication::translate("AdvancedSpringLayoutDialog", "0", nullptr));
        lbl_acc->setText(QCoreApplication::translate("AdvancedSpringLayoutDialog", "Tree accuracy (lower is better):", nullptr));
        disp_acc->setText(QCoreApplication::translate("AdvancedSpringLayoutDialog", "0", nullptr));
        chk_debugDraw->setText(QCoreApplication::translate("AdvancedSpringLayoutDialog", "Draw debug graphs", nullptr));
        chk_enableTree->setText(QCoreApplication::translate("AdvancedSpringLayoutDialog", "Enable tree acceleration for large graphs", nullptr));
        cmd_reset_positions->setText(QCoreApplication::translate("AdvancedSpringLayoutDialog", "Reset layout", nullptr));
        lbl_attr->setText(QCoreApplication::translate("AdvancedSpringLayoutDialog", "Attraction:", nullptr));
        cmb_attr->setItemText(0, QCoreApplication::translate("AdvancedSpringLayoutDialog", "LTSGraph", nullptr));
        cmb_attr->setItemText(1, QCoreApplication::translate("AdvancedSpringLayoutDialog", "Electrical Springs", nullptr));
        cmb_attr->setItemText(2, QCoreApplication::translate("AdvancedSpringLayoutDialog", "Linear Springs", nullptr));

        lbl_rep->setText(QCoreApplication::translate("AdvancedSpringLayoutDialog", "Repulsion:", nullptr));
        cmb_rep->setItemText(0, QCoreApplication::translate("AdvancedSpringLayoutDialog", "LTSGraph", nullptr));
        cmb_rep->setItemText(1, QCoreApplication::translate("AdvancedSpringLayoutDialog", "Electrical Springs", nullptr));
        cmb_rep->setItemText(2, QCoreApplication::translate("AdvancedSpringLayoutDialog", "None", nullptr));

        lbl_stab_thres->setText(QCoreApplication::translate("AdvancedSpringLayoutDialog", "Stability threshold:", nullptr));
        lbl_stab_iters->setText(QCoreApplication::translate("AdvancedSpringLayoutDialog", "Stability iterations:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdvancedSpringLayoutDialog: public Ui_AdvancedSpringLayoutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADVANCEDSPRINGLAYOUTDIALOG_H
