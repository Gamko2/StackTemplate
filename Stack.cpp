#include "stack.h"

long *item;

long Stapel::back()
{
	Knoten popped = *head;
	long data = popped.d;
	return data;
}

bool Stapel::isEmpty() {
	if (get_anz() == 0) {
		return true;
	}
	else {
		return false;
	}
}

Stapel::~Stapel()
{
	cout << "Stack will be deleted" << endl;
	while (!isEmpty()) {
		pop(item);
	}
}

bool Stapel::push(long item) {
	Knoten newNode;
	newNode.d = item;
	newNode.next = head;
	anz++;
	return true;
}

bool Stapel::pop(long * item)
{
	if (!isEmpty()) {
		Knoten popped = *head;
		item = &popped.d;
		head = popped.next;
		anz--;
		delete &popped;
		return true;
		}
	else { 
		cout << "Stack is empty" << endl;
		return false;
	}
}
