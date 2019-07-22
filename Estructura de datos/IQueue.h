#pragma once

/*
Clase Abstracta(interface) que define el Tipo de Dato Abstracto(TDA) Cola
*/
class IQueue
{
public:
	virtual void push(int value) = 0;
	virtual int pop() = 0;
	virtual int front() = 0;
	virtual int back() = 0;
	virtual int size() = 0;
	virtual bool empty() = 0;
};

