#include <bits/stdc++.h>
using namespace std;
#define int long long

bool prime[1000000];

void SieveOfErath(int n){
    memset(prime, true, sizeof(prime));
    prime[1] = false;
    for (int p = 2; p * p <= n; p++){
        if (prime[p] == true){
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}

int a[1000001];
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    SieveOfErath(1000000);
    a[0] = 0;
    a[1] = 0;
    a[2] = 0;
    a[3] = 0;

    for (int i = 3; i <= 1000000; i++){
        a[i] = a[i - 1];
        if (prime[i] && prime[i - 2]){
            a[i]++;
        }
    }
    while (t--){
        int n;
        cin >> n;
        cout << a[n] << endl;
    }
}
