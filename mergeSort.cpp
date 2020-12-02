#include<iostream>
using namespace std;

void mergeTwoSortedArrays(int *a,int si,int ei){

    int mid = (si+ei)/2;

    int i=si;
    int j=mid+1;
    int k=si;

    int temp[100];

    while(i<=mid && j<=ei){
        if(a[i]<a[j]){
            temp[k]=a[i];
            k++;
            i++;
        }else{
            temp[k]=a[j];
            k++;
            j++;
        }
    }
    while(i<=mid){
        temp[k]=a[i];
        k++;
        i++;
    }
    while(j<=ei){
        temp[k++]=a[j++];
    }

    for(int i=si;i<=ei;i++){
        a[i]=temp[i];
    }

}



void mergeSort(int a[],int si,int ei){

    if(si>=ei){
        return;
    }

    int mid = (si+ei)/2;

    mergeSort(a,si,mid);
    mergeSort(a,mid+1,ei);

    mergeTwoSortedArrays(a,si,ei);

}


int main(){

    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    mergeSort(a,0,n-1);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }


    return 0;
}
