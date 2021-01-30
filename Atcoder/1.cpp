#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	double x[n];
	double y[n];
	int count = 0;
	for(int i=0;i<n;i++){
		cin>>x[i]>>y[i];
	}

	for(int j=0;j<n;j++){
		for(int k=j+1;k<n;k++){
			
			double slope = (y[k]-y[j])/(x[k]-x[j]);
			if(slope<=1 && slope >=-1){
				count++;
			}
			

		}
	}
	cout<<count<<endl;
	return 0;
}