#include <iostream>

#include "Queue_One.h"

void Queue_One::variantTask() {
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
