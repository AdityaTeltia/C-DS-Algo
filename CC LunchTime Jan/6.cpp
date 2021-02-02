#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n;
    cin>>n;
    vector<pair<pair<int,int>,int>>moves;
    int spoons[100005],pile1;
    cin>>pile1;
    for(int i=2;i<=n;i++)cin>>spoons[i];
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    for(int i=2;i<=n;i++){
        pq.push({spoons[i],i});
    }
    while(!pq.empty()){
        auto smallest = pq.top();
        pq.pop();
        if(smallest.first <= pile1){
            pile1 +=smallest.first;
            moves.push_back({{smallest.second,1},smallest.first});
        }else{
            if(pq.empty()){
                cout<<-1<<endl;
                return;
            }
            auto second_smallest = pq.top();
            pq.pop();
            auto extra = smallest.first-pile1;
            moves.push_back({{smallest.second,second_smallest.second},extra});
            second_smallest.first += extra;
            smallest.first -= extra;

            moves.push_back({{smallest.second,1},smallest.first});
            pile1 +=smallest.first;
            pq.push(second_smallest);
        }

    }
    cout<<moves.size()<<endl;
    for(auto move:moves){
        cout<<move.first.first<<" "<<move.first.second<<" "<<move.second<<endl;
    }
}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}
