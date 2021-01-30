#include<iostream>
#include<vector>
#include<queue>
using namespace std;

bool hasPath(int**edges,int n,int sv,int e ,bool*visited){
    if(edges[sv][e] == 1){
        return true;
    }
    visited[sv] = true;
    for(int i=0;i<n;i++){
        if(sv==i)continue;
        if(edges[sv][i]==1){
            if(visited[i]){
                continue;
            }
            if(hasPath(edges,n,i,e,visited))return true;
            else continue;

        }
    }
    return false;
}

vector<int>getPath(int**edges,int n)
/*
    5 5
    0 1
    0 2
    0 3
    2 3
    1 4
*/

void printBFS(int**edges,int n,int sv,bool* visited){
    queue<int>pendingVertices;
    pendingVertices.push(sv);
    visited[sv] = true;
    while(!pendingVertices.empty()){
        int currentVertex = pendingVertices.front();
        cout<<currentVertex<<endl;
        for(int i=0;i<n;i++){
            if(i == currentVertex){
                continue;
            }
            if(edges[currentVertex][i]==1 && !visited[i]){
                pendingVertices.push(i);
                visited[i] = true;
            }
        }
        pendingVertices.pop();
    }
}
void printDFS(int**edges,int n,int sv,bool* visited){
    cout<<sv<<endl;//sv is starting vertex
    visited[sv] = true;//so that we don't visit starting vertex again
    for(int i=0;i<n;i++){
        if(i==sv){
            continue;
        }
        if(edges[sv][i]==1){
            if(visited[i]){
                continue;
            }
            printDFS(edges,n,i,visited);
        }
    }
}

void BFS(int** edges,int n){
    bool* visited = new bool[n];
    for(int i=0;i<n;i++)visited[i]=false;
    for(int i=0;i<n;i++){
        if(!visited[i])printBFS(edges,n,i,visited);
    }
    delete [] visited;
}
void DFS(int**edges,int n){
    // This basically works for both connected and disconnected graphs we are checking the visited array until all its elements are visited i.e set tot true !
    bool* visited = new bool[n];
    for(int i=0;i<n;i++)visited[i]=false;
    for(int i=0;i<n;i++){
        if(!visited[i])printDFS(edges,n,i,visited);
    }
    delete [] visited;

}



int main(){
    int n,e;  //  n is number of nodes and e is number of edges
    cin>>n>>e;
    int**edges = new int*[n];
    for(int i=0;i<n;i++){
        edges[i] = new int[n];
        for(int j=0;j<n;j++){
            edges[i][j] = 0;
        }
    }
    for(int i=0;i<e;i++){
        int f,s;
        cin>>f>>s;
        edges[f][s] = 1;
        edges[s][f] = 1;
    }
    bool* visited = new bool(n);
    for(int i=0;i<n;i++){
        visited[i] = false;
    }
    int from,to;
    cout<<"From:"<<" ";
    cin>>from;
    cout<<endl;
    cout<<"To:"<<" ";
    cin>>to;
    cout<<endl;
    if(hasPath(edges,n,from,to,visited))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
//    cout<<"DFS"<<endl;
//    DFS(edges,n);
//    cout<<"BFS"<<endl;
//    BFS(edges,n);
    delete [] visited;
    for(int i=0;i<n;i++){
        delete[]edges[i];
    }
    delete[]edges;
}
