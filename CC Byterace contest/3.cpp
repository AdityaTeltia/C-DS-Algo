#include <bits/stdc++.h>
using namespace std;
unordered_map<int,char>arr;
void f(int n, int k)
{
    int ans = k;
    int s[k];
    fill(s, s + k, 1);

    for (int i = k - 1; i >= 0; --i) {
        while (ans + s[i] <= n) {
            ans += s[i];
            s[i] *= 2;
        }
    }
    if (ans != n) {
        cout << "-1\n";
        return;
    }
    else {
        for (int i = 0; i < k; ++i)
            cout << arr[s[i]];
            cout<<endl;
    }
}

// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        char a='a';

    for(int i=0;i<=25;i++){
        long var = pow(2,i);
        arr[var] = a;
        a++;
    }
    f(k,n);
    }
    return 0;
}
