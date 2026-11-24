#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[20];
        for(int i=0; i<n;i++){
            cin>>arr[i];
        }
        bool isSwaped=false;
        for(int i=0;i<n;i++){
            for(int j=0; j<n;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    isSwaped=true;
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<arr[i];
        }

    }
}