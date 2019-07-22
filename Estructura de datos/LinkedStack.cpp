#include "LinkedStack.h"


LinkedStack::LinkedStack()
{
	topNode = nullptr;
	nsize = 0;
}


LinkedStack::~LinkedStack()
{
	delete topNode;
}

void LinkedStack::push(int val)
{
	Node *newNode = new Node(val);

	if (empty()){
		topNode = newNode;
	}
	else
	{
		newNode->seNext(topNode);
		topNode = newNode;
	}

	nsize++;

}

int LinkedStack::pop()
{
	int val = -1;
	
	if(!empty())
	{ 
	Node *n = topNode;
	val = n->getVal();
	topNode = n->getNext();
	nsize--;
	}

	return val;

}

int LinkedStack::top()
{
	int val = -1;

	if (!empty())
	{
		val = topNode->getVal();
	}

	return val;
}

int LinkedStack::size()
{
	return nsize;
}

bool LinkedStack::empty()
{
	return topNode == nullptr;
}
