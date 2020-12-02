#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

// Function to find the maximum
// subarray length of ones
int maxLength(int A[], int N)
{
    // Stores the length, starting
    // index and ending index of the
    // subarrays
    vector<vector<int> > v;

    for (int i = 0; i < N; i++) {

        if (A[i] == 1) {

            // S : starting index
            // of the sub-array
            int s = i, len;

            // Traverse only continous 1s
            while (A[i] == 1 && i < N) {
                i++;
            }

            // Calculate length of the
            // sub-array
            len = i - s;

            // v[i][0] : Length of subarray
            // v[i][1] : Starting Index of subarray
            // v[i][2] : Ending Index of subarray
            v.push_back({ len, s, i - 1 });
        }
    }

    // If no such sub-array exists
    if (v.size() == 0) {
        return -1;
    }

    int ans = 0;

    // Traversing through the subarrays
    for (int i = 0; i < v.size() - 1; i++) {

        // Update maximum length
        ans = max(ans, v[i][0]);

        if (v[i + 1][1] - v[i][2] - 1 == 2) {

            ans = max(ans, v[i][0] + v[i + 1][0]);
        }
        if (v[i + 1][1] - v[i][2] - 1 == 1) {

            ans = max(ans, v[i][0] + v[i + 1][0] - 1);
        }
    }
    ans = max(v[v.size() - 1][0], ans);

    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(maxLength(a,n)== -1){
            cout<<0<<endl;
        }else{
            cout<<maxLength(a,n)<<endl;
        }
    }
}
