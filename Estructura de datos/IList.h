#pragma once


/*
Clase Abstracta(interface) que define el Tipo de Dato Abstracto(TDA) Lista
*/
class IList
{
public:
	virtual void add(int value) = 0;
	virtual void add(int index,int value) = 0;
	virtual void remove(int index) = 0;
	virtual int get(int index) = 0;
	virtual int size() = 0;
	virtual bool empty() = 0;
};
