#include <algorithm>
#include <iostream>
#include <vector>
#define int long long
#define endl "\n"
using namespace std;


void solve(){
	int n,k;cin >> n >> k;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];

	int cnt=0;
	int diff;
	sort(a,a+n);
	for(int i=0;i<n;i++){
		int idx=lower_bound(a,a+n,a[i]+k)-a;
		int nov=n-idx;
		cnt+=nov;a
	}
	cout << cnt << endl;

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
	
