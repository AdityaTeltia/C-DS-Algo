#include "Node.cpp"
template<typename T>

class QueueUsingLL{
    Node<T>*head;
    Node<T>*tail;
    int size;

public:
    QueueUsingLL(){
        head = NULL;
        tail = NULL;
        size = 0;
    }
    void enqueue(T element){
        Node<T>*newNode = new Node<T>(element);
        if(head==NULL){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

};
