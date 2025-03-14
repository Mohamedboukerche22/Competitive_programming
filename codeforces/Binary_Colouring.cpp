#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
    int x;
    cin >> x;
    vector<int> lol; 
    while (x > 0) {
      int b = x % 2; 
      x /= 2; 
      if (b == 1) {
      if ((x % 2) == 1) {
      lol.push_back(-1);
      x++; 
      } else {
      lol.push_back(1);
                }
      } else {
      lol.push_back(0);
            } }
      cout << lol.size() <<endl;

        for(auto i:lol){
          cout <<i<<" ";
          }
        cout << "\n";
    }
    return 0;
}
//  █████╗  ██████╗ ██╗
// ██╔══██╗██╔═══██╗██║
// ███████║██║   ██║██║
// ██╔══██║██║   ██║██║
// ██║  ██║╚██████╔╝██║
// ╚═╝  ╚═╝ ╚═════╝ ╚═╝
