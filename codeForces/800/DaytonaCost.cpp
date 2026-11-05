#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[100];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        long long number_found = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == k)
            {
                number_found = 1;
                break;
            }
        }
        if(number_found){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }

    return 0;
}