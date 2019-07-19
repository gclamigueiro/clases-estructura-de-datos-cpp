#pragma once
#include "Node.h" 
#include "IStack.h" 

/*Implementacion de Pila con Nodos enlazados*/
class LinkedStack: public IStack
{
	Node *topNode;
	int nsize;

public:
	LinkedStack();
	~LinkedStack();

	void push(int value);
	int pop();
	int top();
	int size();
	bool empty();



};

