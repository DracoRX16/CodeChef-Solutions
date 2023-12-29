#include <iostream>
#include <algorithm>
#include <vector>
#define int long long
#define endl "\n"
using namespace std;

int check(int m,int k,vector<int>& prefixSum){
	auto getSum=[&](int i,int j){
		if(i==0) return prefixSum[j];
		else return prefixSum[j] - prefixSum[i-1];
	};
	int start=0,end=m;
	int ans=0;
	while(start<=end){
		int mid=start+(end-start)/2;
		int req=(m-mid+1)*k-getSum(mid,m);
		if(req<=mid){
			ans=m-mid+1;
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
	return ans;
}




signed main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); 
	freopen("output.txt","w",stdout);
	#endif

	int t;cin >> t;
	while(t--){
		int n,q;cin >> n >> q;
		vector<int> len(n);
		for(int i=0;i<n;i++)cin >> len[i];
		sort(len.begin(),len.end());
		vector<int> prefixSum(len.begin(),len.end());
		for(int i=1;i<n;i++) prefixSum[i]+=prefixSum[i-1];


		while(q--){
			int k;cin >> k;
			int ans=0;
			int endIdx=upper_bound(len.begin(),len.end(),k-1)-len.begin();
			ans+=n-endIdx;
			ans+=check(endIdx-1,k,prefixSum);
			cout << ans << endl;
		}

	}


	return 0;
}
	
