#ifndef DATA_POOL_H
#define DATA_POOL_H

class DataPool
{
private:
	DataPool();
	virtual ~DataPool();

public:
	static DataPool* getInstance();

private:
	DataPool* instance;
};

#endif // DATA_POOL_H
