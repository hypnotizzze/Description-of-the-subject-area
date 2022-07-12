/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Student;
    QPushButton *List;
    QPushButton *Programm;
    QPushButton *Otchet;
    QPushButton *Question;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *PC;
    QPushButton *PO;
    QPushButton *Model;
    QPushButton *Info;
    QPushButton *Word;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *view_model;
    QPushButton *links;
    QPushButton *atr;
    QPushButton *reset;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1051, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 881, 111));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        Student = new QPushButton(horizontalLayoutWidget);
        Student->setObjectName(QString::fromUtf8("Student"));

        horizontalLayout_3->addWidget(Student);

        List = new QPushButton(horizontalLayoutWidget);
        List->setObjectName(QString::fromUtf8("List"));

        horizontalLayout_3->addWidget(List);

        Programm = new QPushButton(horizontalLayoutWidget);
        Programm->setObjectName(QString::fromUtf8("Programm"));

        horizontalLayout_3->addWidget(Programm);

        Otchet = new QPushButton(horizontalLayoutWidget);
        Otchet->setObjectName(QString::fromUtf8("Otchet"));

        horizontalLayout_3->addWidget(Otchet);

        Question = new QPushButton(horizontalLayoutWidget);
        Question->setObjectName(QString::fromUtf8("Question"));

        horizontalLayout_3->addWidget(Question);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 110, 881, 111));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        PC = new QPushButton(horizontalLayoutWidget_2);
        PC->setObjectName(QString::fromUtf8("PC"));

        horizontalLayout_5->addWidget(PC);

        PO = new QPushButton(horizontalLayoutWidget_2);
        PO->setObjectName(QString::fromUtf8("PO"));

        horizontalLayout_5->addWidget(PO);

        Model = new QPushButton(horizontalLayoutWidget_2);
        Model->setObjectName(QString::fromUtf8("Model"));

        horizontalLayout_5->addWidget(Model);

        Info = new QPushButton(horizontalLayoutWidget_2);
        Info->setObjectName(QString::fromUtf8("Info"));

        horizontalLayout_5->addWidget(Info);

        Word = new QPushButton(horizontalLayoutWidget_2);
        Word->setObjectName(QString::fromUtf8("Word"));

        horizontalLayout_5->addWidget(Word);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(910, 0, 131, 221));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        view_model = new QPushButton(verticalLayoutWidget);
        view_model->setObjectName(QString::fromUtf8("view_model"));

        verticalLayout_3->addWidget(view_model);

        links = new QPushButton(verticalLayoutWidget);
        links->setObjectName(QString::fromUtf8("links"));

        verticalLayout_3->addWidget(links);

        atr = new QPushButton(verticalLayoutWidget);
        atr->setObjectName(QString::fromUtf8("atr"));

        verticalLayout_3->addWidget(atr);

        reset = new QPushButton(verticalLayoutWidget);
        reset->setObjectName(QString::fromUtf8("reset"));

        verticalLayout_3->addWidget(reset);

        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 220, 1031, 351));
        textBrowser->setTabletTracking(false);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1051, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Student->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\321\202\321\214 \321\200\320\260\320\261\320\276\321\202\321\203", nullptr));
        List->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \320\273\320\270\321\201\321\202 \320\267\320\260\320\264\320\260\320\275\320\270\321\217", nullptr));
        Programm->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203", nullptr));
        Otchet->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \320\276\321\202\321\207\320\265\321\202", nullptr));
        Question->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\262\320\265\321\202\320\270\321\202\321\214 \320\275\320\260 \320\272\320\276\320\275\321\202\321\200\320\276\320\273\321\214\320\275\321\213\320\265 \320\262\320\276\320\277\321\200\320\276\321\201\321\213", nullptr));
        PC->setText(QCoreApplication::translate("MainWindow", "\320\222\320\272\320\273\321\216\321\207\320\270\321\202\321\214 \320\272\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200", nullptr));
        PO->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\321\203\321\207\320\270\321\202\321\214 \320\277\321\200\320\265\320\264\320\274\320\265\321\202\320\275\321\203\321\216 \320\276\320\261\320\273\320\260\321\201\321\202\321\214", nullptr));
        Model->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\274\320\276\320\264\320\265\320\273\321\214", nullptr));
        Info->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273\321\203\321\207\320\270\321\202\321\214 \320\264\320\276\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\214\320\275\321\203\321\216 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\216", nullptr));
        Word->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\202\320\265\320\272\321\201\321\202\320\276\320\262\321\213\320\271 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\276\321\200", nullptr));
        view_model->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \320\274\320\276\320\264\320\265\320\273\321\214", nullptr));
        links->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \321\201\320\262\321\217\320\267\320\270", nullptr));
        atr->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \320\260\321\202\321\200\320\270\320\261\321\203\321\202\321\213", nullptr));
        reset->setText(QCoreApplication::translate("MainWindow", "\320\241\320\261\321\200\320\276\321\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
