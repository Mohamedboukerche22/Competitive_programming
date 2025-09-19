#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    vector<int> ar = arr; 

    while (q--) {
        int a, b;
        cin >> a >>b;
        for (int i = a-1; i < b; i++) {
            arr[i] ^= 1; 
        }
    }

    vector<int> ans;
    for (int i = 0; i < n; i++) {
    
        if (ar[i] == arr[i]) ans.push_back(0);
        else ans.push_back(1);
    }

    if (arr == ar) cout << "No";
    else {
        cout << "YES\n";
        
        
        for (int x : ans) cout << x ;
    }
}