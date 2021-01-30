#include<bits/stdc++.h>
using namespace std;
#define int long long

//int count = 0;
void towerOfHanoi(int n,char src,char dest,char helper){

    if(n==0){

       return;
    }

    towerOfHanoi(n-1,src,helper,dest);

    cout<<src<<" "<<dest<<endl;

    towerOfHanoi(n-1,helper,dest,src);
}

int32_t main(){
    int n;
    cin>>n;
    cout<<pow(2,n)-1<<endl;
    towerOfHanoi(n,'1','3','2');
    return 0;
}
