#include <bits/stdc++.h>
using namespace std;
#define int long long
#define aditya ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool digits(int a, int b){
    while (a > 0){
        if (a % 10 == b)return 1;
        a =a/ 10;
    }
    return 0;
}

int solution(int a, int b){
    while (a > 0 && digits(a, b) == 0)
        a = a - b;
    return a > 0;
}

int32_t main(){
    aditya
    int tc;
    cin >>tc;
    while (tc--){
        int n,d;
        cin>>n>>d;
        while (n--){
            int res;
            cin >> res;
            if (solution(res, d))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}
