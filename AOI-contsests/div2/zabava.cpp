//https://cms.algerianoi.com/decampdiv2c2/tasks/zabava/statements/ar/zabava.ar.pdf
#include <bits/stdc++.h>
using namespace std;
#define fastAOI                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()

const int N = 5000;
int n, m, k, a[N];
ll f[N][N], g[N][N];

ll ch(int n, int k) {

  int p = n / k;
  int y = n - p * k;
  int x = k - y;
  return (ll)x * p * (p + 1) / 2 + (ll)y * (p + 1) * (p + 2) / 2;
}

void solve() {
  cin >> n >> m >> k;

  vector<int> b(m + 1, 0);
  for (int i = 0; i < n; i++) {
    int t;
    cin >> t;

    if (t <= m)
      b[t]++;
  }
  for (int i = 1; i <= m; i++)
    for (int j = 0; j <= k; j++)
      f[i][j] = ch(b[i], j + 1);

  for (int j = 0; j <= k; j++)
    g[1][j] = f[1][j];

  for (int i = 2; i <= m; i++) {
    for (int j = 0; j <= k; j++) {
      g[i][j] = g[i - 1][j] + f[i][0];
      for (int c = 1; c <= j; c++)
        g[i][j] = min(g[i][j], g[i - 1][j - c] + f[i][c]);
    }
  }
  cout << g[m][k] << "\n";
}

int main() {
  fastAOI;
  int t = 1;
  while (t--) {
    solve();
  }
  return 0;
}
