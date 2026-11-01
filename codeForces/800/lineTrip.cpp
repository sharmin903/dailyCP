
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<long long>stations;
        stations.push_back(0);
        for(int i=0;i<n;i++){
            int points;
            cin>>points;
            stations.push_back(points);
        }
        stations.push_back(x);
        n=stations.size();
        long long max_distance=0;
        for(int i = 1; i<n;i++){
            if(i==n-1){
                max_distance=max(max_distance,2*(stations[i]-stations[i-1]));
            }
            else{
                max_distance=max(max_distance,(stations[i]-stations[i-1]));
            }
        }
        cout<<max_distance<<endl;
    }
    return 0;
}

//  There is a road, which can be represented as a number line. You are located in the point 0 of the number line, and you want to travel from the point 0 to the point x , and back to the point 0

// You travel by car, which spends 1 liter of gasoline per 1 unit of distance travelled. When you start at the point 0 , your car is fully fueled (its gas tank contains the maximum possible amount of fuel).

// There are n gas stations, located in points a1,a2,…,an. When you arrive at a gas station, you fully refuel your car. Note that you can refuel only at gas stations, and there are no gas stations in points 0 and x.

// You have to calculate the minimum possible volume of the gas tank in your car (in liters) that will allow you to travel from the point 0 to the point x and back to the point 0 .

// Input:
// The first line contains one integer t (1≤t≤1000) — the number of test cases.

// Each test case consists of two lines:
// the first line contains two integers n and x (1≤n≤50; 2≤x≤100 );
// the second line contains n integers a1,a2,…,an (0<a1<a2<⋯<an<x).

// Output:
// For each test case, print one integer — the minimum possible volume of the gas tank in your car that will allow you to travel from the point 0 to the point x and back.

//What's the longest stretch without refueling?
//Find the maximum of all required leg capacities.