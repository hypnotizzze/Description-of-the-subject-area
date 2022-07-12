#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QWidget>
#include <QLabel>
#include <QPixmap>
#include <QCoreApplication>
#include <QMessageBox>
#include <QDebug>
#include <QDialog>
#include <QIntValidator>
#include <QDir>
#include <iostream>
#include "ui_mainwindow.h"
#include "ui_form.h"
#include "ui_form_2.h"


class Student {
  public:
    Student(){used = 0; };
    int used;
    int is_used(){ return used; };
    void use(int a){ used = a; };
};

class List {
  public:
    List(){used = 0; };
    int used;
    int is_used(){ return used; };
    void use(int a){ used = a; };
};

class Programm {
  public:
    Programm(){used = 0; };
    int used;
    int is_used(){ return used; };;
    void use(int a){ used = a; };
};

class Otchet {
  public:
    Otchet(){used = 0; };
    int used;
    int is_used(){ return used; };
    void use(int a){ used = a; };
};

class Voprosi {
  public:
    Voprosi(){used = 0; };
    int used;
    int is_used(){ return used; };
    void use(int a){ used = a; };
};

class PC {
  public:
    PC(){used = 0; };
    int used;
    int is_used(){ return used; };
    void use(int a){ used = a; };
};

class PO {
  public:
    PO(){used = 0; };
    int used;
    int is_used(){ return used; };
    void use(int a){ used = a; };
};

class Model {
  public:
    Model(){used = 0; };
    int used;
    int is_used(){ return used; };
    void use(int a){ used = a; };
};

class Sved {
  public:
    Sved(){used = 0; };
    int used;
    int is_used(){ return used; };
    void use(int a){ used = a; };
};

class Word {
  public:
    Word(){used = 0; };
    int used;
    int is_used(){ return used; };
    void use(int a){ used = a; };
};

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void set_default();
    void intro();

private slots:
    void on_view_model_clicked();
    void on_links_clicked();
    void on_atr_clicked();
    void on_Student_clicked();
    void on_List_clicked();
    void on_reset_clicked();
    void on_Programm_clicked();
    void on_Otchet_clicked();
    void on_Question_clicked();
    void on_PC_clicked();
    void on_PO_clicked();
    void on_Model_clicked();
    void on_Info_clicked();
    void on_Word_clicked();
    void vvod();
    void spin(int);

private:
    QDialog *child, *dialog;
    QString str, temp;
    QString fio_1, fio_2, variant, gruppa, lang, os;
    QMessageBox *box;
    Ui::MainWindow *ui;
    Ui::Form *form;
    Ui::Form_2 *form2;
    int flag_dialog;
    Student student;
    List list;
    Programm programm;
    Otchet otchet;
    Voprosi voprosi;
    PC pc;
    PO po;
    Model model;
    Sved sved;
    Word word;
};

#endif // MAINWINDOW_H
