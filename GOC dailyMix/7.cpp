#include<bits/stdc++.h>
using namespace std;
#define int long long
#define f first
#define s second

int32_t main(){
    int x,y;
    cin>>x>>y;
    pair<int,int>a(x,y);
    int m,n;
    cin>>m>>n;
    pair<int,int>b(m,n);
    int j,k;
    cin>>j>>k;
    pair<int,int>c(j,k);

    int slope1 = (a.s-b.s)/(a.f-b.f) ;
    cout<<slope1<<endl;
    int slope2 = (b.s-c.s)/(b.f-c.f) ;


    if(slope1==slope2){
        cout<<"TOWARDS"<<endl;
    }else if(slope1>slope2){
        cout<<"RIGHT"<<endl;
    }else{
        cout<<"LEFT"<<endl;
    }


}
