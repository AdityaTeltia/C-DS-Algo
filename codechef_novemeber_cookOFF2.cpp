#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string str1,str2;
        cin>>str1;
        cin>>str2;
        vector<char> list1;
        vector<char> list2;
        vector<char> list3;
        vector<char> list4;
        int flag = 0;
        for (int i = 0; i < str1.length(); i++) {
            if (flag == 0) {
                list1.push_back(str1[i]);
                list3.push_back(str2[i]);
                flag = 1;
            } else {
                list2.push_back(str1[i]);
                list4.push_back(str2[i]);
                flag = 0;
            }
        }
            int flag1 = 0;
            int ans = 0;
            for (int i = 0; i < list1.size(); i++) {
                if (flag1 == 1) {
                    if (list1[i] == list3[i]) {
                        flag1 = 0;
                    }
                } else if (flag1 == 0) {
                    if (list1[i] == list3[i]) {
                        flag1 = 0;
                    } else {
                        flag1 = 1;
                        ans = ans + 1;
                    }
                }
            }
            flag1 = 0;
            for (int i = 0; i < list2.size(); i++) {
                if (flag1 == 1) {
                    if (list2[i] == list4[i]) {
                        flag1 = 0;
                    }
                } else if (flag1 == 0) {
                    if (list2[i] == list4[i]) {
                        flag1 = 0;
                    } else {
                        flag1 = 1;
                        ans = ans + 1;
                    }
                }
            }
            cout<<ans<<endl;
    }
}
