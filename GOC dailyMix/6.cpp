#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n;
    cin>>n;
    int a[2*n+1];
    map<int,int>mp;
    vector<bool>visited(2*n+1,false);
    for(int i=1;i<=2*n;i++){
        cin>>a[i];
        if(mp.count(a[i])>0)continue;
        mp[a[i]] = i;
        visited[i] = true;
    }
    int s = 0;
    int j = 1;
    int curr = 1;

    for(int i=1;i<=2*n && j<=n;i++){
        int dis = abs(mp[j]-curr);
        curr = mp[j];
        j++;
        s += dis;
    }
    map<int,int>mpp;
    for(int i=1;i<=2*n;i++){
        if(visited[i])continue;
        mpp[a[i]] = i;
    }
    int d = 0;
    int curr2 = 1;
    int k = 1;
    for(int i=1;i<=2*n && k<=n;i++){
        int dis = abs(mpp[k]-curr2);
        curr2 = mpp[k];
        k++;
        d += dis;
    }
    cout<<d+s<<endl;

}
