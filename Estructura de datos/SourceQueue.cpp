#include <iostream> 
#include <random> 
#include "ArrayQueue.h"	 

using namespace std;
using namespace System;


void showq(IQueue *gquiz)
{
	while (!gquiz->empty())
	{
		cout  << gquiz->front() << " ";
		gquiz->pop();
	}
	cout << endl;
}

int mainQueue()
{
	// se está utlizando la implementacion de cola con arreglos circular,
	// en la clase hacer la implementación con nodos enlzadaos
	IQueue *gquiz = new ArrayQueue(3);
	
	cout << "Insertando los valores 10 12 14" << endl;
	gquiz->push(10);
	gquiz->push(12);
	gquiz->push(14);

	
	cout << "gquiz.size() : " << gquiz->size() << endl;
	cout << "gquiz.front() : " << gquiz->front() << endl;
	cout << "gquiz.back() : " << gquiz->back() << endl;

	cout << endl;
	cout << "Se hace pop  devolviendo 10 y quedando front 12 y back 14" << endl;


	cout << "gquiz.pop() : " << gquiz->pop() << endl;
	cout << "gquiz.front() : " << gquiz->front() << endl;
	cout << "gquiz.back() : " << gquiz->back() << endl;


	cout << endl;
	cout << "Se inserta 16" << endl;
	gquiz->push(16);

	cout << "gquiz.size() : " << gquiz->size() << endl;
	cout << "gquiz.front() : " << gquiz->front() << endl;
	cout << "gquiz.back() : " << gquiz->back() << endl;


	cout << endl;
	cout << "Se quitan dos valores 12 y 14 quedando solo 16" << endl;

	cout << "gquiz.pop() : " << gquiz->pop() << endl;
	cout << "gquiz.pop() : " << gquiz->pop() << endl;
	cout << "gquiz.size() : " << gquiz->size() << endl;
	cout << "gquiz.front() : " << gquiz->front() << endl;
	cout << "gquiz.back() : " << gquiz->back() << endl;

	cout << endl;
	cout << "Se insertar 18 y 20 y seguidamente se muestran todos" << endl;
	gquiz->push(18);
	gquiz->push(20);


	showq(gquiz);
	cout << endl;

	cout << "Otro ejemplo con una cola de 20 elementos, se insertan y despues se recuperan" << endl;
	Random r;
	int N = 20;
	IQueue *q1 = new ArrayQueue(20);
	for (int i = 0; i < N; i++)
	{
		int v = r.Next(0, 10);
		q1->push(v);
		cout << v << " ";
	}
	cout << endl;
	showq(q1);

	cout << endl;
	cout << "Insertando 20 mas en la misma cola para comprobar que funciona correctamente" << endl;

	for (int i = 0; i < N; i++)
	{
		int v = r.Next(0, 10);
		q1->push(v);
		cout << v << " ";
	}
	cout << endl;
	showq(q1);


	delete gquiz;
	delete q1;

	system("pause");
	return 0;
}