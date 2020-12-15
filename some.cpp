#include<bits/stdc++.h>
using namespace std;
int solve(int index,int n,int *a ){
    int cMax = a[index];
    int count = 0;
    for(int j=index+1;j<n;j++){
        if(a[j]>cMax){
            cMax = a[j];
            count++;
        }
    }
    return count;
}
int main() {

	// Write your code here

    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int q;
    cin>>q;
    int s[q];
	for(int i=0;i<q;i++){
        cin>>s[i];
    }
    vector<int>ans;
    for(int i=0;i<q;i++){
        ans.push_back(solve(s[i],n,a));
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }

}
