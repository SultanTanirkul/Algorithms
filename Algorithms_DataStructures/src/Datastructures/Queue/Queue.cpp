#include "Queue.h"
#include <limits.h>
#include <iostream>

c_Algorithms_DS::Queue::Queue(int capacity) : length{capacity + 1}
{
    queue = new int[length];
}

c_Algorithms_DS::Queue::~Queue()
{
    delete[] queue;
}

bool c_Algorithms_DS::Queue::enqueue(int num)
{
    if(isFull())
    {
        std::cout << "It is full, Dude. Dequeue it xddd" << std::endl;
        return false;
    }
        

    queue[tail++ % length] = num;
    return true;
}

int c_Algorithms_DS::Queue::dequeue()
{
    if(isEmpty())
    {
        std::cout << "It is empty, Dude. enqueue something xddd" << std::endl;
        return INT_MIN;
    }
    return queue[head++ % length];
}

bool c_Algorithms_DS::Queue::isEmpty()
{
    return head == tail;
}

bool c_Algorithms_DS::Queue::isFull()
{
    return head == (tail + 1) % length;
}