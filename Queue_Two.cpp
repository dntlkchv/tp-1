#include <iostream>

#include "Queue_Two.h"

Queue_Two::Queue_Two()
{
	Queue::Queue();
}

void Queue_Two::push(int number) {
	Queue::push(number);
}

void Queue_Two::pop() {
	return Queue::pop();
}

Element* Queue_Two::getHead() {
	return Queue::getHead();
}

Queue* Queue_Two::copy() {
	return Queue::copy();
}

void Queue_Two::print() {
	Queue::print();
}

bool Queue_Two::isEmpty() {
	return Queue::isEmpty();
}
void Queue_Two::setHead(Element* element) {
	Queue::setHead(element);
}


void Queue_Two::variantTask() {
	if (this->isEmpty()) {
		std::cout << "The queue is empty." << std::endl;
		return;
	}

	Element *element = this->getHead();

	int min = element->getData();
	int max = element->getData();

	while (element)
	{
		min = (element->getData() < min) ? element->getData() : min;
		max = (element->getData() > max) ? element->getData() : max;

		element = element->getPrev();
	}

	element = this->getHead();

	while (element)
	{
		if (element->getData() > max - min) {
			std::cout << "Result: " << element->getData() << std::endl;

			break;
		}
		element = element->getPrev();
	}

}
