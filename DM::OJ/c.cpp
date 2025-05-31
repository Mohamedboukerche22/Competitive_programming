#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int>lol(n);
    for(int i=0;i<n;i++){
        cin >>lol[i];
    }
    sort(lol.begin(),lol.end());
    for(int i:lol){
        cout<<i<<"\n";
    }

    return 0;
}
