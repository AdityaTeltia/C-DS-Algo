#include<bits/stdc++.h>
using namespace std;
#define int long long

bool splitArray(int n,int*a,int sum,int sum1,int sum2,int sum3,vector<int>none){
    if(sum%2==1)return false;
    int temp = sum/2;
    if(sum1==temp && sum2==temp)return true;
    if(sum1>temp || sum2>temp)return false;
    for(int i=0;i<none.size();i++){
        if(sum1+a[i]<temp)splitArray(n,a,sum,sum1+a[i],sum2,sum3,none);
        if(sum2+a[i]<temp)splitArray(n,a,sum,sum1,sum2+a[i],sum3,none);
    }
    if(sum1==temp && sum2==temp)return true;
    else return false;
}


int32_t main(){
    int n;
    cin>>n;
    int a[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    vector<int>three;
    int sum1 = 0;

    vector<int>five;
    int sum2 = 0;

    vector<int>none;
    int sum3 = 0;

    for(int i=0;i<n;i++){
        if(a[i]%5==0){
            three.push_back(a[i]);
            sum1 += a[i];
        }else if(a[i]%3==0){
            five.push_back(a[i]);
            sum2 += a[i];
        }else{
          none.push_back(a[i]);
          sum3 += a[i];
        }
    }
    if(splitArray(n,a,sum,sum1,sum2,sum3,none))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
