#include <bits/stdc++.h>
using namespace std;
bool isLuckyNumber(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        num /= 10;
    }
    return true;
}
int main() {
    string n;
    cin >> n;
    int l = 0;
    for (char ch : n) {
        if (ch == '4' || ch == '7') {
            l++;
        }
    }
    if (l > 0 && isLuckyNumber(l)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
