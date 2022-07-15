#ifndef LIST_H
#define LIST_H
#include <iostream>
using namespace std;
/**
 * @author : Sebastian Hensel
 * Email:  shensel@csumb.edu
 * Date: 10/01/2019
 * Purpose: Providing a C++ implementation of an Array and Linked list
 */
class List{
public:
    virtual ~List();
	/**
	 *  Adds a value at the end of the list.
	 */
	virtual void add(double value) = 0;

	/**
	 * Adds a value at a specific index in the list.
	 */
	virtual void insert(int index, double value) = 0;

	/**
	 * Deletes every element in the list.
	 */
	virtual void clear() = 0;

	/**
	 * Checks if the list contains the given value.
	 */
	virtual bool contains(double value) = 0;


	/**
	 * Checks if list is empty.
	 */
	virtual bool empty() const = 0;

	/**
	 * Removes the element at the given index.
	 */
	virtual double remove(int index) = 0;


	/**
	 * Returns the size of the list.
	 */
	virtual int size() const = 0;

	/**
	 * Returns element at given index.
	 */
	virtual double get(int index) = 0;

    virtual void print(ostream & stream) const = 0;

    friend ostream & operator<<(ostream & stream, const List & l);

};
#endif
