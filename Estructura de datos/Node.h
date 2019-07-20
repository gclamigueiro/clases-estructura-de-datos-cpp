#pragma once
template <class T>
class Node
{
	T val;
	Node<T> *next;

public:
     Node() {}
     Node(T val)
	{
		this->val = val;
		this->next = nullptr;
	}

	~Node()
	{
		delete next;
	}

	 T getVal()
	{
		return val;
	}

	void seNext(Node<T>* next)
	{
		this->next = next;
	}

	Node* getNext()
	{
		return next;
	}


};

