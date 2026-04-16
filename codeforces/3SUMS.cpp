#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;vector<int>a(n);vector<int>freq(10,0);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        a[i]%=10;
	        freq[a[i]]++;
	    }
	    bool exist =0;
	    for(int i=0;i<10;i++){
	        for(int j=0;j<10;j++){
	            for(int x=0;x<10;x++){
	                if((x+i+j)%10==3){
	                    freq[i]--;  freq[j]--; freq[x]--;
	                    if(freq[i]>=0 && freq[j]>=0 &&freq[x]>=0){
	                        exist=true;
	                       
	                    }
	                     freq[i]++;  freq[j]++; freq[x]++;
	                }
	                
	            }
	        }
	    }
	    if(exist){
	        cout <<"YES\n";
	    }else{
	        cout<<"NO\n";
	    }
	}

}
