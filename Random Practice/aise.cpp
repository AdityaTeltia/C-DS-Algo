#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define mii map<int,int>
#define pqb priority_queue<int>
#define pqs priority_queue<int,vi,greater<int>>
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define ps(x,y) fixed<<setprecision(y)<<x
#define mk(arr,n,type) type *arr=new type[n];


void at(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int a[4];
	int odd = 0;
	for(int i=0;i<4;i++){
		cin>>a[i];
		if(a[i]%2 != 0){
			odd++;
		}
	}
	cout<<odd<<endl;
	if(odd<=1){
		cout<<"Yes"<<endl;
		return;
	}
	int mn = min(a[0],min(a[1],a[2]));
	cout<<mn<<endl;
	while(mn>0){
		a[0]--;
		a[1]--;
		a[2]--;
		a[3] += 3;
		int o = 0;
		for(int i=0;i<4;i++){
			if(a[i]%2!=0){
				o++;
			}
		}
		if(o<=1){
			cout<<"Yes"<<endl;
			return;
		}
	}
	cout<<"No"<<endl;	
}

int32_t main(){
	int t;
	cin>>t;
	while(t--){
		at();
	}
	return 0;
}