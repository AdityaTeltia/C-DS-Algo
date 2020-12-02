#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;


    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int highest = a[0];
    int lowest = a[0];
    int highCount = 0;
    int lowCount = 0;
    for(int i=1;i<n;i++){
        if(a[i]>highest){
            highCount++;
            highest = a[i];
        }
        if(a[i]<lowest){
            lowCount++;
            lowest = a[i];
        }
    }

    cout<<highCount<<" "<<lowCount;



    return 0;
}
