#include "Queue.h"

class Queue_Three : private Queue
{
public:
	Queue_Three();
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