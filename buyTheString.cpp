#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int one =0;
        int zero = 0;
        int n,c0,c1,h;
        cin>>n>>c0>>c1>>h;
        string a;
        cin>>a;
         int sum = 0;
                for (int i = 0; i < a.length(); i++) {

                    if (a[i] == '0') {
                        if (c0 > c1) {
                            if (c0 > c1 + h) {
                                sum = sum + c1 + h;
                            } else {
                                sum = sum + c0;
                            }
                        } else {
                            sum = sum + c0;

                        }
                    } else if (a[i] == '1') {
                        if (c1 > c0) {
                            if (c1 > c0 + h) {
                                sum = sum + c0 + h;
                            } else {
                                sum = sum + c1;
                            }
                        } else {
                            sum = sum + c1;
                        }

                    }
                }
                cout<<sum<<endl;


    }


    return 0;
}
