//https://cses.fi/problemset/task/1643/
#include<bits/stdc++.h>
using namespace std;
// this time i used class to make it better :)
class Solution {
public:
    static long long kadane(vector<long long>& a)
    {
        long long maxa = a[0];
        long long  sum = a[0];
        for(long long i = 1 ; i < a.size();i++ )
        {
            sum = max(a[i],sum + a[i]);
            maxa = max(maxa , sum);

        }
        return maxa;
    }
};
int main(){
    long long  n;
    cin >> n;
    vector<long long>a(n);
    for(int i = 0 ; i< n ;i++)
    {
        cin >> a[i];
    }
    long long s = Solution::kadane(a);
    cout << s;
    
}
