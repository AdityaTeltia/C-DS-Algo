#include<bits/stdc++.h>
using namespace std;
#define int long long
#define aditya ios_base::sync_with_stdio(false);cin.tie(NULL);


int32_t main(){
    aditya
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        string ans = a+b;
        map<char,int>mp;
        for(int i=0;i<ans.length();i++){
            mp[ans[i]]++;
        }
        if(a==b){
            cout<<a<<endl;
        }else if(a.length()%2==1 || b.length()%2==1){
            if(mp.size()==1){
                if(a.length()==1||b.length()==1){
                    if(a.length()<b.length()){
                        cout<<b<<endl;
                    }else{
                        cout<<a<<endl;
                    }
                }else{
                    int  mn = min(a.length(),b.length());
                    if(mn == a.length()){
                        string temp = b;
                        while(mn>1){
                            b += temp;
                            mn--;
                        }
                        cout<<b<<endl;
//                        cout<<b.length()<<endl;
                    }else{
                        string temp = a;
                        while(mn>1){
                            a += temp;
                            mn--;
                        }
                        cout<<a<<endl;
                    }
                }
            }else{
                cout<<-1<<endl;
            }
        }else{
            bool f = 1;
            if(a.length()<b.length()){
                if(b.length()%a.length()==0){
                    for(int i=0;i<b.length();i += a.length()){
                        if(a==b.substr(i,a.length())){
                            continue;
                        }else{
                            f =0;
                            break;
                        }
                    }
                    if(f)cout<<b<<endl;
                    else cout<<-1<<endl;
                }else{
                    int temp = __gcd(a.length(),b.length());
                    string temp1 = b;
                    while(temp>1){
                        b += temp1;
                        temp--;
                    }
                    cout<<b<<endl;
                }
            }else{
                if(a.length()%b.length()==0){
                    for(int i=0;i<a.length();i += b.length()){
                        if(b==a.substr(i,b.length())){
                            continue;
                        }else{
                            f =0;
                            break;
                        }
                    }
                    if(f)cout<<a<<endl;
                    else cout<<-1<<endl;
                }else{
                    int temp = __gcd(a.length(),b.length());
                    string temp1 = a;
                    while(temp>1){
                        a += temp1;
                        temp--;
                    }
                    cout<<a<<endl;
                }
            }
        }
    }
}
