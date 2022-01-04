/*
    450-DSA-Cracker
	->Implement a stack from scratch
    by Shubh Sharma
*/

#include <iostream>

const int MAX_SIZE = 5;
int stack[MAX_SIZE];
int top = -1;

void push(int x)
{
    top++;
    if(top >= MAX_SIZE)
    {
        top--;
        std::cout << "Can't push, stack is full!" << std::endl;
        return;
    }
    stack[top] = x;
}

int pop()
{
    if(top < 0)
    {
        std::cout << "underflow" << std::endl;
        return -1;
    }
    return stack[top--];
}

void printStack()
{
    for(int i = 0; i <= top; i++)
    {
        std::cout << stack[i] << " " ;
    }
    std::cout << std::endl;
}

int main()
{
    push(5);
    printStack();
    push(4);
    printStack();
    push(3);
    printStack();
    push(2);
    printStack();
    push(1);
    printStack();
    push(5);
    push(5);
    push(5);
    printStack();
    std::cout << pop() << " " << pop() << std::endl;
    printStack();
    push(7);
    printStack();
    std::cout << pop() << " " << pop() << std::endl;
    std::cout << pop() << " " << pop() << std::endl;
    pop();
    pop();
    push(1);
    printStack();
    push(2);
    printStack();
    return 0;
}