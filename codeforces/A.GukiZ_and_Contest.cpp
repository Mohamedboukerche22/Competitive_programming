// https://codeforces.com/group/VICVhBwFUY/contest/621867/problem/A
#include<bits/stdc++.h>
using namespace std;
const int INF = INT_MAX;
int main()
{
    int n;
    cin >> n;
    vector<int>ar(n);
    for(int i = 0 ; i < n ; i++)cin >> ar[i];
    vector<pair<int,int>>arr;
    for(int i = 0 ; i < n ; i++){arr.push_back({ar[i],i});}
    sort(arr.begin(),arr.end(),greater<>());
    
    int up = INF;
    int count = 1;
    int rank  = 1;
    vector<int>position(n);
    position[arr[0].second] = rank;
    for(int i = 1; i < n  ;i++){
       if(arr[i - 1].first != arr[i].first){rank += count; position[arr[i].second] = rank;count = 1;} else {position[arr[i].second] = rank;count++;}}
    // rank = 1 and if it change update by + 1
    for(int i : position){cout <<i<<" ";}
    
}
