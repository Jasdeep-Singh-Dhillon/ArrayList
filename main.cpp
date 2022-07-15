// J-Gross project work to complete IC.

#include <iostream>
#include "ArrayList.h"
#include "List.h"
/*

*/
using namespace std;

int main()
{
	ArrayList a;
	
	cout << "===== empty =====" << endl;
	if (a.empty()) {
		cout << "size = " << a.size() << endl;
	}
	
	cout << "\n===== add 3 elements =====" << endl;
	for (int i = 0; i < 3; i++) {
		a.add(i);
	}
	
	if (a.size() == 3) {
		cout << "size = " << a.size() << endl;
	}

	cout << "\n===== not empty =====" << endl;

	
	if (!a.empty()) {
		cout << "list is not empty\n";
	}
	cout << "\n===== clearing list =====" << endl;
	a.clear();

	if (a.empty()) {
		cout << "size = " << a.size() << endl;
	}

	
	cout << "\n===== inserting 5 elements =====" << endl;
	for (int i = 0; i < 5; i++) {
		a.insert(i, i);
	}
	cout << "list elements: " << a << endl;
	
	cout << "size = " << a.size() << endl;
	cout << "\n===== contains 3 =====" << endl;
	if (a.contains(3)) {
		cout << "list contains 3\n";
	}
	cout << "\n===== does not contain 5 =====" << endl;
	if (!a.contains(5)) {
		cout << "list does not contain 5\n";
	}
	cout << "\n===== removing 2 =====" << endl;
	a.remove(2);
	if (!a.contains(2)) {
		cout << "size = " << a.size() << endl;
		cout << "list elements: " << a << endl;
	}
	cout << "\n===== removing last 2 elements =====" << endl;
	for (int i = 2; i > 0; i--) {
		a.remove(a.size() - 1);
	}
	cout << "size = " << a.size() << endl;
	cout << "list elements: " << a << endl;
	cout << "\n===== inserting 3 elements into the middle =====" << endl;
	for (int i = 4; i > 1; i--) {
		a.insert(a.size() / 2, i);
	}
	cout << "size = " << a.size() << endl;
	cout << "list elements: " << a << endl;
	return 0;
}

