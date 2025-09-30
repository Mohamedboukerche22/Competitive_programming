//https://cses.fi/problemset/task/1090/
#include <bits/stdc++.h>
using namespace std;

#define fastAOI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()


int main() {
    fastAOI;
    int t = 1;
    // cin >> t;
    while (t--) {
       int n,x;
       cin >>n >>x;
       vector<int>p(n);
       vector<int>res(n,0);
       for(int &i:p)cin >>i;
       sort(all(p),greater<>());
       int count = 0,l = 0,r = n-1;

       while(l <= r){
        if(p[l]+p[r]<=x){
            res[l] = res[r] = 1;
            l++;r--;
            
        }else{
        res[l] = 1;
        l++;
       }

        count++;
       }
       


    cout <<count;
    }
    return 0;
}
