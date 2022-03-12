#include <iostream>

#include "Queue_Three.h"

Queue_Three::Queue_Three()
{
	Queue::Queue();
}

void Queue_Three::push(int number) {
	Queue::push(number);
}

void Queue_Three::pop() {
	return Queue::pop();
}

Queue* Queue_Three::copy() {
	return Queue::copy();
}

Element* Queue_Three::getHead() {
	return Queue::getHead();
}

void Queue_Three::print() {
	Queue::print();
}

bool Queue_Three::isEmpty() {
	return Queue::isEmpty();
}

void Queue_Three::setHead(Element* element) {
	Queue::setHead(element);
}

void Queue_Three::variantTask() {
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
