// https://cses.fi/problemset/task/1641/
//didnt have lot of time to make it cleaner 
#include<bits/stdc++.h>
using namespace std;
int main()
{
//long long
    int n , t;
    cin >> n >> t;
    vector<int>ar(n);
    vector<int>places(n);
    iota(places.begin(),places.end(),1);
    int sum = 0;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> ar[i];
        sum += ar[i];
    }
    vector<pair<int,int>> arr;
    for(int i = 0 ; i < n ; i++)arr.push_back({ar[i],i+1});
    sort(arr.begin(),arr.end());
    for(int i = 0 ; i < n ; i++){int l = i+1 ; int r = n-1; while(l<r){long long sum = arr[i].first +arr[l].first+arr[r].first;
    if(sum == t){vector<int> res = {arr[i].second, arr[l].second, arr[r].second};sort(res.begin(),res.end());for(int i:res){cout<<i<<" ";}return 0;}
    if (sum  < t ){l++;}else {r--;}}}
    cout << "IMPOSSIBLE"; return 0;
    //for(int i : s)cout << i << " " ;
    if(t > sum ){cout << "IMPOSSIBLE";return 0;}
    int del = sum - t;
    // int it = 
    int count = 1;bool found = 0; 
    for(int i : ar){if(i == del){found = 1;break;} else{count++;}}
    if(found) places.erase(places.begin() + (count - 1));
    else{for(int i = 0 ; i < n ;i++){for(int j = i+1 ; j < n;j++){if(ar[i] + ar[j] == del){places.erase(places.begin() + (i - 1));places.erase(places.begin() + (j - 1));break;}}}}
    if(places.size() < 3){cout << "IMPOSSIBLE";return 0;}
    //for(int i : places)cout << i <<" ";
 
}
