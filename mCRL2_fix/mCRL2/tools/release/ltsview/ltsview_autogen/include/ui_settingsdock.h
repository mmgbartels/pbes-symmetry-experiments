/********************************************************************************
** Form generated from reading UI file 'settingsdock.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDOCK_H
#define UI_SETTINGSDOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsDock
{
public:
    QGridLayout *gridLayout;
    QSpinBox *clusterHeight;
    QSpinBox *branchRotation;
    QLabel *label_19;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_18;
    QLabel *label_18;
    QComboBox *clusterPositioning;
    QSpacerItem *horizontalSpacer_17;
    QComboBox *statePositioning;
    QLabel *label_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_20;
    QComboBox *stateRanking;
    QLabel *label_20;
    QComboBox *visualizationStyle;
    QSpinBox *stateSize;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_19;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_17;
    QSpinBox *branchTilt;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QWidget *SettingsDock)
    {
        if (SettingsDock->objectName().isEmpty())
            SettingsDock->setObjectName(QString::fromUtf8("SettingsDock"));
        SettingsDock->resize(422, 309);
        gridLayout = new QGridLayout(SettingsDock);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        clusterHeight = new QSpinBox(SettingsDock);
        clusterHeight->setObjectName(QString::fromUtf8("clusterHeight"));
        clusterHeight->setMaximum(10000);

        gridLayout->addWidget(clusterHeight, 5, 2, 1, 1);

        branchRotation = new QSpinBox(SettingsDock);
        branchRotation->setObjectName(QString::fromUtf8("branchRotation"));
        branchRotation->setWrapping(true);
        branchRotation->setMaximum(359);

        gridLayout->addWidget(branchRotation, 6, 2, 1, 1);

        label_19 = new QLabel(SettingsDock);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout->addWidget(label_19, 2, 0, 1, 1);

        label_2 = new QLabel(SettingsDock);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 5, 0, 1, 1);

        horizontalSpacer_18 = new QSpacerItem(165, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_18, 1, 1, 1, 1);

        label_18 = new QLabel(SettingsDock);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout->addWidget(label_18, 1, 0, 1, 1);

        clusterPositioning = new QComboBox(SettingsDock);
        clusterPositioning->addItem(QString());
        clusterPositioning->addItem(QString());
        clusterPositioning->setObjectName(QString::fromUtf8("clusterPositioning"));

        gridLayout->addWidget(clusterPositioning, 1, 2, 1, 1);

        horizontalSpacer_17 = new QSpacerItem(165, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_17, 0, 1, 1, 1);

        statePositioning = new QComboBox(SettingsDock);
        statePositioning->addItem(QString());
        statePositioning->addItem(QString());
        statePositioning->setObjectName(QString::fromUtf8("statePositioning"));

        gridLayout->addWidget(statePositioning, 2, 2, 1, 1);

        label_3 = new QLabel(SettingsDock);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        label = new QLabel(SettingsDock);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 4, 0, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(165, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 7, 1, 1, 1);

        horizontalSpacer_20 = new QSpacerItem(165, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_20, 3, 1, 1, 1);

        stateRanking = new QComboBox(SettingsDock);
        stateRanking->addItem(QString());
        stateRanking->addItem(QString());
        stateRanking->setObjectName(QString::fromUtf8("stateRanking"));

        gridLayout->addWidget(stateRanking, 0, 2, 1, 1);

        label_20 = new QLabel(SettingsDock);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout->addWidget(label_20, 3, 0, 1, 1);

        visualizationStyle = new QComboBox(SettingsDock);
        visualizationStyle->addItem(QString());
        visualizationStyle->addItem(QString());
        visualizationStyle->setObjectName(QString::fromUtf8("visualizationStyle"));

        gridLayout->addWidget(visualizationStyle, 3, 2, 1, 1);

        stateSize = new QSpinBox(SettingsDock);
        stateSize->setObjectName(QString::fromUtf8("stateSize"));
        stateSize->setMinimum(1);
        stateSize->setMaximum(1000);

        gridLayout->addWidget(stateSize, 4, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(165, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 4, 1, 1, 1);

        label_4 = new QLabel(SettingsDock);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 7, 0, 1, 1);

        horizontalSpacer_19 = new QSpacerItem(165, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_19, 2, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(165, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 6, 1, 1, 1);

        label_17 = new QLabel(SettingsDock);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout->addWidget(label_17, 0, 0, 1, 1);

        branchTilt = new QSpinBox(SettingsDock);
        branchTilt->setObjectName(QString::fromUtf8("branchTilt"));
        branchTilt->setMaximum(90);

        gridLayout->addWidget(branchTilt, 7, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(165, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 5, 1, 1, 1);

#if QT_CONFIG(shortcut)
        label_19->setBuddy(statePositioning);
        label_2->setBuddy(clusterHeight);
        label_18->setBuddy(clusterPositioning);
        label_3->setBuddy(branchRotation);
        label->setBuddy(stateSize);
        label_20->setBuddy(visualizationStyle);
        label_4->setBuddy(branchTilt);
        label_17->setBuddy(stateRanking);
#endif // QT_CONFIG(shortcut)

        retranslateUi(SettingsDock);

        QMetaObject::connectSlotsByName(SettingsDock);
    } // setupUi

    void retranslateUi(QWidget *SettingsDock)
    {
        SettingsDock->setWindowTitle(QCoreApplication::translate("SettingsDock", "Form", nullptr));
        label_19->setText(QCoreApplication::translate("SettingsDock", "State positioning:", nullptr));
        label_2->setText(QCoreApplication::translate("SettingsDock", "Cluster height:", nullptr));
        label_18->setText(QCoreApplication::translate("SettingsDock", "Cluster positioning:", nullptr));
        clusterPositioning->setItemText(0, QCoreApplication::translate("SettingsDock", "Regular", nullptr));
        clusterPositioning->setItemText(1, QCoreApplication::translate("SettingsDock", "FSMview", nullptr));

        statePositioning->setItemText(0, QCoreApplication::translate("SettingsDock", "Single pass", nullptr));
        statePositioning->setItemText(1, QCoreApplication::translate("SettingsDock", "Multi-pass", nullptr));

        label_3->setText(QCoreApplication::translate("SettingsDock", "Branch rotation:", nullptr));
        label->setText(QCoreApplication::translate("SettingsDock", "State size:", nullptr));
        stateRanking->setItemText(0, QCoreApplication::translate("SettingsDock", "Iterative", nullptr));
        stateRanking->setItemText(1, QCoreApplication::translate("SettingsDock", "Cyclic", nullptr));

        label_20->setText(QCoreApplication::translate("SettingsDock", "Visualization style:", nullptr));
        visualizationStyle->setItemText(0, QCoreApplication::translate("SettingsDock", "Cones", nullptr));
        visualizationStyle->setItemText(1, QCoreApplication::translate("SettingsDock", "Tubes", nullptr));

        label_4->setText(QCoreApplication::translate("SettingsDock", "Branch tilt:", nullptr));
        label_17->setText(QCoreApplication::translate("SettingsDock", "State ranking:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDock: public Ui_SettingsDock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDOCK_H
