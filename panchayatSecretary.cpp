#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int vote = 0;
        int maxVote=0;
        int i=0;
        for(;i<n;i++){
            for(int j=1;j<n;j++){
                if(a[i]==a[j]){
                    vote++;
                }
            }
            maxVote = max(vote,maxVote);
        }
        if(maxVote<=n/2){
            cout<<-1<<endl;
        }else{
            cout<<maxVote<<endl;
        }
    }

}
