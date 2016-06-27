#ifndef DATA_H
#define DATA_H

#include <QString>
#include <QUuid>

class DataSource;

class Data
{
public:
	Data(DataSource* owner);

	virtual QString toStr();
	virtual bool parseStr(const QString &str);

private:
	QUuid uuid;
	DataSource* owner;
};

#endif // DATA_H
