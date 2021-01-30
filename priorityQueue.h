#include<vector>

class PriorityQueue{
    vector<int>pq;


    public:
    PriorityQueue(){

    }

    bool isEmpty(){
        return pq.size()==0;
    }

    int getSize(){
        return pq.size();
    }

    int getMin(){
        if(isEmpty()){
            return 0;
        }
        return pq[0];
    }

    void push(int value){
        pq.push_back(value);

        int childIndex = pq.size()-1;
        while(childIndex > 0){
            int parentIndex = (childIndex-1)/2;

            if(pq[childIndex]<pq[parentIndex]){
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            }else{
                break;
            }
            childIndex = parentIndex;
        }
    }

    void removeMin(){
        if(isEmpty()){
            return 0;
        }
        int ans = pq[0];
        int last = pq.size()-1;
        pq[0] = pq[last];
        pq.pop_back();

        //down heapify
        int parentIndex = 0;
        int lchild = 2*parentIndex+1;
        int rchild = 2*parentIndex+2;

        while(lchild<pq.size()){
            int minIndex = parentIndex;
            if(pq[minIndex]>pq[lchild]){
                minIndex = lchild;
            }
            if(rchild<pq.size() && pq[minIndex]>pq[rchild]){
                minIndex = rchild;
            }
            if(minIndex == parentIndex){
                break;
            }
            int temp = pq[minIndex];
            pq[minIndex] = pq[parentIndex];
            pq[parentIndex] = temp;

            parentIndex = minIndex;
            lchild = 2*parentIndex+1;
            rchild = 2*parentIndex+2;

        }
        return ans;
    }

};
