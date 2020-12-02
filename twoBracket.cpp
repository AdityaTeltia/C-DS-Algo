#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int low = 0;
        int high =0;
        int sum = 0;

        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                low++;
            }else if(s[i]=='['){
                high++;
            }else if(s[i]==')'){
                if(low>0){
                    sum++;
                    low--;
                }
            }else if(s[i]==']'){
                if(high>0){
                    sum++;
                    high--;
                }
            }
        }
        cout<<sum<<endl;

    }

}
