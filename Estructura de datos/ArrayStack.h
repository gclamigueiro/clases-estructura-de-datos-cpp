#pragma once
#include "IStack.h"
class ArrayStack : public IStack
{
    int N;
    int rsize;
    int* values;
public:
    ArrayStack();
    ~ArrayStack();

    void push(int value);
    int pop();
    int top();
    int size();
    bool empty();
};