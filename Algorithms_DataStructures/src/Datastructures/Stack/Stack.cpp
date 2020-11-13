#include "Stack.h"
#include <iostream>

c_Algorithms_DS::Stack::Stack(int length) : length{}
{
    stack = new int[length];
}

bool c_Algorithms_DS::Stack::stackEmpty()
{
    return top < 0;
}

bool c_Algorithms_DS::Stack::push(int num)
{
    if(length - 1 <= top)
    {
        std::cout << "Overflow" << std:: endl;
        return false;   
    }
    else
    {
        stack[++top] = num;
        return true;
    }
}

int c_Algorithms_DS::Stack::pop()
{
    if(stackEmpty())
    {
        std::cout << "Underflow" << std:: endl;
        return -1;
    }

    return stack[top--];
}

int main()
{
    c_Algorithms_DS::Stack stack(0);
    stack.push(3);
    std::cout <<  stack.stackEmpty() << " " << stack.pop() << std::endl;
    return 0;
}