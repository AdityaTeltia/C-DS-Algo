#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==0&&b==0||a==0&&c==0||b==0&&c==0){
                cout<<"Yes"<<endl;
                cout<<min(a,min(b,c))<<" "<<max(a,max(b,c))<<" "<<min(a,min(b,c))<<endl;
        }else if(a>=b && a>=c){
            if(b*c==a){
                cout<<"Yes"<<endl;
                cout<<min(b,c)<<" "<<max(b,c)<<" "<<a<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }else if(b>=a && b>=c){
            if(a*c==b){
                cout<<"Yes"<<endl;
                cout<<min(a,c)<<" "<<max(a,c)<<" "<<b<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }else if(c>=b && c>=a){
            if(b*a==c){
                cout<<"Yes"<<endl;
                cout<<min(b,a)<<" "<<max(b,a)<<" "<<c<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }
    }
}
