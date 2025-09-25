//https://atcoder.jp/contests/hhkb2020/tasks/hhkb2020_c
#include <bits/stdc++.h>
using namespace std;

#define fastAOI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()
int mex(vector<int> const & A){
  set<int>s (A.begin(),A.end());
  int result = 0;
  while(s.count(result)){
    result++;
  }
  return result;
}
int main() {
    fastAOI;
    int t = 1;
    while (t--) {
      int n;
      cin >>n;
      vector<int>arr(n+2,0);
      int curr = 0;

      for(int i = 0 ; i< n ;i++){
        int x;
        cin >> x;
        if(x <= n)arr[x]++;
        while(arr[curr] > 0)curr++;
        cout << curr<<"\n";

      }
    }
    return 0;
}
