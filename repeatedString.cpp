#include <bits/stdc++.h>

using namespace std;


int main(){

    string s;
    cin>>s;

    long long int n;
    cin >> n;

    long long int result = 0;
    int len = s.length();
    string add = s;
    while(len<=n){
        s = s + add;
    }
    for(int i=0;i<n;i++){
        if(s[i]=='a'){
            result++;
        }
    }

    cout<<result <<endl;



    return 0;
}

