#include<bits/stdc++.h>
using namespace std;
#define int long long



vector<int>v;
int find_it(int num){

	int cnt = 1;
	int curr = v[num];
	num ++;
	while(curr != num){
		cnt ++;
		curr = v[curr-1] ;
	}

	return cnt;
}

void solve(){
	int n ; cin >> n;
	v = vector<int> (n) ;

	for(int &x : v){
		cin >> x ;
	}

	for(int i = 0 ; i < n ; i++){
		cout << find_it(i) <<" ";
	}
	cout << endl ;

}

int32_t main()
{

	int q ;
	cin >> q;
	while(q--){
		solve() ;
	}

    return 0;
}
