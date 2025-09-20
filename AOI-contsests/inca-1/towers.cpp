#include<bits/stdc++.h>
#define ll long long
#define fastAOI ios::sync_with_stdio(false); cin.tie(nullptr);
#define read(x) vector<string>(x)(n);for(int i=0;i<n;i++)cin>>(x)[i];
using namespace std;

int main(){
    fastAOI
    int n,m,si,sj,ei,ej;
    cin>>n>>m;
    read(g)
  
    vector<vector<int>>ds(n,vector<int>(m,1e9)),md(n,vector<int>(m,-1));
    queue<pair<int,int>>q;

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(g[i][j]=='V')si=i,sj=j;
      if(g[i][j]=='J')ei=i,ej=j;
      if(g[i][j]=='+')ds[i][j]=0,q.push({i,j});
    }
  }
  int d[4][2]={{-1,0},{1,0},{0,-1},{0,1}};

  while(q.size()){

    auto [x,y]=q.front();q.pop();

    for(auto [dx,dy]:d){

      int X=x+dx;
      int Y=y+dy;

      if(X >= 0 && X<n && Y >= 0 && Y < m && ds[X][Y] > ds[x][y]+1)
        ds[X][Y]=ds[x][y]+1,q.push({X,Y});
    }
  }
  md[si][sj]=ds[si][sj];q.push({si,sj});
  while(q.size()){
    auto [x,y]=q.front();q.pop();
    for(auto [dx,dy] : d){
      int X=x+dx;
      int Y=y+dy;

      if(X >= 0 && X < n &&  Y >= 0 && Y < m){
      
        int nm=min(md[x][y],ds[X][Y]);
        if(nm > md[X][Y]){
            md[X][Y]=nm,q.push({X,Y});
        }
      }
    }
  }
  cout<<md[ei][ej];
}
