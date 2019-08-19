#pragma once
#include "IQueue.h"
#include "Node.h"
class LinkedQueue : public IQueue {
private:
    int rsize;
    Node* nfront;
    Node* nback;
public:
    LinkedQueue();
    ~LinkedQueue();

    void push(int value);
	int pop();
	int front();
	int back();
	int size();
	bool empty();
};