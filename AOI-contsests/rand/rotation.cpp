#include <bits/stdc++.h>
using namespace std;



int main() {
    int n;cin>>n;
    vector<vector<int>>dp(n,vector<int>(n));
    int tt=1;
	for(int i=0;i<n;i++){
	    for(int j=0;j<n;j++){
	        dp[i][j]=tt;tt++;
	    }
	}
	for(int i=0;i<n;i++){
	    for(int j=0;j<n;j++){
	       
	        cout<< dp[i][j];
	    }
	    cout<<"\n";
	}
	cout <<"------------rotated-----------\n";
	for(int i=0;i<n;i++){
	    for(int j=i+1;j<n;j++){
	        swap(dp[i][j],dp[j][i]);
	    }
	}
		for(int i=0;i<n;i++){
		    reverse(dp[i].begin(),dp[i].end());
		}
	for(int i=0;i<n;i++){
	    for(int j=0;j<n;j++){
	        cout<< dp[i][j];
	    }
	    cout<<"\n";
	}

}
