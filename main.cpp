#include <iostream>
#include <string>
#include <conio.h>

#include "Queue.h"
#include "Queue_One.h"
#include "Queue_Two.h"
#include "Queue_Three.h"

using namespace std;

Queue_One* queue1 = new Queue_One();
Queue_Two* queue2 = new Queue_Two();
Queue_Three* queue3 = new Queue_Three();

Queue* copiedQueue;

template <typename T>
void applyCoomand(int command, T queue) {
	system("@cls||clear");

	switch (command)
	{
	case 1:
		int n;

		cout << "Enter the number: ";
		cin >> n;

		queue->push(n);

		cout << "\033[32mSaved successfully.\033[0m" << endl;
		cout << endl << "Press any key to exit" << endl;
		_getch();

		break;

	case 2:
		queue->pop();
		cout << endl << "Press any key to exit" << endl;
		_getch();

		break;

	case 3:
		queue->print();
		cout << endl << "Press any key to exit" << endl;
		_getch();

		break;

	case 4:
		queue->variantTask();
		cout << endl << "Press any key to exit" << endl;
		_getch();

		break;
	case 5:
		if (queue->isEmpty()) {
			cout << "The queue is empty." << endl;
			_getch();
			break;
		}

		copiedQueue = queue->copy();

		cout << endl << "Press any key to exit" << endl;
		_getch();

		break;

	case 6:
		{
		
			if (!copiedQueue) {
				cout << "The queue was not copied." << endl;
				_getch();
				break;
			}

			Element *element = copiedQueue->getHead();

			// доходим до предпоследнего элемента
			while (element->getPrev()) {
				element = element->getPrev();
			}

			element->setPrev(queue->getHead());
			queue->setHead(copiedQueue->getHead());

			copiedQueue = nullptr;

			cout << "\033[32mInserted successfully\033[0m" << endl;

			cout << endl << "Press any key to exit" << endl;
			_getch();

		}
		
		break;

	case 7:
		exit(0);
		break;
	}
}

int main()
{

	int activeQueue = 0;

	for (;;)
	{
		cout << "Enter queue number (from 1 to 3)"  << "\n";
		cin >> activeQueue;

		if (activeQueue >= 1 && activeQueue <= 3) break;
	}

	int command = 0;

	for (;;)
	{
		system("@cls||clear");

		cout << "1. Add  an element to the queue" << endl;
		cout << "2. Retrieve an element from the queue" << endl;
		cout << "3. Display queue on the screen" << endl;
		cout << "4. Finding the first element of larger range" << endl;
		cout << "5. Create copy of the queue" << endl;
		cout << "6. Merging two queues" << endl;
		cout << "7. Exiting the program" << endl;

		cin >> command;

		switch (activeQueue)
		{

			case 1:
				applyCoomand(command, queue1);
				break;
			case 2:
				applyCoomand(command, queue2);
				break;
			case 3:
				applyCoomand(command, queue3);
				break;
		}

	}
}

