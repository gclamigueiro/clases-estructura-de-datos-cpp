#include <iostream> 
#include "LinkedList.h"	 

using namespace std;
using namespace System;


void showList(IList* lista) {

	for (int i = 0; i<lista->size(); i++) {
		cout << lista->get(i) << " ";
	}
	cout << endl;

}

int main()
{

	// usando la implementación de LinkedList
	IList* lista = new LinkedList();

	lista->add(10);
	lista->add(23);
	lista->add(25);
	// insertando en indices diferentes
	lista->add(2, 52);
	lista->add(3, 5);
	lista->add(0, 88);

	showList(lista);

	lista->remove(2);
	lista->remove(0);
	lista->remove(lista->size() - 1);

	showList(lista);

	delete lista;
	system("pause");
	return 0;
}