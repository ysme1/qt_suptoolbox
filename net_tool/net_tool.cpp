#include "net_tool.h"
#include "ui_net_tool.h"

net_tool::net_tool(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::net_tool)
{
    ui->setupUi(this);
}

net_tool::~net_tool()
{
    delete ui;
}
