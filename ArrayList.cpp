#include "ArrayList.h"


ArrayList::ArrayList():BASESIZE(10000)
{
	resizes = 0;
	dataCapacity = (resizes+1)*BASESIZE;
	dataUsed = 0;
	shiftedElements = 0;
	data = new double [dataCapacity];
}

ArrayList::ArrayList(const ArrayList& dew):BASESIZE(10000)
{
	resizes = dew.resizes;
	dataCapacity = dew.dataCapacity;
	dataUsed = dew.dataUsed;
	shiftedElements = dew.shiftedElements;
	if (dew.data)
	{
		data = new double[dataUsed];
		for (int i = 0; i < dataUsed; ++i)
		{
			data[i] = dew.data[i];
		}
	}
	else
	{
		data = NULL;
	}
}

ArrayList::~ArrayList()
{
	if (data != NULL)
	{
		delete[] data;
	}
}

int ArrayList::getShiftedElements()
{
	return shiftedElements;
}

int ArrayList::getResizes()
{
	return resizes;
}

int ArrayList::getCapacity() 
{
	return dataCapacity;
}

void ArrayList::ensureCapacity()
{
	if (dataUsed == dataCapacity)
	{
		dataCapacity += BASESIZE;
		++resizes;
		double* temp = new double[dataCapacity];
		for (int i = 0; i < dataUsed; ++i)
		{
			temp[i] = data[i];
		}
		delete[] data;
		data = new double[dataCapacity];
		for(int i=0; i<dataUsed; ++i)
		{
			data[i] = temp[i];
		}
		delete[] temp;
	}
}

void ArrayList::add(double d)
{
	ensureCapacity();
	data[dataUsed] = d;
	++dataUsed;
}

void ArrayList::insert(int index, double d)
{

	if (index < 0)
	{
		return;
	}
	if (index >= dataUsed)
	{
		add(d);
	}
	else
	{
		ensureCapacity();
		double temp;
    dataUsed++;
		for (int i = index; i <dataUsed; i++)
		{
			temp = data[i];
			data[i] = d;
			d = temp;
		}
    
	}
}

void ArrayList::clear()
{
	dataUsed = 0; 
	shiftedElements = 0;
}

bool ArrayList::contains(double d)
{
	for (int i = 0; i < dataUsed; ++i)
	{
		if (data[i] == d)
		{
			return true;
		}
	}
	return false;
}

bool ArrayList::empty()
{
	return (dataUsed==0);
}

void ArrayList::remove(int index)
{
	if (index < dataUsed - 1)
	{
		for (int i = index; i < dataUsed - 1; ++i)
		{
			data[i] = data[i + 1];
		}
	}
	--dataUsed;
}

int ArrayList::size()
{
	return dataUsed;
}

double ArrayList::get(int i)
{
	if (i <= 0 || i >= dataUsed)
	{
		return -1;
	}
	return data[i];
}


ostream& operator<<(ostream& out,ArrayList a)
{
	out << "List elements: [";
	for (int i = 0; i < a.dataUsed; ++i)
	{
		int p = a.data[i];
		cout<<p;
		if (i != a.dataUsed - 1)
		{
			out << ", ";
		}
	}
	out << "]" << endl;
	return out;
}
