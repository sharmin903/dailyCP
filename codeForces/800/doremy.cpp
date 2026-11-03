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