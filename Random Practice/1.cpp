#include<iostream>
using namespace std;

int solve(int*a,int sum,int n,int x){
    int f = n;
    int b = n;
    int temp = sum;
    int i = 0;
    int j = n-1;
    while(f>0){
        f--;
        if((temp - a[i])%x !=0){
            break;
        }
        i++;
    }
    while(b>0){
        b--;
        if((temp - a[j])%x !=0){
            break;
        }
        j--;
    }
    if(f==0&&b==0){
        return -1;
    }
    return max(f,b);
}

int main(){

    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;

        int a[n];
        int sum = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%x !=0 ){
            cout<<n<<endl;
        }else{
            cout<<solve(a,sum,n,x)<<endl;
        }

    }
}
