#include<bits/stdc++.h>
using namespace std;
// bool check(string s, string x){
//     if(x.size()<s.size()){
//         return false;
//     }
//     for(int i=0; i<x.size()-s.size()+1; i++){
//         if(x.substr(i,s.size())==s){
//             return true;
//         }
//     }
//     return false;
// }
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x;
        cin>>x;
        string s;
        cin>>s;
        

        // string x0=x;
        // string x1=x0+x0;
        // string x2=x1+x1;
        // string x3=x2+x2;
        // string x4=x3+x3;
        // string x5=x4+x4;
        long long ans=-1;
        for(int i=0; i<=5; i++){
            if(x.find(s)!=string::npos){
                ans=i;
                break;
            }
            x += x;
        }
        // if (check(s,x0)){
        //     ans=0;
        // }
        // else if(check(s,x1)){
        //     ans=1;
        // }
        // else if(check(s,x2)){
        //     ans=2;
        // }
        // else if(check(s,x3)){
        //     ans=3;
        // }
        // else if(check(s,x4)){
        //     ans=4;
        // }
        // else if(check(s,x5)){
        //     ans=5;
        // }
         cout<<ans<<endl;
    }
    return 0;
}


//=============Question=========//
// Given a string x
//  of length n
//  and a string s
//  of length m
//  (n⋅m≤25
// ), consisting of lowercase Latin letters, you can apply any number of operations to the string x
// .

// In one operation, you append the current value of x
//  to the end of the string x
// . Note that the value of x
//  will change after this.

// For example, if x=
// "aba", then after applying operations, x
//  will change as follows: "aba" →
//  "abaaba" →
//  "abaabaabaaba".

// After what minimum number of operations s
//  will appear in x
//  as a substring? A substring of a string is defined as a contiguous segment of it.

// Input
// The first line of the input contains a single integer t
//  (1≤t≤104
// ) — the number of test cases.

// The first line of each test case contains two numbers n
//  and m
//  (1≤n⋅m≤25
// ) — the lengths of strings x
//  and s
// , respectively.

// The second line of each test case contains the string x
//  of length n
// .

// The third line of each test case contains the string s
//  of length m
// .

// Output
// For each test case, output a single number — the minimum number of operations after which s
//  will appear in x
//  as a substring. If this is not possible, output −1
// .
