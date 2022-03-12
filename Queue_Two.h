#include "Queue.h"

class Queue_Two : protected Queue
{
public:
	Queue_Two();
	void push(int element);
	void pop();
	void print();
	bool isEmpty();
	Element* getHead();
	void setHead(Element* element);
	Queue* copy();
	void variantTask();

private:
};

