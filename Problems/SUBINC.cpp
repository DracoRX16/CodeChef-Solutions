#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

signed main() {
	int t;cin >> t;
	while(t--){
	    int n;cin >> n;
	    vector <int> a(n),dp(n,1);
	    int ans=1;
	    for(int i=0;i<n;i++) cin >> a[i];
	    
	    for(int i=1;i<n;i++){
	        if(a[i]>=a[i-1]){
	            dp[i]+=dp[i-1];
	        }
	        ans+=dp[i];
	    }
	    cout << ans << endl;
	}
	return 0;

}
