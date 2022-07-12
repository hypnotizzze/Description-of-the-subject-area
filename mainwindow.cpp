#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("ИПР_1");
    child = new QDialog(this);
    form = new Ui::Form;
    form->setupUi(child);
    child->setWindowTitle("Модель");
    dialog = new QDialog(this);
    form2 = new Ui::Form_2;
    form2->setupUi(dialog);
    dialog->setWindowTitle("Ввод данных");
    str = PRO_FILE_PWD;
    str.append("/IPR_1.png");
    form2->spinBox->setValue(1);
    QPixmap pixmap(str);
    form->label->setPixmap(pixmap);
    flag_dialog = 0;
    ui->Student->setAutoFillBackground(true);
    ui->List->setAutoFillBackground(true);
    ui->Programm->setAutoFillBackground(true);
    ui->Otchet->setAutoFillBackground(true);
    ui->Question->setAutoFillBackground(true);
    ui->PC->setAutoFillBackground(true);
    ui->PO->setAutoFillBackground(true);
    ui->Model->setAutoFillBackground(true);
    ui->Info->setAutoFillBackground(true);
    ui->Word->setAutoFillBackground(true);
    set_default();
    box = new QMessageBox(dialog);
    connect(form2->Vvod, SIGNAL (clicked()), this, SLOT(vvod()));
    connect(form2->spinBox, SIGNAL(valueChanged(int)), this, SLOT(spin(int)));
}

MainWindow::~MainWindow()
{
  delete child;
  delete dialog;
  delete form;
  delete form2;
  delete ui;
}

void MainWindow::set_default()
{
    student.use(0);
    list.use(0);
    programm.use(0);
    otchet.use(0);
    voprosi.use(0);
    pc.use(0);
    po.use(0);
    model.use(0);
    sved.use(0);
    word.use(0);
    ui->Student->setStyleSheet("background-color: white");
    ui->Student->update();
    ui->List->setStyleSheet("background-color: white");
    ui->List->update();
    ui->Programm->setStyleSheet("background-color: white");
    ui->Programm->update();
    ui->Otchet->setStyleSheet("background-color: white");
    ui->Otchet->update();
    ui->Question->setStyleSheet("background-color: white");
    ui->Question->update();
    ui->PC->setStyleSheet("background-color: white");
    ui->PC->update();
    ui->PO->setStyleSheet("background-color: white");
    ui->PO->update();
    ui->Model->setStyleSheet("background-color: white");
    ui->Model->update();
    ui->Info->setStyleSheet("background-color: white");
    ui->Info->update();
    ui->Word->setStyleSheet("background-color: white");
    ui->Word->update();
    ui->textBrowser->clear();
}

void MainWindow::on_links_clicked()
{
    ui->textBrowser->append("\nСуществующие связи на данном этапе моделирования процесса:");
    if(student.is_used() == 1 && list.is_used() == 1)
      ui->textBrowser->append("Студент читает Лист задания");
    if(student.is_used() == 1 && programm.is_used() == 1)
      ui->textBrowser->append("Студент создает Программу");
    if(student.is_used() == 1 && otchet.is_used() == 1)
      ui->textBrowser->append("Студент пишет Отчет");
    if(student.is_used() == 1 && voprosi.is_used() == 1)
      ui->textBrowser->append("Студент отвечает на Контрольные вопросы");
    if(student.is_used() == 1 && pc.is_used() == 1)
      ui->textBrowser->append("Студент использует Компьютер");
    if(student.is_used() == 1 && model.is_used() == 1)
      ui->textBrowser->append("Студент создает Модель");
    if(student.is_used() == 1 && sved.is_used() == 1)
      ui->textBrowser->append("Студент использует Сведения");
    if(student.is_used() == 1 && word.is_used() == 1)
      ui->textBrowser->append("Студент использует Текстовый процессор");
    if(otchet.is_used() == 1 && word.is_used() == 1)
      ui->textBrowser->append("Отчет использует Текстовый процессор");
    if(otchet.is_used() == 1 && programm.is_used() == 1)
      ui->textBrowser->append("Отчет содержит Программу");
    if(otchet.is_used() == 1 && model.is_used() == 1)
      ui->textBrowser->append("Отчет содержит Модель");
    if(programm.is_used() == 1 && list.is_used() == 1)
      ui->textBrowser->append("Программа ссылается на Лист задания");
    if(programm.is_used() == 1 && pc.is_used() == 1)
      ui->textBrowser->append("Программа выполняется на Компьютере");
    if(programm.is_used() == 1 && model.is_used() == 1)
      ui->textBrowser->append("Программа использует Модель");
    if(list.is_used() == 1 && voprosi.is_used() == 1)
      ui->textBrowser->append("Лист задания содержит Контрольные вопросы");
    if(list.is_used() == 1 && po.is_used() == 1)
      ui->textBrowser->append("Лист задания содержит Предметную область");
    if(model.is_used() == 1 && sved.is_used() == 1)
      ui->textBrowser->append("Модель использует Сведения");
    ui->textBrowser->append("");
    if(student.is_used()==0 && list.is_used()==0 && programm.is_used()==0 && otchet.is_used()==0 && voprosi.is_used()==0 && pc.is_used()==0 && po.is_used()==0 && model.is_used()==0 && sved.is_used()==0 && word.is_used()==0)
      ui->textBrowser->append("Связи отсутствуют");

}

