#include "Node.h"
Node::Node()
{
}

Node::Node(int val)
{
	this->val = val;
	this->next = nullptr;
}

Node::~Node()
{
	delete next;
}

int Node::getVal()
{
	return val;
}

void Node::seNext(Node *next)
{
	this->next = next;
}

Node* Node::getNext()
{
	return next;
}
