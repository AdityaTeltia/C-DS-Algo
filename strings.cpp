#include <iostream>
#include<string>
#include<algorithm>
using namespace std;


//Comparator function passed in sort which can be used by including algorithm
bool compare(string a,string b){
    if(a.length()==b.length()){
        return a<b; //comparing string as lexographic comparison
    }
    return a.length()>b.length();
}

int main(){

    int n;
    cin>>n;
    cin.get(); //to consume any extra enter i.e after \n.

    string s[100];

    for(int i=0;i<n;i++){
        getline(cin,s[i]);
    }

    sort(s,s+n,compare);

    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }

    return 0;
}
