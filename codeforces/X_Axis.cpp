#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int findMedian(int a, int b, int c) {
    if ((a >= b && a <= c) || (a >= c && a <= b)) {
        return a; 
    } else if ((b >= a && b <= c) || (b >= c && b <= a)) {
        return b; 
    } else {
        return c; 
    }
}

int main() {
    int t;
    cin >>t;
    while(t--){
        int a,b,c;
        cin >>a>>b>>c;
        int result = abs(a-findMedian(a,b,c))+abs(b-findMedian(a,b,c))+abs(c-findMedian(a,b,c));
        cout << result<<endl;
    }

    return 0;
}
