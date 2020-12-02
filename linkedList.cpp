#include<iostream>
using namespace std;
#include "Node.cpp"
Node*reverseLL_3(Node*head){
    if(head==NULL || head->next == NULL){
        return head;
    }
    Node*smallAns = reverseLL_3 (head->next);


    Node*tail = head->next;
    tail->next = head;
    head->next = NULL;
    head = smallAns;
    return head;
}
Node* takeInput_Better(){
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
        cin>>data;
    }
    return head;
}
Node* deleteNode(Node*head,int i){
    Node *temp = head;
    int count =0;
    if(i==0){
        Node *c = temp;
        head = temp->next;
        delete c;
        return head;

    }

    while(temp != NULL && count < i-1){
        temp = temp->next;
        count++;
    }



    if(temp != NULL){
        Node *a = temp -> next;
        Node *b = a -> next;
        temp -> next = b;
        delete a;
    }
    return head;
}

Node* insertNode(Node*head,int i,int data){
    Node *newNode = new Node(data);
    int count =0;
    //   temporary pointer to keep head so that head is not lost
    Node *temp = head;

    if(i==0){
        newNode -> next = head;
        head = newNode;
        return head;
    }

    while(temp != NULL && count < i-1){
        temp = temp->next;
        count++;
    }
    if(temp != NULL){
        newNode->next = temp->next;
        temp->next = newNode;
    }
    return head;
}
Node * insertNodeRecursively(Node*head,int i,int data){
    Node *newNode = new Node(data);
//    Node *temp = head;
    if(head==NULL){
        return head;
    }
    if(i==0){
        newNode->next = head;
        head = newNode;
        return head;
    }else{
        Node *x = insertNodeRecursively(head->next,i-1,data);
        head->next = x;
        return head;
    }
}
Node * deleteNodeRecursively(Node*head,int i){
    Node*temp = head;
    if(head == NULL){
        return head;
    }
    if(i==0){
        head = temp -> next;
        delete temp;
        return head;
    }else{
        Node*x = deleteNodeRecursively(head->next,i-1);
        head->next = x;
        return head;
    }

}
void printElement(Node*head,int i){
    Node *temp = head;
    while(i!=0){
        temp=temp->next;
        i--;
    }
    cout<<temp->data<<endl;
}

Node* midpoint(Node*head){
    Node*slow = head;
    Node*fast = head->next;
    while(fast!=NULL && fast->next!= NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
Node*mergeTwoSortedLL(Node*h1,Node*h2){
    Node*fh = NULL;
    Node*ft = NULL;

    while(h1!=NULL && h2!=NULL){
        if(fh==NULL){
            if(h1->data > h2->data){
                fh = h2;
                ft = h2;
                h2 = h2->next;
            }else{
                fh = h1;
                ft = h1;
                h1 = h1->next;
            }
        }else{
            if(h1->data > h2->data){
                ft->next = h2;
                ft = h2;
                h2 = h2->next;
            }else{
                ft->next = h1;
                ft = h1;
                h1 = h1->next;
            }
        }
    }
    if(h2 == NULL){
        ft->next = h1;
    }else if(h1==NULL) {
        ft->next = h2;
    }
    return fh;
}
Node*mergeSorting(Node*head){
    if ((head == NULL) || (head->next == NULL)) {
        return head;
    }
    Node*mid = midpoint(head);
    Node*h1 = head;
    Node*h2 = mid->next;
    mid->next = NULL;

    h1=mergeSorting(h1);
    h2=mergeSorting(h2);

    Node*finalHead = mergeTwoSortedLL(h1,h2);
    return finalHead;
}

class Pair{
public:
    Node*head;
    Node*tail;
};

Pair reverseLL_2(Node*head){
    if(head == NULL || head->next == NULL){
        Pair ans;
        ans.head = head;
        ans.tail = head;
        return ans;
    }
    Pair smallAns = reverseLL_2(head->next);

    smallAns.tail ->next = head;
     head->next = NULL;
     Pair ans;
     ans.head = smallAns.head;
     ans.tail = head;
     return ans;
}
Node*reverseLL_better(Node*head){
    return reverseLL_2(head).head;
}
int length(Node*head){
    Node*temp= head;
    int len = 0;
    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    temp = head;
//    int count = len-k;
//    while(count !=0){
//        temp = temp->next;
//        count--;
//    }
    return len;
}
Node*reverseLL(Node*head){
    if(head==NULL || head->next == NULL){
        return head;
    }
    Node*smallAns = reverseLL(head->next);

    Node*temp = smallAns;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = head;
    head->next = NULL;
    head = smallAns;
    return head;
}
Node*reverseLL_iterative(Node*head){
    Node*prev = NULL;
    Node*curr = head;
    Node*n = curr->next;

    while(curr != NULL){
        curr->next = prev;
        prev = curr;
        curr = n;
        if(n !=NULL){//Because when n =  null the below command is invalid
            n = n->next;
        }
    }
    return prev;
}

void print(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl<<endl;
}

int main(){
        Node*head = takeInput_Better();
        cout<<length(head)<<endl;
//        head = reverseLL_iterative(head);
//        head = mergeSorting(head);
        print(head);
//        Node*mid = midpoint(head);
//        mid->next = NULL;
//        print(head);


//    Node*h1 = takeInput_Better();
//    Node*h2 = takeInput_Better();

//    Node*head = takeInput_Better();
//    print(head);
//    int i,data;
//    cin>>i;
//    printElement(head,i);
//    midpoint(head);
//    Node*fh = mergeTwoSortedLL(h1,h2);
//    print(fh);

//    head = deleteNodeRecursively(head,i);
    //head = insertNode(head,i,data);
//    head = deleteNode(head,i);


    return 0;
}
