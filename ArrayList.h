#include<iostream>
#ifndef ARRAYLIST_H
#define ARRAYLIST_H
using namespace std;
class ArrayList
{
private:
	const int BASESIZE;		//capacity of arraylist at start
	double* data;			// The pointer to the first element in the arraylist
	int dataCapacity;		// current capacity of arraylist
	int dataUsed;			// current number of elements in the arraylist
	long shiftedElements;	// number of elements that have been shifted during inserts& removes
	long resizes;			// number of times the arraylist has had to increase capacity by BASESIZE
public:
	ArrayList();// : constructor
	ArrayList(const ArrayList&);// : Copy Constructor
	~ArrayList();// : Deconstructor
	int getShiftedElements();// : returns the value of shiftedElements
	int getResizes();// : returns the value of resizes
	int getCapacity(); // :returns the value of data Capacity
	void ensureCapacity();// : a method to check if an insert / add is valid, if not, it will resize
	void add(double);// : add a new element to the end of the list(append)
	void insert(int, double);// : insert a value into the arraylist at any index
	void clear();// : deletes all the elements in the arraylist
	bool contains(double);// : checks if a value is present in the list, returning true if so, false otherwise
	bool empty();// : checks if the arraylist is empty, returns true / false
	void remove(int);// : removes an element from the arraylist at a given index
	int size();// : returns the value of dataUsedc012
	double	get(int);// : returns the value of the given index, if it is valid, -1 otherwise
	friend ostream& operator<<(ostream&, ArrayList);// : prints the elements in the list

};
#endif
