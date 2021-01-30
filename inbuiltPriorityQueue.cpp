#include<iostream>
#include<queue>
using namespace std;

void show(priority_queue<int,vector<int>,greater<int>>pq,priority_queue<int>pq1){

    //MIN HEAP PRIORITY QUEUE
    priority_queue<int,vector<int>,greater<int>>g = pq;
    while(!g.empty()){
       cout<<g.top()<<"\t";
       g.pop();
    }
    cout<<endl;

    //Max HEAP PRIORITY QUEUE
    priority_queue<int>h = pq1;
    while(!h.empty()){
        cout<<h.top()<<"\t";
        h.pop();
    }
    cout<<endl;
}


int main(){
    //Min HEAP priority queue inbuilt intialisation
    priority_queue<int,vector<int>,greater<int>>pq;

    //Max HEAP priority queue inbuilt intialisation
    priority_queue<int>pq1;


    pq.push(10);
    pq.push(1);
    pq.push(20);
    pq.push(9);
    pq.push(100);
    pq.push(36);

    pq1.push(10);
    pq1.push(1);
    pq1.push(20);
    pq1.push(9);
    pq1.push(100);
    pq1.push(36);

    show(pq,pq1);
}