void MainWindow::on_view_model_clicked()
{
  child->show();
}

void MainWindow::intro()
{
  this->hide();
  dialog->show();
}

void MainWindow::on_atr_clicked()
{
    ui->textBrowser->append("Существующие атрибуты для каждой сущности на данном этапе моделирования процесса:");
    if(student.is_used() == 1) {
        ui->textBrowser->append("\nCписок атрибутов для сущности Студент:");
        temp = "ФИО: " + fio_1;
        ui->textBrowser->append(temp);
        temp = "Номер группы: " + gruppa;
        ui->textBrowser->append(temp);
    }
    if(list.is_used() == 1) {
        ui->textBrowser->append("\nCписок атрибутов для сущности Лист задания:");
        temp = "Номер варианта: " + variant;
        ui->textBrowser->append(temp);
        ui->textBrowser->append("Требования: Выполнить индивидуальную практическую работу");
    }
    if(programm.is_used() == 1) {
        ui->textBrowser->append("\nCписок атрибутов для сущности Программа:");
        temp = "Язык программирования: " + lang;
        ui->textBrowser->append(temp);
        ui->textBrowser->append("Количество строк кода: 557");
    }
    if(otchet.is_used() == 1) {
        ui->textBrowser->append("\nCписок атрибутов для сущности Отчет:");
        ui->textBrowser->append("Количество разделов: 4");
        ui->textBrowser->append("Шрифт основого текста: Times New Roman");
        ui->textBrowser->append("Интервал: 1.5");
    }
    if(voprosi.is_used() == 1) {
        ui->textBrowser->append("\nCписок атрибутов для сущности Контрольные вопросы:");
        ui->textBrowser->append("Количество вопросов: 5");
        ui->textBrowser->append("Количество подготовленных ответов: 5");
    }
    if(pc.is_used() == 1) {
        ui->textBrowser->append("\nCписок атрибутов для сущности Компьютер:");
        temp = "Операционная система: " + os;
        ui->textBrowser->append(temp);
    }
    if(po.is_used() == 1) {
        ui->textBrowser->append("\nCписок атрибутов для сущности Предметная область:");
        ui->textBrowser->append("Объекты: ИПР");
        ui->textBrowser->append("Описание: Описание процесса выполнения индивидуальной практической работы");
    }
    if(model.is_used() == 1) {
        ui->textBrowser->append("\nCписок атрибутов для сущности Предметная область:");
        ui->textBrowser->append("Описание: Фото(.png) модели");
    }
    if(sved.is_used() == 1) {
        ui->textBrowser->append("\nCписок атрибутов для сущности Сведения:");
        ui->textBrowser->append("Источник: Совет");
        temp = "Получена информация от " + fio_2;
        ui->textBrowser->append(temp);
        ui->textBrowser->append("Данные: Необходимо сделать диаграмму ""Сущность-Связь""");
    }
    if(word.is_used() == 1) {
        ui->textBrowser->append("\nCписок атрибутов для сущности Текстовый процессор:");
        ui->textBrowser->append("Название: Microsoft Word");
        ui->textBrowser->append("Версия: 16");
        ui->textBrowser->append("Поддерживаемые форматы: .doc, .docx");
    }
    if(student.is_used()==0 && list.is_used()==0 && programm.is_used()==0 && otchet.is_used()==0 && voprosi.is_used()==0 && pc.is_used()==0 && po.is_used()==0 && model.is_used()==0 && sved.is_used()==0 && word.is_used()==0)
      ui->textBrowser->append("Сущности отсутствуют, атрибуты не найдены");
    ui->textBrowser->append("");

}

void MainWindow::on_reset_clicked()
{
  set_default();
}

void MainWindow::on_Student_clicked()
{
  if(student.is_used() == 0) {
   ui->textBrowser->append("Работа над ИПР начата");
   student.use(1);
   ui->Student->setStyleSheet("background-color: green");
   ui->Student->update();
  }
  else if(student.is_used() == 1)
    ui->textBrowser->append("Это действие уже выполнено");
}


void MainWindow::on_List_clicked()
{
  if(student.is_used() == 1 && pc.is_used() == 1) {
    if(list.is_used() == 0) {
      ui->textBrowser->append("Лист задания просмотрен");
      list.use(1);
      ui->List->setStyleSheet("background-color: green");
      ui->List->update();
    }
    else if(list.is_used() == 1)
      ui->textBrowser->append("Это действие уже выполнено");
  }
  else
    ui->textBrowser->append("Чтобы просмотреть лист задания, студенту необходимо включить компьютер");
}

void MainWindow::on_Programm_clicked()
{
  if(student.is_used() == 1 && pc.is_used() == 1 && po.is_used() == 1 && model.is_used() == 1) {
    if(programm.is_used() == 0) {
      ui->textBrowser->append("Программа успешно и корректно написана");
      programm.use(1);
      ui->Programm->setStyleSheet("background-color: green");
      ui->Programm->update();
    }
   else if(programm.is_used() == 1)
    ui->textBrowser->append("Это действие уже выполнено");
  }
  else
    ui->textBrowser->append("Чтобы написать программу, студент должен создать модель");
}

