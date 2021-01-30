#include<iostream>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;

void print(priority_queue<int,vector<int>,greater<int>>pq){
    priority_queue<int,vector<int>,greater<int>>g = pq;
    while(!g.empty()){
        cout<<g.top()<<"\t";
        g.pop();
    }
    cout<<endl;
}

int main(){
    int no;
    priority_queue<int,vector<int>,greater<int>>pq;
    int csize = 0;
    int k = 3;

    while(scanf("%d",&no) != EOF){
        if(no == -1){
            print(pq);
        }else if(csize<k){
            pq.push(no);
            cs++;
        }else{
            if(no>pq.top()){
                pq.pop();
                pq.push(no);
            }
        }
    }
}

