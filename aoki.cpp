#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
      if(c==0){
            bool flag = 0;
            while(a!=0&&b!=0){
                if(!flag){
                    a--;
                    flag = !flag;
                }else{
                    b--;
                    flag = !flag;
                }
            }
      }else{
            bool flag = 1;
            while(a!=0&&b!=0){
                if(!flag){
                    --a;
                    flag = !flag;
                }else{
                    --b;
                    flag = !flag;
                }
            }
      }
      if(a==0)cout<<"Aoki"<<endl;
      else cout<<"Takahashi"<<endl;

}
