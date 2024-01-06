#include <algorithm>
#include <iostream>
#include <vector>
#define int long long
#define endl "\n"
using namespace std;


void solve(){
	int n;cin >> n;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];

	int dp[n];
	dp[0]=a[0];
	dp[1]=a[1];
	dp[2]=a[2];
	for(int i=3;i<n;i++){
		dp[i]=min({dp[i-1],dp[i-2],dp[i-3]})+a[i];
	}

	if(n==1) cout << dp[0] << endl;
	else if(n==2) cout << min(dp[0],dp[1]) << endl;
	else{
		cout << min({dp[n-1],dp[n-2],dp[n-3]}) << endl;
	}
}
signed main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); 
	freopen("output.txt","w",stdout);
	#endif

	solve();
	
	return 0;
}
	
