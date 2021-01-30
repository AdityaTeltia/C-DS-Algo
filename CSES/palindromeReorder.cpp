#include <bits/stdc++.h>

#define int long long

using namespace std;

int32_t main(){
    string s;
    cin >> s;

    map<char,int> mp;
    for (int i=0; i < s.length(); i++){
        mp[s[i]]++;
    }
    int c=0;
    char a[1];
    for(auto &i : mp){
        if(i.second%2 == 1){        // some letter could be 3 times in the string
            c++;
            a[0] = i.first;
        }
    }
//    cout<<a[0]<<endl;
    if (c > 1 || c == 1 && s.length() % 2 == 0){
        cout<<"NO SOLUTION";
    } else {
        sort(s.begin(),s.end());
        char ans[s.length()] = {0};
        bool flag = 0;
        int j = s.length() - 1;
        if (c==1)
            ans[s.length()/2] = a[0];
        /* let's say length = 5, you want
        to store the extra letter at index 2 = length/2 */
//        cout<<ans[(s.length()+1)/2]<<endl;
        bool middleHandled = false;
        /*if frequency of unpaired letter = 3, 5, etc.
        make sure it's skipped only once */
        for(int i = 0, k = 0; k < s.length(); k++){
            // create a separate variable k for looping through the entire string
            if (s[k] == a[0] && !middleHandled)
            {
                middleHandled = true;
                continue;
            }
            // skip unpaired letter once, cuz it's already handled
            if(flag == 0){
                ans[i] = s[k];
                flag = 1;
                i++;        // increment i for odd position elements
            }else if(flag == 1){
                ans[j] = s[k];
                flag = 0;
                j--;        // decrement j for even position elements
            }
        }
        for(int i = 0; i < s.length(); i++){
            cout << ans[i];
        }
    }
    return 0;
}
