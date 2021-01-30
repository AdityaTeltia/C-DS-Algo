#include <bits/stdc++.h>
using namespace std;
#define int long long
#define aditya ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int32_t main(){
    aditya
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int quotient = n / 2020;
        int rem = n % 2020;

        bool flag;
        if (quotient >= rem){
            flag = true;
        }
        else{
            flag = false;
        }
        if (flag){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }

    return 0;
}
