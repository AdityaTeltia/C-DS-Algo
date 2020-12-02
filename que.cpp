#include<bits/stdc++.h>
using namespace std;
int maxRepeating(string sequence, string word) {
    int count = 0;
    int wordL = word.length();
    int len = sequence.length();

    for(int i=0;i<len;i++){
        string s ="";
        int sLen = s.length();
        int j=i;
        while(sLen != wordL){
            s += sequence[j];
            j++;
        }
        if(s==word){
            count++;
        }

    }
    return count;
}
    int main(){
        string sequence,word;
        cin>>sequence;
        cin>>word;
        cout<<maxRepeating(sequence,word)<<endl;
    }
