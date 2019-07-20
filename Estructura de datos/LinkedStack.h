#pragma once
#include "Node.h" 
#include "IStack.h" 

/*Implementacion de Pila con Nodos enlazados*/
template <class T>
class LinkedStack: public IStack<T>
{
	Node<T> *topNode;
	int nsize;

public:
	LinkedStack()
	{
		topNode = nullptr;
		nsize = 0;
	}
	~LinkedStack()
	{
		delete topNode;
	}


	void push(T val)
	{
		Node<T> *newNode = new Node<T>(val);

		if (empty()) {
			topNode = newNode;
		}
		else
		{
			newNode->seNext(topNode);
			topNode = newNode;
		}

		nsize++;

	}

	T pop()
	{
		T val = -1;

		if (!empty())
		{
			Node<T> *n = topNode;
			val = n->getVal();
			topNode = n->getNext();
			nsize--;
		}

		return val;

	}
	T top()
	{
		return topNode->getVal();
	}

	int size()
	{
		return nsize;
	}

	bool empty()
	{
		return topNode == nullptr;
	}



};

