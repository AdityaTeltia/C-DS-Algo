#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t){
        int n, m;
        cin >> n >> m;
        vector<int> a;
        vector<int> b;

        //Min HEAP
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for (int i = 0; i < n; i++){
            int val;
            cin >> val;
            a.push_back(val);
        }

        for (int i = 0; i < m; i++){
            int val1;
            cin >> val1;
            b.push_back(val1);
            pq.push(make_pair(val1, i + 1));
        }

        sort(a.begin(), a.end());
        reverse(a.begin(), a.end());
        int ans = 0;
        for (int i = 0; i < n; i++){
            if (pq.size() == 0){
                ans += b[a[i] - 1];
            }else{
                while (pq.size() > 0 && pq.top().second > a[i]){
                    pq.pop();
                }

                if (pq.size() == 0){
                    ans += b[a[i] - 1];
                }else{
                    pair<int, int> p2 = pq.top();
                    if (p2.first >= b[a[i] - 1]){
                        ans += b[a[i] - 1];
                    }else{
                        ans += p2.first;
                        pq.pop();
                    }
                }
            }
        }

        cout << ans << endl;
        t--;
    }
}
