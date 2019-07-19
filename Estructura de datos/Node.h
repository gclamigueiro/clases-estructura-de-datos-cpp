#pragma once
class Node
{
	int val;
	Node *next;

public:
	Node();
	Node(int val);
	~Node();

	int getVal();
	void seNext(Node* nexr);
	Node* getNext();


};