void MainWindow::on_Otchet_clicked()
{
  if(student.is_used() == 1 && list.is_used() == 1 && po.is_used() == 1 && model.is_used() == 1 && pc.is_used() == 1 && programm.is_used() == 1 && word.is_used() == 1) {
    if(otchet.is_used() == 0) {
      ui->textBrowser->append("Отчет успешно и корректно написан");
      otchet.use(1);
      ui->Otchet->setStyleSheet("background-color: green");
      ui->Otchet->update();
    }
    else if(otchet.is_used() == 1)
      ui->textBrowser->append("Это действие уже выполнено");
  }
  else
    ui->textBrowser->append("Чтобы написать отчет, студент должен просмотреть лист задания, изучить предметную область, создать модель и программу на компьютере в текстовом процессоре");
}

void MainWindow::on_Question_clicked()
{
  if(pc.is_used() == 1 && student.is_used() == 1 && list.is_used() == 1) {
    if(voprosi.is_used() == 0) {
      ui->textBrowser->append("Составлены ответы на контрольные вопросы");
      voprosi.use(1);
      ui->Question->setStyleSheet("background-color: green");
      ui->Question->update();
    }
    else if(voprosi.is_used() == 1)
      ui->textBrowser->append("Это действие уже выполнено");
  }
  else
    ui->textBrowser->append("Чтобы ответить на контрольные вопросы, студент должен просмотреть лист задания на компьютере");
}

void MainWindow::on_PC_clicked()
{
  if(student.is_used() == 1) {
    if(pc.is_used() == 0) {
      ui->textBrowser->append("Компьютер включен");
      pc.use(1);
      ui->PC->setStyleSheet("background-color: green");
      ui->PC->update();
    }
    else if(pc.is_used() == 1)
      ui->textBrowser->append("Это действие уже выполнено");
  }
  else
    ui->textBrowser->append("Чтобы включить компьютер, студент должен приступить к работе");
}

void MainWindow::on_PO_clicked()
{
  if(pc.is_used() == 1 && student.is_used() == 1 && list.is_used() == 1) {
    if(po.is_used() == 0) {
      ui->textBrowser->append("Предметная область изучена");
      po.use(1);
      ui->PO->setStyleSheet("background-color: green");
      ui->PO->update();
    }
    else if(po.is_used() == 1)
      ui->textBrowser->append("Это действие уже выполнено");
  }
  else
    ui->textBrowser->append("Чтобы изучить предметную область, студент должен просмотреть лист задания на компьютере");
}

void MainWindow::on_Model_clicked()
{
  if(student.is_used() == 1 && list.is_used() == 1 && po.is_used() == 1 && pc.is_used() == 1) {
    if(model.is_used() == 0) {
      ui->textBrowser->append("Модель успешно создана");
      model.use(1);
      ui->Model->setStyleSheet("background-color: green");
      ui->Model->update();
    }
    else if(model.is_used() == 1)
      ui->textBrowser->append("Это действие уже выполнено");
  }
  else
    ui->textBrowser->append("Чтобы создать модель, студент должен изучить предметную область");
}

void MainWindow::on_Info_clicked()
{
  if(student.is_used() == 1 && pc.is_used() == 1 && list.is_used() == 1) {
    if(sved.is_used() == 0) {
      temp = "Получена информация от " + fio_2;
      ui->textBrowser->append(temp);
      sved.use(1);
      ui->Info->setStyleSheet("background-color: green");
      ui->Info->update();
    }
    else if(sved.is_used() == 1)
      ui->textBrowser->append("Это действие уже выполнено");
  }
  else
    ui->textBrowser->append("Чтобы получить сведения, студент должен просмотреть лист задания");
}

void MainWindow::on_Word_clicked()
{
  if(student.is_used() == 1 && pc.is_used() == 1) {
    if(word.is_used() == 0) {
     ui->textBrowser->append("Текстовый процессор успешно запущен");
     word.use(1);
     ui->Word->setStyleSheet("background-color: green");
     ui->Word->update();
    }
    else if(word.is_used() == 1)
      ui->textBrowser->append("Это действие уже выполнено");
  }
  else
    ui->textBrowser->append("Чтобы взаимодействоть с текстовым процессором, необходимо включить компьютер");
}

void MainWindow::vvod()
{
  fio_1 = form2->FIO->text();
  fio_2 = form2->FIO_2->text();
  gruppa = form2->Gruppa->text();
  lang = form2->Lang->text();
  os = form2->OS->currentText();
  if(fio_1 != "" && fio_2 != "" && gruppa != "" && lang != "") {
    dialog->close();
    this->show();
  }
}

void MainWindow::spin(int arg1)
{
  box->setWindowTitle("Ошибка");
  box->setText("Номера вариантов от 1 до 25");
  if(arg1 <= 0 || arg1 >25) {
    form2->spinBox->setValue(1);
    box->show();
  }
}
