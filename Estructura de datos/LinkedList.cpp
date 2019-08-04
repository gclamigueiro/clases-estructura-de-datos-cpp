#include "LinkedList.h"


LinkedList::LinkedList()
{
	rsize = 0;
	head = nullptr;
	last = nullptr;
}

LinkedList::~LinkedList()
{
	delete head;
}

void LinkedList::add(int value)
{

	Node* newNode = new Node(value);
	if (empty()) {
		head = newNode;
		last = newNode;
	}
	else {
		last->seNext(newNode);
		last = newNode;
	}
	rsize++;


}

void LinkedList::add(int index, int value)
{

	int cont = 0;
	Node* newNode = new Node(value);

	if (validIndex(index)) {

		// si se quiere añadir al principio
		if (index == 0) {
			newNode->seNext(head);
			head = newNode;
		}
		else {
			// se obtiene el anterior a la posicion donde se quiere insertar
			Node* aux = getNode(index - 1);
			// el nuevo nodo apuntara al que estaba anteriormente en esa posicion
			newNode->seNext(aux->getNext());
			// el anterior apuntara al nuevo node
			aux->seNext(newNode);
		}

		rsize += 1;
	}// end si es valid index
}

void LinkedList::remove(int index)
{

	int cont = 0;

	if ( validIndex(index) ) {
		Node* aux = head;

		if (index == 0) {
			head = aux->getNext();
		}
		else {

			// se obtiene el nodo anterior al que se desea eliminar
			Node* aux = getNode(index - 1);

			// si se desea eliminar el ultimo
			if (index == rsize - 1) {
				// se establece que el ultimo es el nodo anterior al ultimo indice
				last = aux;
				last->seNext(nullptr);
			}
			else {
				Node *aEliminar = aux->getNext();
				aux->seNext(aEliminar->getNext());
			}
		}
		rsize -= 1;
	}

}

int LinkedList::get(int index)
{

	if (validIndex(index)) {
		Node* aux = getNode(index);
		return aux->getVal();
	}
	else {
		return -1;
	}

}

int LinkedList::size()
{
	return rsize;
}

bool LinkedList::empty()
{
	return rsize == 0;
}


bool LinkedList::validIndex(int index)
{
	return index >= 0 && index < rsize;
}

Node * LinkedList::getNode(int index)
{
	int cont = 0;

	Node* aux = head;

	while (cont < index) {
		aux = aux->getNext();
		cont++;
	}
	return aux;
}


