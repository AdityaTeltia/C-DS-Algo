#include<iostream>
#include<vector>
#include<string>
#include<queue>
#include<unordered_map>
#include<algorithm>
#include<iomanip>
#include<limits>
#define forI for(ll i=1; i<=n; ++i)
#define forJ for(ll j=1; j<=q; ++j)      /////// ITS FOR Q PAY ATTENTION

#define ll long long int
using namespace std;

bool helper(ll a[], ll n, ll s)
{
    ll sum=0;
    forI
        sum+=a[i];

    if( sum < s)
    {
        // cout<<"s="<<s<<" n="<<n<<" sum="<<sum<<endl;
        // cout<<"No"<<endl;
        return false;
    }

    if(sum == s)
    {
        // cout<<"Yes"<<endl;
        return true;
    }

    ll maxEle=INT_MIN,minEle=INT_MAX;

    forI
    {
        maxEle=max(maxEle,a[i]);
        minEle=min(minEle,a[i]);
    }

    ll mid=(maxEle + minEle)/2;

    ll left[n+1],right[n+1];
    ll leftSize=1,rightSize=1;
    maxEle=INT_MIN;
    minEle=INT_MAX;

    forI
    {
        if( a[i] <= mid)
        {
            left[leftSize]=a[i];
            ++leftSize;
            maxEle=max(maxEle,a[i]);
        }

        if( a[i] > mid)
        {
            right[rightSize]=a[i];
            ++rightSize;
            minEle=min(minEle,a[i]);
        }
    }

    return ( helper(right,rightSize-1,s) || helper(left,leftSize-1,s) );
}

void solve()
{
    ll n,q;
    ll a[n+1],s[q+1];
    cin>>n>>q;
        forI
            cin>>a[i];

        forJ
        {
            cin>>s[j];
            if(helper(a,n,s[j]))
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }


}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
        // cout<<endl;
    }
    return 0;
}
