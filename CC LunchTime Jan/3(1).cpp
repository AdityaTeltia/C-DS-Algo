#include <bits/stdc++.h>
using namespace std;
#define int long long
#define aditya ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int32_t main(){
    aditya
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string str;
        cin >> str;
        int res = 1e8;
        vector<int>vec(n, 0);
        vector<int>one(n, 0);
            for (int i = 0; i < n; i++){
                if (str[i] == '1'){
                    if (i > 0){
                        one[i] = one[i - 1] + 1;
                    }
                    else{
                        one[i] = 1;
                    }
                }
                else{
                    if (i > 0){
                        one[i] = one[i - 1];
                    }
                }
            }
            for (int i = n - 1; i >= 0; i--){
                if (str[i] == '0'){
                    if (i < n - 1){
                        vec[i] = vec[i + 1] + 1;
                    }
                    else{
                        vec[i] = 1;
                    }
                }
                else{
                    if (i < n - 1)vec[i] = vec[i + 1];
                }
            }

            for (int i = 0; i < n; i++){
                res = min(res, vec[i] + one[i] - 1);
            }
            cout <<res<<endl;
    }

    return 0;
}
