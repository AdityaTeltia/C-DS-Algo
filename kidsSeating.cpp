
#include<bits/stdc++.h>
#define int 					long long
#define pb					push_back
using namespace std;

int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;

	while (t--) {
        int n;
        cin>>n;

        for(int i=0;i<n;i++){
            cout<<2*n+2*i<<" ";
        }
        cout<<endl;
	}
	return 0;
}
