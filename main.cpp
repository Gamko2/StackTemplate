#include "stack.h"



int main() {
	long i = 5;
	long* item=&i;
	
	Stapel myStack;
	myStack.push(2);
	myStack.push(5);
	myStack.push(10);
	myStack.push(15);
	myStack.pop(item);
	cout << myStack.get_anz() << endl;

	return 0;
}
