#include <bits/stdc++.h>
#include<climits>
using namespace std;

#define Fast ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define mod 1,000,000,007;
const int MAX_N = 1e5 + 5;
const int MAX_L = 20; // ~ Log N
const long long MOD = 1e9 + 7;
const long long INF = 1e9 + 7;
#define endl "\n";
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;
#define LSOne(S) (S & (-S))
#define isBitSet(S, i) ((S >> i) & 1)
void overpower(){

 int max1=INT_MIN;

     int m;
     cin>>m;
     int two_d[m][m];
     for(int i=0;i<m;i++){
         for(int j=0;j<m;j++){
             cin>>two_d[i][j];
         }
     }
     int firstIndex=0;

     while(firstIndex<m){
        int diag_sum=0;
        int secondIndex =0;
        while(secondIndex<m){
            diag_sum=diag_sum+two_d[firstIndex][secondIndex];
            secondIndex=secondIndex+1;
        }
        if(diag_sum>max1){
            max1=diag_sum;
        }
        firstIndex=firstIndex+1;
     }
     cout<<max1<<"\n";
}
#undef int
int main() {
    Fast;
    #ifdef _DEBUG
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
#endif
 ll t;
 cin>>t;
 for(ll i=0;i<t;i++)
     {
         cout<<"Case #"<<i+1<<": ";
         overpower();
         cout<<"\n";
    }
}
