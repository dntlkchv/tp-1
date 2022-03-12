#include <iostream>
#include "Queue.h"

Queue::Queue() {};

Queue* Queue::copy()
{
	Queue *newQueue = new Queue;
	newQueue->head = new Element(*this->head);
	Element *current = newQueue->head;

	while (current)
	{
		Element *prev = current->getPrev();

		if (prev) {
			Element *tmp = new Element(*prev);
			current->setPrev(tmp);
			current = tmp;
		} else {
			break;
		}
	}

	std::cout << "The queue is copied" << std::endl;

	return newQueue;
}

void Queue::setHead(Element* element) {
	this->head = element;
}

void Queue::push(int number) {
	Element *element = new Element(number, head);
	this->head = element;
}

void Queue::pop() {
	if (this->isEmpty()) {
		std::cout << "The queue is empty." << std::endl;
		return;
	}

	Element *tmp = this->head;

	int value = this->head->getData();
	this->head = this->head->getPrev();
	delete tmp;

	std::cout << "Result: " << value << std::endl;
}

Element* Queue::getHead() {
	return head;
}

void Queue::print() {
	if (this->isEmpty()) {
		std::cout << "The queue is empty." << std::endl;
		return;
	}

	Element *current = this->head;

	while (current)
	{
		std::cout << current->getData();

		current = current->getPrev();

		if (current) std::cout << " -> ";
	}

	std::cout << std::endl;

}

bool Queue::isEmpty() {
	return this->head == nullptr;
}


