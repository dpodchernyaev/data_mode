#include "data_pool.h"

DataPool* DataPool::instance = NULL;

DataPool::DataPool()
{
}

DataPool *DataPool::getInstance()
{
	if (instance == NULL)
	{
		instance = new DataPool;
	}
	return instance;
}
