#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::fillDrop()
{
    ui->CaseTypeWidget->addItem("C");
    ui->CaseTypeWidget->addItem("I");
    ui->CaseTypeWidget->addItem("J");
    ui->CaseTypeWidget->addItem("M");
    ui->CaseTypeWidget->addItem("L");
}

