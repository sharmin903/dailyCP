#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    if(N%3==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
// Ribbon Cut
// You have a ribbon of length 
// N
// N. You want to cut it into two pieces of positive integer lengths such that one piece is exactly twice as long as the other.

// Determine whether this is possible.

// Input Format
// The only line of input contains a single integer 
// N
// N.
// Output Format
// Output YES if it is possible, and NO otherwise.

// Each letter of YES and NO may be printed in either uppercase or lowercase.

// Constraints
// 1
// ≤
// N
// ≤
// 20
// 1≤N≤20