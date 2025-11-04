## Nelward's new job (job) Editorial
<em>writen by Mohamed Boukerche</em>

## Problem Statement
- [English](statements/job.en.pdf)
- [French](statements/job.fr.pdf)
- [Arabic](statements/job.ar.pdf)
- [Algerian arabic](statements/job.ar_DZ.pdf)

## Solution

- we are given two integers `N`  and `c` ,  consider permutations of size `N` and  the **incorrectness** of a permutation is the number of inversions: pairs `(i, j)` with `i < j` and `A[i] > A[j]`.
- We should count how many permutations of length `N` have exactly `C` inversions ,modulo  `1e9+7`
## The Idea 
- When inserting a new element into a permutation:  
- Suppose we already have a permutation of size `i-1`, and now we want to insert the element `i`.  
-  Depending on where we insert it, we add between `0` and `i-1` new inversions:
  - Insert at the end → add `0` inversions 
  - Insert before the last element → add `1` inversion 
  - insert at the front → add `i-1` inversions. 
    Thus the number of inversions grows predictably.
    
    and using dynamic programming
##  Dynamic Programming Definition
We define:
dp[i][j] = number of permutations of length with exactly `j` nversions.

$$
dp[i][j] = \sum_{k=0}^{\min(j, i-1)} dp[i-1][j-k]
$$

 If we add the element `i` and place it such that it creates `k` new inversions, then the previous part must have `j-k` inversions.
 
## Base Case

$$dp[1][0] = 1$$


## Optimization with Prefix Sums
- Naively, each transition costs O(N), giving O(C*N²).
- Using this naive approach may get partial points (~70%) because it is not efficient enough.
-  Optimizing with prefix sums is necessary for full score.
- We can speed this up with prefix sums:


$$dp[i][j] = prefix[j] - prefix[j-i]$$

Where:

$$prefix[j] = dp[i-1][0] + dp[i-1][1] + ... + dp[i-1][j]$$

This reduces the complexity to **O(N·C)**.

## The algorithm :
1. Initialize `dp[0] = 1` (only one empty permutation).
2.  For each new number from 2..N:
   - Compute prefix sums of the current `dp`.
   - Use them to fill the new `dp`.
3. Print the answer `dp[C]` and don't forget modulo `1e9 + 7`.

## Implementation (C++)
```cpp
/*
* job problem by Mohamed boukerche 
*/
#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
#define ll long long
#define fastAOI ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fastAOI;
    ll n,c;
    cin >> n>>c;
    vector<ll>dp(c+5);
   // c+1 will be enought but also change a and prefix size 
    dp[0] = 1;
    vector<ll>a(c+5);
    for(ll i = 2 ; i<= n ;i++){
        vector<ll>prefix(c+5);
        prefix[0] = dp[0];
        for(ll j = 1;j<=c;j++){
            prefix[j] = prefix[j-1] + dp[j];
            prefix[j] %= MOD;
        }
       for(int j = 0 ; j<=  c;j++){
            ll l = prefix[j],r = 0;
            if (j - i >= 0) {
               r = prefix[j - i];
             }
            a[j] = (l-r+MOD)%MOD;
        }
        a.swap(dp); 
    }
    cout <<dp[c];
    return 0;
}
```
## 7. Complexity
- Prefix sums allow each transition to be computed in O(1).
- We have **`N` elements** and **`C` inversions**, so :

 Overall : 
    $$O(N*C)$$









