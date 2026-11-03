#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>a(n);
        for(int i=0; i<n;i++) cin>>a[i];
        map<long long,long long>frequecy_map;
        for(int i=0; i<n;i++)
            frequecy_map[a[i]]++;
            if(frequecy_map.size()>=3)cout<<"No"<<endl;
            else{
                long long frequency1=frequecy_map.begin()->second;
                long long frequency2=frequecy_map.rbegin()->second;

                if(frequency1==frequency2)cout<<"Yes"<<endl;
                else if(n%2==0 && abs(frequency1-frequency2)==1)cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
            }
    }
    return 0;
}

// An array b1,b2,…,bn
//  of positive integers is good if all the sums of two adjacent elements are equal to the same value. More formally, the array is good if there exists a k
//  such that b1+b2=b2+b3=…=bn−1+bn=k
// .

// Doremy has an array a
//  of length n
// . Now Doremy can permute its elements (change their order) however she wants. Determine if she can make the array good.

// Input
// The input consists of multiple test cases. The first line contains a single integer t
//  (1≤t≤100
// ) — the number of test cases. The description of the test cases follows.

// The first line of each test case contains a single integer n
//  (2≤n≤100
// ) — the length of the array a
// .

// The second line of each test case contains n
//  integers a1,a2,…,an
//  (1≤ai≤105
// ).

// There are no constraints on the sum of n
//  over all test cases.

// Output
// For each test case, print "Yes" (without quotes), if it is possible to make the array good, and "No" (without quotes) otherwise.

// You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses.

