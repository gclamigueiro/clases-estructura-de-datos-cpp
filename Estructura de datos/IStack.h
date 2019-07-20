#pragma once

/*
Clase Abstracta(interface) que define el Tipo de Dato Abstracto(TDA) Pila

En este ejemplo se están utilizando plantillas para asi poder utilizar
la pila con cualquier tipo de datos
*/
template <class T> class IStack
{
public:
	virtual void push(T val) = 0;
	virtual T pop() = 0;
	virtual T top() = 0;
	virtual int size() = 0;
	virtual bool empty() = 0;

};

