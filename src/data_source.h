#ifndef DATA_SOURCE_H
#define DATA_SOURCE_H

#include <QObject>

class Data;

enum Status
{
	S_OK,
	S_ERROR,
	S_WARNING
};

enum Operation
{
	O_SAVE,
	O_DELETE,
	O_MODIFY
};

struct OperationStatus
{
	QString operationId;
	Operation op;
	Status st;
	QString message;
	QList<Data*> dataList;
};

class DataSource : public QObject
{
	Q_OBJECT
public:
	DataSource(QObject* parent = NULL);
	DataSource(QThread* th, QObject* parent = NULL);
	virtual ~DataSource();

	QString saveData(const QList<Data*> &dataList);
	QString deleteData(const QList<Data*> &dataList);
	QString modifyData(const QList<Data*> &dataList);

Q_SIGNALS:
	void dsProcess(Operation op, const QList<Data*> &dataList);
};

#endif // DATA_SOURCE_H
