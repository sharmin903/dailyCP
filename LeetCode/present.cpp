#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;        
    int count_A=0;
    int count_L=0;
    for(int i=0; i<s.length();i++){

        if(s[i]=='A'){
            count_A++;
        }
        if(s[i]=='L'){
            count_L++;
        }
    }
    if(count_A>2 || count_L>=3){
        cout<<"False"<<endl;
    }
    else{
        cout<<"True"<<endl;
    }
    return 0;
}