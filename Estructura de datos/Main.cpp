#include <iostream> 
#include "SourceList.h"
#include "SourceQueue.h"
#include "SourceRecursion.h"
#include "SourceStack.h"


using namespace std;
using namespace System;

/*
Punto de entrada a la aplicaci�n.
Se tiene un men� y dada la opci�n que se seleccione
se ejecutar� el ejemplo escogido.
*/
int main()
{


	int opcion;
	while (opcion != 9) {

		cout << "Seleccione la opci�n:"<<endl;
		cout << "1 - Ejemplo de Pilas:" << endl;
		cout << "2 - Ejemplo de Colas:" << endl;
		cout << "3 - Ejemplo de Listas:" << endl;
		cout << "4 - Ejemplo de Recursi�n:" << endl;
		cout << "9 - Salir:" << endl;
		cin >> opcion;

		switch (opcion)
		{
		case 1:
			SourceStack::run();
			break;
		case 2:
			SourceQueue::run();
			break;
		case 3:
			SourceList::run();
			break;
		case 4:
			SourceRecursion::run();
			break;
		default:
			opcion = 9;
			break;
		}

		system("pause");
		system("cls");

	}


}