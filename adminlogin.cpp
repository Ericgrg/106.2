#include "adminlogin.h"
#include "ui_adminlogin.h"

#include <QPixmap>

AdminLogin::AdminLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminLogin)
{
    ui->setupUi(this);

}

AdminLogin::~AdminLogin()
{
    delete ui;
}
