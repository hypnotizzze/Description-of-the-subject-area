/********************************************************************************
** Form generated from reading UI file 'form_2.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_2_H
#define UI_FORM_2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_2
{
public:
    QPushButton *Vvod;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLineEdit *FIO;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QLineEdit *FIO_2;
    QSplitter *splitter_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QLineEdit *Gruppa;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QSpinBox *spinBox;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QLineEdit *Lang;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QComboBox *OS;

    void setupUi(QWidget *Form_2)
    {
        if (Form_2->objectName().isEmpty())
            Form_2->setObjectName(QString::fromUtf8("Form_2"));
        Form_2->resize(590, 185);
        Vvod = new QPushButton(Form_2);
        Vvod->setObjectName(QString::fromUtf8("Vvod"));
        Vvod->setGeometry(QRect(250, 140, 81, 23));
        splitter = new QSplitter(Form_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(10, 20, 571, 41));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        FIO = new QLineEdit(layoutWidget);
        FIO->setObjectName(QString::fromUtf8("FIO"));

        verticalLayout_2->addWidget(FIO);

        splitter->addWidget(layoutWidget);
        layoutWidget_3 = new QWidget(splitter);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_4);

        FIO_2 = new QLineEdit(layoutWidget_3);
        FIO_2->setObjectName(QString::fromUtf8("FIO_2"));

        verticalLayout_5->addWidget(FIO_2);

        splitter->addWidget(layoutWidget_3);
        splitter_2 = new QSplitter(Form_2);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(10, 82, 571, 41));
        splitter_2->setOrientation(Qt::Horizontal);
        widget = new QWidget(splitter_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_3);

        Gruppa = new QLineEdit(widget);
        Gruppa->setObjectName(QString::fromUtf8("Gruppa"));

        verticalLayout_4->addWidget(Gruppa);

        splitter_2->addWidget(widget);
        widget1 = new QWidget(splitter_2);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        spinBox = new QSpinBox(widget1);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        verticalLayout->addWidget(spinBox);

        splitter_2->addWidget(widget1);
        widget2 = new QWidget(splitter_2);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        verticalLayout_6 = new QVBoxLayout(widget2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_5);

        Lang = new QLineEdit(widget2);
        Lang->setObjectName(QString::fromUtf8("Lang"));

        verticalLayout_6->addWidget(Lang);

        splitter_2->addWidget(widget2);
        widget3 = new QWidget(splitter_2);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        verticalLayout_3 = new QVBoxLayout(widget3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_6);

        OS = new QComboBox(widget3);
        OS->addItem(QString());
        OS->addItem(QString());
        OS->addItem(QString());
        OS->addItem(QString());
        OS->addItem(QString());
        OS->addItem(QString());
        OS->addItem(QString());
        OS->addItem(QString());
        OS->setObjectName(QString::fromUtf8("OS"));
        OS->setEnabled(true);

        verticalLayout_3->addWidget(OS);

        splitter_2->addWidget(widget3);

        retranslateUi(Form_2);

        QMetaObject::connectSlotsByName(Form_2);
    } // setupUi

    void retranslateUi(QWidget *Form_2)
    {
        Form_2->setWindowTitle(QCoreApplication::translate("Form_2", "Form", nullptr));
        Vvod->setText(QCoreApplication::translate("Form_2", "\320\222\320\262\320\276\320\264 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        label->setText(QCoreApplication::translate("Form_2", "\320\244\320\230\320\236 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("Form_2", "\320\244\320\230\320\236 \320\277\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("Form_2", "\320\235\320\276\320\274\320\265\321\200 \320\263\321\200\321\203\320\277\320\277\321\213", nullptr));
        label_2->setText(QCoreApplication::translate("Form_2", "\320\235\320\276\320\274\320\265\321\200 \320\262\320\260\321\200\320\270\320\260\320\275\321\202\320\260", nullptr));
        label_5->setText(QCoreApplication::translate("Form_2", "\320\257\320\267\321\213\320\272 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        label_6->setText(QCoreApplication::translate("Form_2", "\320\236\320\277\320\265\321\200\320\260\321\206\320\270\320\276\320\275\320\275\320\260\321\217 \321\201\320\270\321\201\321\202\320\265\320\274\320\260", nullptr));
        OS->setItemText(0, QCoreApplication::translate("Form_2", "Windows XP", nullptr));
        OS->setItemText(1, QCoreApplication::translate("Form_2", "Windows 7", nullptr));
        OS->setItemText(2, QCoreApplication::translate("Form_2", "Windows 10", nullptr));
        OS->setItemText(3, QCoreApplication::translate("Form_2", "Kubuntu", nullptr));
        OS->setItemText(4, QCoreApplication::translate("Form_2", "Mint", nullptr));
        OS->setItemText(5, QCoreApplication::translate("Form_2", "Manjaro", nullptr));
        OS->setItemText(6, QCoreApplication::translate("Form_2", "Fedora", nullptr));
        OS->setItemText(7, QCoreApplication::translate("Form_2", "Arch", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Form_2: public Ui_Form_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_2_H
