#include <bits/stdc++.h>
using namespace std;

bool isPal(int i, int j, vector <int> a){
    while(i<=j){
        if(a[i]==a[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}



int main() {
	int n;cin >> n;
	vector <int> a(n);
	for(int i=0;i<n;i++) cin >> a[i];
	
	vector <int> dp(n, INT_MAX);
	dp[n-1]=1;
	for(int i=n-2;i>=0;i--){
	    for(int j=n-1;j>=i;j--){
	        if(isPal(i,j,a)){
	            if(j<n-1){
	                dp[i]=min(dp[i], dp[j+1]+1);
	            }
	            else{
	                dp[i]=1;
	            }
	        }
	        
	    }
	}
	cout << dp[0] << endl;
    return 0;

}
