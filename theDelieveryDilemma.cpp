
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
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[n];
        }
        for(int i=0;i<n;i++){
            cin>>b[n];
        }
        int petyaTime = 0;
        int courierTime = 0;
        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                petyaTime +=b[i];
            }else{
                courierTime = max(courierTime,b[i]);
            }
        }
        cout<<petyaTime + courierTime<<endl;
	}
	return 0;
}

