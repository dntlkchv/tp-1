#include "Element.h"
#pragma once

class Queue 
{
public:
	Queue();
	virtual void push(int element);
	virtual void pop();
	virtual void print();
	virtual bool isEmpty();
	virtual Element* getHead();
	virtual void setHead(Element* element);
	virtual Queue* copy();
	void variantTask();

private:
	Element *head;
};


