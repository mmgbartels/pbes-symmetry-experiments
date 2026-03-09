/********************************************************************************
** Form generated from reading UI file 'rewriteexpressiondock.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REWRITEEXPRESSIONDOCK_H
#define UI_REWRITEEXPRESSIONDOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RewriteExpressionDock
{
public:
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *rewriteButton;
    QPushButton *cancelButton;
    QLineEdit *inputEdit;
    QLabel *label;
    QTextBrowser *resultText;
    QLabel *labelResult;

    void setupUi(QDockWidget *RewriteExpressionDock)
    {
        if (RewriteExpressionDock->objectName().isEmpty())
            RewriteExpressionDock->setObjectName(QString::fromUtf8("RewriteExpressionDock"));
        RewriteExpressionDock->setEnabled(true);
        RewriteExpressionDock->resize(787, 565);
        RewriteExpressionDock->setFloating(true);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        gridLayout = new QGridLayout(dockWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        gridLayout_2->setContentsMargins(6, 6, 6, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(6, 6, 6, 6);
        rewriteButton = new QPushButton(dockWidgetContents);
        rewriteButton->setObjectName(QString::fromUtf8("rewriteButton"));

        horizontalLayout_2->addWidget(rewriteButton);

        cancelButton = new QPushButton(dockWidgetContents);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setCheckable(false);
        cancelButton->setFlat(false);

        horizontalLayout_2->addWidget(cancelButton);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        inputEdit = new QLineEdit(dockWidgetContents);
        inputEdit->setObjectName(QString::fromUtf8("inputEdit"));

        gridLayout_2->addWidget(inputEdit, 0, 1, 1, 1);

        label = new QLabel(dockWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        resultText = new QTextBrowser(dockWidgetContents);
        resultText->setObjectName(QString::fromUtf8("resultText"));

        gridLayout_2->addWidget(resultText, 2, 1, 1, 1);

        labelResult = new QLabel(dockWidgetContents);
        labelResult->setObjectName(QString::fromUtf8("labelResult"));
        labelResult->setScaledContents(false);
        labelResult->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        gridLayout_2->addWidget(labelResult, 2, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);

        RewriteExpressionDock->setWidget(dockWidgetContents);

        retranslateUi(RewriteExpressionDock);

        cancelButton->setDefault(false);


        QMetaObject::connectSlotsByName(RewriteExpressionDock);
    } // setupUi

    void retranslateUi(QDockWidget *RewriteExpressionDock)
    {
        RewriteExpressionDock->setWindowTitle(QCoreApplication::translate("RewriteExpressionDock", "Rewrite Expression", nullptr));
        rewriteButton->setText(QCoreApplication::translate("RewriteExpressionDock", "Rewrite", nullptr));
        cancelButton->setText(QCoreApplication::translate("RewriteExpressionDock", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("RewriteExpressionDock", "Expression", nullptr));
        labelResult->setText(QCoreApplication::translate("RewriteExpressionDock", "Result", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RewriteExpressionDock: public Ui_RewriteExpressionDock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REWRITEEXPRESSIONDOCK_H
