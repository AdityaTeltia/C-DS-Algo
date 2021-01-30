#include <bits/stdc++.h>
using namespace std;
#define int long long
#define aditya ios_base::sync_with_stdio(false);cin.tie(NULL);

int32_t main(){
    aditya
    int t;
    cin >> t;
    while (t--){
        int n,x;
        cin>>n>>x;
        vector<int>a1;
        vector<int>a2;
        for (int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            int count = 0;
            int data = temp;
            while (temp%x == 0){
                count++;
                temp /=x;
            }
            a2.push_back(count);
            a1.push_back(data);
        }
        int mn = INT_MAX;
        for (int i = 0; i < n; i++){
            mn = min(a2[i], mn);
        }
        int idx = -1;
        for (int i = 0; i < n; i++){
            if (a2[i] == mn){
                idx = i;
                break;
            }
        }
        int ans = 0;
        for (int i = 0; i<n; i++){
            ans+=((mn + 1) * a1[i]);
        }
        for (int i = 0; i < idx; i++){
            ans+= a1[i];
        }
        cout << ans << endl;
    }
}
