#include "data_source.h"

DataSource::DataSource(QObject *parent) : QObject(parent)
{
}

DataSource::DataSource(QThread *th, QObject *parent) : QObject(parent)
{
	moveToThread(th);
}

DataSource::~DataSource()
{

}
