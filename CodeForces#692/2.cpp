#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;

    while(t--){
        ll int n;
        cin>>n;
        while(true){
            int a = 1;

            ll int temp = n;
            while(temp>0){
                ll int ans = temp%10;
                if(ans != 0 && n%ans != 0){
                    a=0;
                    break;
                }
                temp = temp/10;
            }
            if(a==0){
                n++;
            }else{
                cout<<n<<endl;
                break;
            }
        }
    }
}

