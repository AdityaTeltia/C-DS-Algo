#include<bits/stdc++.h>
using namespace std;
const int N = 1e+5;
#define int long long

vector<int>pr;
bool prime[N+1];
void SieveOfEratosthenes(){
    memset(prime, true, sizeof(prime));
    for (int p = 2;p <= N; p++){
        if (prime[p] == true) {
            for (int i = p * p; i <= N; i += p)
                prime[i] = false;
        }
        if(prime[p]==true)pr.push_back(p);
    }
}

int32_t main(){
    #ifndef SIEVE
        SieveOfEratosthenes();
    #endif // SIEVE
    int t;
    cin>>t;
    while(t--){
        int d;
        cin>>d;
        int x = *upper_bound(pr.begin(),pr.end(),d);
        int y = *upper_bound(pr.begin(),pr.end(),x+d-1);
        int ans=x*y;
        cout<<ans<<endl;
    }
}
