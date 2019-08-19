#include "LinkedQueue.h"

LinkedQueue::LinkedQueue(){
    rsize = 0;
    nfront = nullptr;
    nback = nullptr;
}
LinkedQueue::~LinkedQueue()
{
    delete nfront;
    delete nback;
}    
void LinkedQueue::push(int value){
    Node* nodeaux = new Node(value);
    if(rsize == 0){
        nfront = nodeaux;
        nback = nodeaux;
    }
    else{
        nback->seNext(nodeaux);
        nback = nodeaux;
    }
    rsize++;
}
int LinkedQueue::pop(){
    int value = -1;
    if(!empty())
    {
        Node* nodeaux = nfront; // se agarra la direccion del primer valor
        value = nodeaux->getVal(); //su valor tambien
        nfront = nodeaux->getNext(); //ahora nfront pasaria a ser el segundo valor 
        rsize--;
    }
    else{
        //error
    }
    return value;
}
int LinkedQueue::front(){
    return nfront->getVal();

}
int LinkedQueue::back(){
    return nback->getVal();
}
int LinkedQueue::size(){
    return rsize;
}
bool LinkedQueue::empty(){
    return rsize == 0;
}