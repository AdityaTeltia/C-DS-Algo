#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int ans;
        bool check[n][m];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                check[i][j] = false;
        char a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                if(a[i][j]=='*'){
                    check[i][j] = true;
                }
            }
        }
        if((m*n)%2==1){
            int sm = (n+1)/2;
            int rest = n - sm;
            int temp = sm*(m/2 +1) + rest*(m/2);
            int count1 = 0;
            bool flag = 0;
            int k = 0;
            for(int i=0;i<n;i++){
                if(!flag)k=0;
                else k=1;
                for(int j=k;j<m;j+=2){
                    if(check[i][j]){
                        count1++;
                    }
                    flag = !flag;
                }
            }
            cout<<count1<<endl;
            int count2 = 0;
            bool flag2 = 0;
            for(int i=0;i<n;i++){
                if(flag2)k=0;
                else k=1;
                for(int j=k;j<m;j+=2){
                    if(check[i][j]){
                        count2++;
                    }
                    flag2 = !flag2;
                }
            }
            cout<<count2<<endl;
            ans = temp-count1+count2;
        }else if(n%2==0){
            int temp = (m/2) * n;
            int count1 = 0;
            bool flag = 0;
            for(int i=0;i<n;i++){
                int k = 0;
                if(!flag)k=0;
                else k=1;
                for(int j=k;j<m;j+=2){
                    if(check[i][j]){
                        count1++;
                    }
                    flag = !flag;
                }
            }
            int count2 = 0;
            bool flag2 = 0;
            for(int i=0;i<n;i++){
                int k = 1;
                if(flag2)k=0;
                else k=1;
                for(int j=k;j<m;j+=2){
                    if(check[i][j]){
                        count2++;
                    }
                    flag2 = !flag2;
                }
            }
            int ad = min(count1,count2);
            int sub = max(count1,count2);
            ans = temp-sub+ad;
        }
        else{
            int sm = (n+1)/2;
            int rest = n - sm;
            int temp = sm*(m/2 +1) + rest*(m/2);
            int count1 = 0;
            bool flag = 0;
            for(int i=0;i<n;i++){
                int k = 0;
                if(!flag)k=0;
                else k=1;
                for(int j=k;j<m;j+=2){
                    if(check[i][j]){
                        count1++;
                    }
                    flag = !flag;
                }
            }
            int count2 = 0;
            bool flag2 = 0;
            for(int i=0;i<n;i++){
                int k = 1;
                if(flag2)k=0;
                else k=1;
                for(int j=k;j<m;j+=2){
                    if(check[i][j]){
                        count2++;
                    }
                    flag2 = !flag2;
                }
            }
            int ad = min(count1,count2);
            int sub = max(count1,count2);
            ans = temp-sub+ad;
        }
        cout<<ans<<endl;

    }
}
