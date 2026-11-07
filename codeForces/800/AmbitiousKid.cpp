#include<bits/stdc++.h>
using namespace std;
int main(){
    long int N;
    cin>>N;
    vector<long int>A(N);
    for(int i=0; i<N;i++){
        cin>>A[i];
    }
    long int operation=INT_MIN;
    for(int i=0;i<N;i++)
        operation=min(operation, abs(A[i]));
    cout<<operation<<endl;
    
}