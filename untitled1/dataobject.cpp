#include "dataobject.h"
#include "ui_dataobject.h"

DataObject::DataObject(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DataObject)
{
    ui->setupUi(this);
}

QString DataObject::getStringData() const
{
    return m_stringData;
}

void DataObject::setStringData(const QString &value)
{
    m_stringData = value;
}

DataObject::~DataObject()
{
    delete ui;
}
