#include <bits/stdc++.h>
using namespace std;
#define int long long
#define aditya     ios_base::sync_with_stdio(false);cin.tie(NULL);


int32_t main(){
    aditya
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;

        string ans = "";
        if (n == 1){
            ans += '9';
            cout << ans << endl;
        }
        else if (n == 2){
            ans += "98";
            cout << ans << endl;
        }
        else{

            ans += '9';
            ans += '8';
            int data = 9;
            for (int itr = 2; itr<n; itr++){
                ans += data + '0';
                data++;
                if (data == 10){
                    data = 0;
                }
            }
            cout <<ans<<endl;
        }
    }
}
