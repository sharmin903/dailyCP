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