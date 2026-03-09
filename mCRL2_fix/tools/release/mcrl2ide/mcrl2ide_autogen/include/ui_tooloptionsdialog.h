/********************************************************************************
** Form generated from reading UI file 'tooloptionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOLOPTIONSDIALOG_H
#define UI_TOOLOPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ToolOptionsDialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *linearisationLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *linearsationComboBox;
    QLabel *label_2;
    QLineEdit *enumerationAmountEdit;
    QSpacerItem *verticalSpacer;
    QCheckBox *enableJittyc;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *saveButton;
    QPushButton *resetButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *ToolOptionsDialog)
    {
        if (ToolOptionsDialog->objectName().isEmpty())
            ToolOptionsDialog->setObjectName(QString::fromUtf8("ToolOptionsDialog"));
        ToolOptionsDialog->resize(469, 326);
        ToolOptionsDialog->setModal(true);
        verticalLayoutWidget = new QWidget(ToolOptionsDialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 381, 251));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        linearisationLayout = new QHBoxLayout();
        linearisationLayout->setSpacing(9);
        linearisationLayout->setObjectName(QString::fromUtf8("linearisationLayout"));
        linearisationLayout->setSizeConstraint(QLayout::SizeConstraint::SetMinimumSize);
        linearisationLayout->setContentsMargins(20, 6, 6, 6);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMargin(0);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        linearsationComboBox = new QComboBox(verticalLayoutWidget);
        linearsationComboBox->addItem(QString());
        linearsationComboBox->addItem(QString());
        linearsationComboBox->addItem(QString());
        linearsationComboBox->setObjectName(QString::fromUtf8("linearsationComboBox"));

        gridLayout->addWidget(linearsationComboBox, 1, 1, 1, 1);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        enumerationAmountEdit = new QLineEdit(verticalLayoutWidget);
        enumerationAmountEdit->setObjectName(QString::fromUtf8("enumerationAmountEdit"));

        gridLayout->addWidget(enumerationAmountEdit, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);


        linearisationLayout->addLayout(gridLayout);


        verticalLayout->addLayout(linearisationLayout);

        enableJittyc = new QCheckBox(verticalLayoutWidget);
        enableJittyc->setObjectName(QString::fromUtf8("enableJittyc"));

        verticalLayout->addWidget(enableJittyc);

        horizontalLayoutWidget = new QWidget(ToolOptionsDialog);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 270, 381, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, 6, 6, 6);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        saveButton = new QPushButton(horizontalLayoutWidget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        horizontalLayout->addWidget(saveButton);

        resetButton = new QPushButton(horizontalLayoutWidget);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));

        horizontalLayout->addWidget(resetButton);

        cancelButton = new QPushButton(horizontalLayoutWidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout->addWidget(cancelButton);


        retranslateUi(ToolOptionsDialog);

        QMetaObject::connectSlotsByName(ToolOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *ToolOptionsDialog)
    {
        ToolOptionsDialog->setWindowTitle(QCoreApplication::translate("ToolOptionsDialog", "Tool Options", nullptr));
        label->setText(QCoreApplication::translate("ToolOptionsDialog", "Linearisation Method", nullptr));
        linearsationComboBox->setItemText(0, QCoreApplication::translate("ToolOptionsDialog", "regular", nullptr));
        linearsationComboBox->setItemText(1, QCoreApplication::translate("ToolOptionsDialog", "regular2", nullptr));
        linearsationComboBox->setItemText(2, QCoreApplication::translate("ToolOptionsDialog", "stack", nullptr));

        label_2->setText(QCoreApplication::translate("ToolOptionsDialog", "Max Enumeration Amount", nullptr));
        enableJittyc->setText(QCoreApplication::translate("ToolOptionsDialog", "Enables compiling rewriter when available", nullptr));
        saveButton->setText(QCoreApplication::translate("ToolOptionsDialog", "Apply", nullptr));
#if QT_CONFIG(tooltip)
        resetButton->setToolTip(QCoreApplication::translate("ToolOptionsDialog", "Resets the tool options to their default values", nullptr));
#endif // QT_CONFIG(tooltip)
        resetButton->setText(QCoreApplication::translate("ToolOptionsDialog", "Reset", nullptr));
        cancelButton->setText(QCoreApplication::translate("ToolOptionsDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ToolOptionsDialog: public Ui_ToolOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOLOPTIONSDIALOG_H
