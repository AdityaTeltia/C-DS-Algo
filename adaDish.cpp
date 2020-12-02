#include <iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int burner1 = 0;
        int burner2 = 0;
        sort(a,a+n);

        for(int i=n-1;i>=0;i--){
            if(burner1<=burner2){
                burner1 += a[i];
            }else{
                burner2 += a[i];
            }
        }
        cout<<max(burner1,burner2)<<endl;
    }
}

