#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>st;

    st.insert(1);
    st.insert(10);
    st.insert(2);
    st.insert(3);
    st.insert(4);
    st.insert(5);

//    set<int> :: iterator it = st.begin();

    for(auto&it:st){
        cout<<it<<" ";
    }


}
