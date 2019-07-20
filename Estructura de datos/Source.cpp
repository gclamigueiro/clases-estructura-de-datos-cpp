#include <iostream> 
#include <random> 
#include "LinkedStack.h"	 

/*
Este ejemplo es utilizando templates
*/

using namespace std;
using namespace System;


void showChars(char *name, int N) {
	Random r;
	for (int i = 0; i < N; i++)
	{
		cout<< name[i] << " ";
	}
	cout << endl;
}


int main()
{
	// para comprobar el funcionamiento de la implementación de la pila
	// se va a hacer el ejercicio de invertir una cadena de texto
	int N = 8;
	char *name = new char[N];
	name = "John Doe";

	showChars(name, N);

	IStack<char> *stackDM = new LinkedStack<char>();

	// insertamos los elementos de arreglo en la pila
	for (int i = 0; i < N; i++)
	{
		stackDM->push(name[i]);
	}
	
	// los sacamos de la pila y lo mostramos
	// como el modo de acceso a las pilas es de tipo LIFO (Last In, First Out, último en entrar, primero en salir)
	// se empezara mostrando desde el último número hasta el primero
	while (!stackDM->empty())
	{
		cout << stackDM->pop() << " ";
	}
	cout << endl;
	
	delete stackDM;


	system("pause");
	return 0;
}