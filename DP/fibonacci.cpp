#nclude<iostream>
using namespace std;

int fiboDP(int n){
    int*ans = new int[n+1];
    ans[0] = 0;
    ans[1] = 1;
    for(int i=2;i<=n;i++){
        ans[i] = ans[i-1] + ans[i-2];
    }
    return ans[n];
}

int fibo(int n){
    if(n<=1)return n;

    int a = fibo(n-1);
    int b = fibo(n-2);
    return a+b;
}
//This technique is called Memoization
int fibo_Better(int n,int*ans){
    if(n<=1){
        ans[n] = n;
        return n;
    }

    if(ans[n-1]==-1){
        ans[n-1] = fibo_Better(n-1,ans);
    }
    if(ans[n-2]==-1){
        ans[n-2] = fibo_Better(n-2,ans);
    }
    ans[n] = ans[n-1]+ans[n-2];
    return ans[n];
}

int fibo_Better(int n){
    int *ans = new int[n+1];
    memset(ans,-1,sizeof ans);
    return fibo_Better(n,ans);
}

int main(){
    int n;
    cin>>n;
    cout<<fibo_Better(n)<<endl;
}
