#include "Queue.h"
#include<cstdlib>

Queue::Queue(int qs) : qsize(qs){
    front = rear = NULL;
    items = 0;
}

Queue::~Queue(){
     Node * temp ;
    while(front != NULL){
        temp = front;
        front = front -> next;
        delete temp;
    }
}

bool Queue::isempty() const{
    return items == 0;
}

bool Queue::isfull() const{
    return items == qsize;
}

int Queue::queuecount() const{
    return items;
}

bool Queue::enqueue(const Item & item){
    if(isfull()){
        return false;
    }
    else{
        Node * add = new Node;
        add->item = item;
        add->next = NULL;
        items++;
        if(front == NULL) front = add;
        else rear->next = add;
        rear = add;
        return true;
    }
}

void Customer::set(long when){
    processtime = std::rand() % 3 + 1;
    arrive = when;
}