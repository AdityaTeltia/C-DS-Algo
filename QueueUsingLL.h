
template<typename T>

class Node {

public:
    T data;
    Node<T>*next;

    Node(T data){
        this -> data = data;
        next = NULL;
    }
};

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
        size++;
    }
    T front(){
        return head->data;
    }

    T dequeue(){
        T a = head->data;
        Node<T>*temp = head;
        head = head->next;
        delete temp;
        size--;
        return a;
    }
    int getSize(){
        return size;
    }
    bool isEmpty(){
        return size==0;
    }

};
