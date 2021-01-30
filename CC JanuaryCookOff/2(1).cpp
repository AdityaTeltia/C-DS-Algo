#include <bits/stdc++.h>
using namespace std;
#define int long long
#define aditya ios_base::sync_with_stdio(false);cin.tie(NULL);



int32_t main(){
    aditya
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;

        vector<string> v;
        for (int i = 0; i < n; i++){
            string s;
            cin >> s;
            v.push_back(s);
        }

        vector<string> arr1;
        vector<string> arr2;
        int count3 = 0;
        int count4 = 0;
        for (int i = 0; i < n; i++){
            string temp = "";
            if (i % 2 == 0){
                for (int j = 0; j < m; j++){
                    if (j % 2 == 0){
                        temp += '*';
                        count3++;
                    }
                    else{
                        temp += '.';
                    }
                }
            }
            else{
                for (int j = 0; j < m; j++){
                    if (j % 2 != 0){
                        temp += '*';
                        count3++;
                    }
                    else{
                        temp += '.';
                    }
                }
            }
            arr1.push_back(temp);
        }
        for (int i = 0; i < n; i++){
            string temp = "";
            if (i % 2 == 0){
                for (int j = 0; j < m; j++){
                    if (j % 2 != 0){
                        temp += '*';
                        count4++;
                    }
                    else{
                        temp += '.';
                    }
                }
            }
            else{
                for (int j = 0; j < m; j++){
                    if (j % 2 == 0){
                        temp += '*';
                        count4++;
                    }
                    else{
                        temp += '.';
                    }
                }
            }
            arr2.push_back(temp);
        }
        int result = INT_MAX;
        int count1 = 0;
        int count2 = 0;
        for (int i = 0; i < n; i++){
            string s3 = v[i];
            string s4 = arr1[i];
            string s5 = arr2[i];
            for (int j = 0; j < m; j++){
                if (s3[j] != s4[j]){
                    count1++;
                }
                if (s3[j] != s5[j]){
                    count2++;
                }
            }
        }
        if (count3 == count4){
            result = min(count1, count2);
            cout << result << endl;
        }else if (count3 > count4){
            cout << count1 << endl;

        }else{
            cout << count2 << endl;
        }
    }
}
