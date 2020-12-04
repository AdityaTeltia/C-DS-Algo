#include<iostream>
#include<vector>
#include <cmath>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        float d;
        cin>>n>>d;
        int a[n];
        vector<int>risk;

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]<=9 || a[i]>=80){
                risk.push_back(a[i]);
            }
        }
        float noRisk = n-risk.size();
        int riskDays = ceil(risk.size()/d);
        int noRiskDays = ceil(noRisk/d);
        int total = riskDays + noRiskDays;
        cout<<total<<endl;

    }
}
