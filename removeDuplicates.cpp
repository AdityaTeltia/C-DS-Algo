#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;


void removeDuplicates(string * a){
	if(a[0]=='\0'){
		return;
	}

	if(a[0] != a[1]){
		removeDuplicates(a[0]+1);
	}else{
		int i=1;
		for(;a[i] !='\0';i++){
			a[i-1]=a[i];
		}
		a[i-1]=a[i];
		removeDuplicates(a);
	}


}

string sortString(string &str){
   sort(str.begin(), str.end());
   return str;
}

int main(){

   string a;
   cin>>a;

   sortString(a);

    removeDuplicates(a);

    for(int i=0;i<a.length();i++){
        cout<<a[i]<<" ";
    }


    return 0;
}
