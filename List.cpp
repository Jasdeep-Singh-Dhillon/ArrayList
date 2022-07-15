#include "List.h"
using namespace std;
List::~List() {
    
}
ostream& operator<< (ostream& outStream, const List & l) {
    l.print(outStream);
    return outStream;
}