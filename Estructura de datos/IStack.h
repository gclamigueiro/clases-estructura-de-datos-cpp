#pragma once

/*
Clase Abstracta(interface) que define el Tipo de Dato Abstracto(TDA) Pila
*/
class IStack
{
public:
	virtual void push(int value) = 0;
	virtual int pop() = 0;
	virtual int top() = 0;
	virtual int size() = 0;
	virtual bool empty() = 0;

};

