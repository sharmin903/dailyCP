#include<bits/stdc++.h>
using namespace std;
int main(){
    long long N;
    cin>>N;
    vector<long long>A(N);
    for(int i=0; i<N;i++){
        cin>>A[i];
    }
    long long operation=LLONG_MAX;
    for(int i=0;i<N;i++)
        operation=min(operation, abs(A[i]));
    cout<<operation<<endl;
    
}