#include "ArrayStack.h"
 
ArrayStack::ArrayStack(){
    N = 10;
    rsize = 0;
    values = new int[N];
}
ArrayStack::~ArrayStack()
{
}
void ArrayStack::push(int value){
    if(rsize < N){
        values[rsize] = value;
        rsize+=1;
    }
    else{
        //error
    }
}
int ArrayStack::pop(){
    int valor = -1;
    if(!empty()){
        valor = values[rsize - 1];
        values[rsize - 1] = -1;
        rsize-=1;
    }
    return valor;
}
int ArrayStack::top(){
    int valor = -1;
    if(!empty()){
        valor = values[rsize - 1];
    }
    return valor;
}
int ArrayStack::size(){
    return rsize;
}
bool ArrayStack::empty(){
    return rsize == 0;
}