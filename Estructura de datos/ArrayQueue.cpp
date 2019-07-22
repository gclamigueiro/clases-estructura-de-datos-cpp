#include "ArrayQueue.h"


ArrayQueue::ArrayQueue()
{
	N = 10;
	rsize = 0;
	indexFrom = 0;
	indexBack = -1;
	values = new int[N];
}


ArrayQueue::ArrayQueue(int N)
{
	this->N = N;
	rsize = 0;
	indexFrom = 0;
	indexBack = -1;
	values = new int[N];
}

ArrayQueue::~ArrayQueue()
{
	delete[] values;
}

void ArrayQueue::push(int value)
{
	if (rsize < N) {

		// si ya se ha insertado en la ultima posicion, se empieza a insertar
		// desde el principio nuevamente
		if (indexBack == N - 1)
			indexBack = -1;

		values[++indexBack] = value;
		rsize++;
	}
	else {
	// error
	}
}

int ArrayQueue::pop()
{
	int val = -1;
	if (!empty()) {
		val = values[indexFrom];
		indexFrom++;

		// si ya se devolvio el elemento de la ultima posicion
		// se empiezan a recuperar de nuevo desde el principio
		if (indexFrom == N)
			indexFrom = 0;

		rsize--;
	}


	return val;
}

int ArrayQueue::front()
{
	int val = -1;

	if (!empty())
		val = values[indexFrom];

	return val;
}

int ArrayQueue::back()
{
	int val = -1;

	if (!empty())
		val = values[indexBack];

	return val;
}

int ArrayQueue::size()
{
	return rsize;
}

bool ArrayQueue::empty()
{
	return rsize == 0;
}
