#pragma once

#include "IList.h"
#include "Node.h"

class LinkedList: public IList
{
	int rsize;
	Node *head;
	Node *last;


public:
	LinkedList();
	~LinkedList();

	void add(int value) ;
	void add(int index, int value) ;
	void remove(int index) ;
	int get(int index) ;
	int size() ;
	bool empty() ;

private:
	bool validIndex(int index);
	Node* getNode(int index);

};

