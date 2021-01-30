#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n;
    cin>>n;

    vector<int>s1(n+1,0);
    vector<int>s2(n+1,0);
    int sum = 0;
    int sum1 = 0;
    int sum2 =0;

    for(int i=1;i<=n;i++){
        sum += i;
    }
    if(sum%2!=0){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
        int each = sum/2;
        for(int i=n;i>=1;i--){
            if(sum1+i<=each){
                sum1+=i;
                s1[i]=i;
            }
        }
        for(int i=n;i>=1;i--){
            if(sum2+i<=each && s1[i]==0){
                sum2+=i;
                s2[i]=i;
            }
        }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        int a=0;
        int b=0;
        for(int i=1;i<=n;i++){
            if(s1[i]!=0){
                a++;
            }
            if(s2[i]!=0){
                b++;
            }
        }
        cout<<a<<endl;
        for(int i=1;i<=n;i++){
            if(s1[i]!=0){
                cout<<s1[i]<<" ";
            }
        }
        cout<<endl;
        cout<<b<<endl;
        for(int i=1;i<=n;i++){
            if(s2[i]!=0){
                cout<<s2[i]<<" ";
            }
        }
    }
}
