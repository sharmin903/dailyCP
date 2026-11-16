#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a=1;
    for(long long i=0; i<50; i++){
        a=lcm(a,i);
    }
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int i=1;
        while(n%i==0)
            i++;
            cout << i - 1 << endl;
    }
    return 0;
}

// Max interval of divisors → check lcm(1..k), stop when it doesn't divide n
// Brute force = the simplest solution that just tries everything, without caring about speed.
// Trick: answer = largest k where lcm(1..k) divides n


// Given a positive integer n
// , find the maximum size of an interval [l,r]
//  of positive integers such that, for every i
//  in the interval (i.e., l≤i≤r
// ), n
//  is a multiple of i
// .

// Given two integers l≤r
// , the size of the interval [l,r]
//  is r−l+1
//  (i.e., it coincides with the number of integers belonging to the interval).

// Input
// The first line contains a single integer t
//  (1≤t≤104
// ) — the number of test cases.

// The only line of the description of each test case contains one integer n
//  (1≤n≤1018
// ).

// Output
// For each test case, print a single integer: the maximum size of a valid interval.