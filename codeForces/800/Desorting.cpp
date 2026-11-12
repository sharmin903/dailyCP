#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0; i<n;i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            if(is_sorted(a.begin(),a.end())){
                do{
                    a[i]+1;
                }while(i<n-1);
                do{
                    a[i]-1;
                }while(i=n);
            }else{
                cout<< 0<<endl;
            }
        }
    }
}