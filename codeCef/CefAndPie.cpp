#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        long long N;
        cin>>N;
        vector<long long>A(N);
        for(int i=0; i<N; i++){
            cin>>A[i];
        }
        long long total_sum=0;
        for(int i=0; i<N;i++){
            total_sum += A[i];
        }
        long long min_sum=1000;
        for(int i=0; i<N-1;i++){
            long long current_sum = (A[i]+A[i+1])/2;
            if(current_sum <min_sum){
                min_sum=current_sum;
            }
        }
        long long price_of_pie=(total_sum-min_sum);
        cout<<price_of_pie<<endl;
    }
    return 0;
 }
// Chef runs a bakery. Every day for the next 
// N
// N days, he bakes exactly one salted caramel pie and sells it.
// The price of the pie on day 
// i
// i is 
// A
// i
// A 
// i
// ​
//  . All prices are even.

// Chef will run a discount on exactly two consecutive days: on those two days, the price of the pie is halved.

// Find the maximum total amount Chef can earn over the 
// N
// N days, if he chooses the two days to halve price appropriately.

// Input Format
// The first line of input will contain a single integer 
// T
// T, denoting the number of test cases.
// Each test case consists of two lines of input.
// The first line of each test case contains a single integer 
// N
// N, the number of days.
// The second line contains 
// N
// N space-separated integers 
// A
// 1
// ,
// A
// 2
// ,
// …
// ,
// A
// N
// A 
// 1
// ​
//  ,A 
// 2
// ​
//  ,…,A 
// N
// ​
//  , denoting the prices of the pie.
// Output Format
// For each test case, output on a new line the maximum total amount Chef can earn.