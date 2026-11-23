#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    long long count=1;
    long long best=1;
    for(int i=1; i<s.size();i++){
        if(s[i]==s[i+1]){
            count++;
        }
        else{
            best=max(count,best);
        count=1;
        }
    }
    best=max(count,best);
    cout<<best<<endl;
    return 0;
}