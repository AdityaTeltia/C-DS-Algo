#include<iostream>
#include<cstdlib>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int diff = abs(x-y);
        if(diff>1){
            cout<<x+y+2*(diff-1)-diff+1<<endl;
        }else{
            cout<<x+y<<endl;
        }
    }

}
