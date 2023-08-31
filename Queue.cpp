#include "Queue.h"

Queue::Queue(int size)
	: Array(size), front{ 0 }, rear{ -1 }, count{ 0 }
{
}

int Queue::get_front()
{
	return front;
}

int Queue::get_rear()
{
	return rear;
}

int Queue::get_count()
{
	return count;
}

int Queue::first()
{
    if(is_empty())
        return data[front];
}

bool Queue::is_empty()
{
	return count == 0;
}

bool Queue::is_full()
{
	return count == size;
}

void Queue::de_queue()
{
    if (is_empty())
        std::cout << "The queue is empty!\n";
    else {
        int x = data[front];
        front = (front + 1) % size;
        count--;
    }
}

void Queue::en_queue(int item)
{
    if (is_full())
        std::cout << "The queue is full!\n";
    else {
        rear = (rear + 1) % size;
        data[rear] = item;
        count++;
    }
}

std::string Queue::to_string()
{
    if (count == 0)
        return "empty";
    std::ostringstream out;
    if (front < rear)
        for (int i = front; i < rear; i++)
            out << data[i] << " ";
    else {
        for (int i = front; i < count; i++)
            out << data[i] << " ";
        for (int i = 0; i < rear; i++)
            out << data[i] << " ";
    }
    out << data[rear];
    return out.str();
}
