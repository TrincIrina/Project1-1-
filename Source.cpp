#include<iostream>
#include"Array.h"
#include"Stack.h"
#include"Queue.h"
using namespace std;

void main() {
	srand(time(NULL));
	setlocale(0, "");

	Queue qu(4);
	qu.en_queue(45);
	qu.en_queue(428);
	qu.en_queue(127);
	cout << "Qeueu: " << qu.to_string() << endl << endl;
	cout << "count = " << qu.get_count() << endl;
	cout << "front = " << qu.get_front() << endl;
	cout << "rear = " << qu.get_rear() << endl;
	cout << "first = " << qu.first() << endl;
	cout << "empty: " << qu.is_empty() << endl;
	cout << "full: " << qu.is_full() << endl;
	qu.de_queue();
	cout << "Qeueu: " << qu.to_string() << endl << endl;
	qu.en_queue(53);
	qu.en_queue(86);
	qu.en_queue(359);
	cout << "Qeueu: " << qu.to_string() << endl << endl;
}