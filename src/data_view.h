#ifndef DATA_VIEW_H
#define DATA_VIEW_H

#include <QObject>

class DataSource;

class DataView : public QObject
{
	Q_OBJECT
public:
	DataView();
	virtual ~DataView();

	void addSource(DataSource* source);

protected Q_SLOTS:

private:
	QList<DataSource*> sources;
};

#endif // DATA_VIEW_H
