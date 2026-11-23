#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        long long longest_substring= 1;
        long long current_substring=1;

        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                current_substring++;
            }
            else{
                longest_substring=max(longest_substring,current_substring);
                current_substring=1;
            }
        }
        longest_substring=max(longest_substring,current_substring);
        cout<<longest_substring+1<<endl;

    }
    return 0;
}