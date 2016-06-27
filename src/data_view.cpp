#include "data_view.h"

DataView::DataView()
{
}

DataView::~DataView()
{

}

void DataView::addSource(DataSource *source)
{
	if (source == NULL)
	{
		return;
	}

	if (sources.contains(source) == false)
	{
		sources.append(source);
	}
}
