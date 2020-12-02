using namespace std;
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
class StackUsingLL{
    Node<T>*head;
    int totalSize;
public:
    StackUsingLL(){
        head = NULL;
        totalSize = 0;
    }
    void push(T element){
        Node<T>*newNode = new Node<T>(element);
        if(head==NULL){
            head = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
        totalSize++;
    }
    T top(){
        if(isEmpty()){
//            cout<<"STACK IS EMPTY"<<endl;
            return 0;
        }
        return head->data;
    }
    int size(){
        return totalSize;
    }
    bool isEmpty(){
        return head==NULL;
    }
    T pop(){
        if(isEmpty()){
//            cout<<"STACK IS EMPTY"<<endl;
            return 0;
        }
        T ans=head->data;
        Node<T>*temp = head;
        head=head->next;
        delete temp;
        totalSize--;
        return ans;
    }

};
