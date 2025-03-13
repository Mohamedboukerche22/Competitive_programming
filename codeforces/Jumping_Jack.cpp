#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
   ll n; cin >> n;
    n = abs(n);
    ll k = 1;
    ll sum = 0;
    while (sum < n) {
      sum += k;
      k++;
    }

    while (sum % 2 != n % 2){                            
    sum += k;
    k++;
    }
    cout << k - 1;
    
    return 0;
}
