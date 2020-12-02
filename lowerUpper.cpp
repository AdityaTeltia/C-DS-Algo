#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char x[1];
	cin.get(x[0]);

	if(islower(x[0])){
		cout<<"lowercase";
	}else if(isupper(x[0])){
		cout<<"UPPERCASE";
	}else{
		cout<<"Invalid";
	}

	return 0;
}
