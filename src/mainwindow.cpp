#include "mainwindow.h"
#include "../ui/ui_mainwindow.h"
#include "reader_dialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
        db.openDB();
        ui->setupUi(this);
    }

MainWindow::~MainWindow() {
    db.closeDB();
    delete ui;
}

void MainWindow::on_pushButton_readers_clicked() {
    reader_d = new reader_dialog(this);
    hide();
    reader_d->setModal(true);
    reader_d->show();
}
