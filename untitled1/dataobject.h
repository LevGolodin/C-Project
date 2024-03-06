#ifndef DATAOBJECT_H
#define DATAOBJECT_H

#include <QWidget>
#include <QObject>
#include <QString>

namespace Ui {
class DataObject;
}

class DataObject : public QWidget
{
    Q_OBJECT

public:
    explicit DataObject(QWidget *parent = nullptr);
    ~DataObject();

    QString getStringData() const;
    void setStringData(const QString &value);

private:
    QString m_stringData;
    Ui::DataObject *ui;
};

#endif // DATAOBJECT_H
