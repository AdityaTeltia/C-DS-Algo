
#include<bits/stdc++.h>
using namespace std;


int main(){
    unordered_map<string,int>mp;
    mp["abc"]  = 1;
    mp["abc1"]  = 2;
    mp["abc2"]  = 3;
    mp["abc3"]  = 4;
    mp["abc4"]  = 5;
    mp["abc5"]  = 6;

    unordered_map<string,int>::iterator it = mp.begin();

    while(it != mp.end()){
        cout<<"Key : "<<it->first<<"Value  : "<<it->second<<endl;
        it++;
    }

}
