#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>a(n);
        for(int i=0; i<n;i++){cin>>a[i];}
        long long sum_even=0;
        long long sum_odd=0;   
        for(int i=0; i<n;i++){
            if(a[i]%2==1){
                sum_odd+=a[i];
            }else{
                sum_even+=a[i];
            } 
        }
        if (sum_even%2==0 && sum_odd%2==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}
// You are given an array consisting of n
//  integers. Your task is to determine whether it is possible to color all its elements in two colors in such a way that the sums of the elements of both colors have the same parity and each color has at least one element colored.

// For example, if the array is [1,2,4,3,2,3,5,4
// ], we can color it as follows: [1,2,4,3,2,3,5,4
// ], where the sum of the blue elements is 6
//  and the sum of the red elements is 18
// .

// Input
// The first line contains an integer t
//  (1≤t≤1000
// ) — the number of test cases.

// Each test case begins with a line containing an integer n
//  (2≤n≤50
// ) — the length of the array a
// .

// The next line contains n
//  integers a1,a2,…,an
//  (1≤ai≤50
// ) — the elements of the array a
// .

// Output
// For each test case, output "YES" (without quotes) if it is possible to color the array in two colors in such a way that the sums of the elements of both colors have the same parity and each color has at least one element colored, and "NO" otherwise.

// You can output "Yes" and "No" in any case (for example, the strings "yES", "yes", and "Yes" will be recognized as correct answers).