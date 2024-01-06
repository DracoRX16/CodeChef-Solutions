#include <algorithm>
#include <iostream>
#include <vector>
#define int long long
#define endl "\n"
using namespace std;


void solve(){
	int n;cin >> n;
	int ar[n+1][n+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cin >> ar[i][j];
		}
	}
	int dp[n+1][n+1];
	for(int j=1;j<=n;j++){
		dp[n][j]=ar[n][j];
	}
	for(int i=n-1;i>=0;i--){
		for(int j=1;j<=i;j++){
			dp[i][j]=ar[i][j]+max(dp[i+1][j],dp[i+1][j+1]);
		}
	}
	cout << dp[1][1] << endl;
	
}
signed main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); 
	freopen("output.txt","w",stdout);
	#endif
	int t;cin >> t;
	while(t--){
		solve();
	}
	
	return 0;
}
	
