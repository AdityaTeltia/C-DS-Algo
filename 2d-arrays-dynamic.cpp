#include<iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int ** p=new int*[10];// Cannot directly define 2d- array so first made the array containing address of all the rows or pointing towards all the rows.
    for(int i=0;i<m;i++){ //this loop is used to add an array of column m in each address
        p[i]=new int[n];
        for(int j=0;j<n;j++){
            cin>>p[i][j];
        }
    }
    for(int i=0;i<m;i++){
        delete [] p[i];
    }
    delete [] p;
    return 0;
}
