
#define ll long long 
class Solution {
private:
  ll MOD = 1e9 +7;
  int n,m;vector<vector<ll>>mem;
 pair<int, int> simulate(int r,int c,char direction,const vector<vector<int>>& grid) {
  int rx = r, cx = c;
  if(direction=='R')cx++;
  else rx++;
  while(rx>=0&&rx<m&&cx>=0&&cx<n&&grid[rx][cx]==1){
    if(direction=='R'){rx++;direction='D';}
    else{cx++;direction='R';}
  }
  if(rx>=0&&cx>=0&&rx<m&&cx<n)return {rx,cx};
  return {-1,-1};
 }
 ll dp(int r, int c, const vector<vector<int>>& grid) {
   if(r==m-1 && c==n-1)return 1;
   if(mem[r][c]!=-1)return mem[r][c];
   ll cnt=0;
   pair<int,int> nxt_r=simulate(r,c,'R',grid);
   if(nxt_r.first!=-1){
    cnt=(cnt+dp(nxt_r.first,nxt_r.second,grid))%MOD;
   }
    pair<int,int> nxt_d=simulate(r,c,'D',grid);
   if(nxt_d.first!=-1){
    cnt=(cnt+dp(nxt_d.first,nxt_d.second,grid))%MOD;
   }
    return mem[r][c] = cnt;
 }
public:
    int uniquePaths(vector<vector<int>>& grid) {
         m=grid.size(),n=grid[0].size();
          mem.assign(m,vector<ll> (n,-1));
          return dp(0,0,grid);      
    }
};
