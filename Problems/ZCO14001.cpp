#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); 
	freopen("output.txt","w",stdout);
	#endif

	int w,h;cin >> w >> h;
	int a[w];
	for(int i=0;i<w;i++){
		cin >> a[i];
	}
	int cpos=0;
	int cmd=-1;
	bool hasbox=false;
	while(cmd!=0){
		cin >> cmd;
		if(cmd==1 && cpos!=0){
			cpos--;
		}
		else if(cmd==2 && cpos!=w-1){
			cpos++;
		}
		else if(cmd==3 && hasbox==false && a[cpos]>0){
			a[cpos]--;
			hasbox=true;
		}
		else if(cmd==4 && hasbox==true && a[cpos]+1<=h){
			a[cpos]++;
			hasbox=false;
		}		
	}
	for(int i=0;i<w;i++){
		cout << a[i] << " ";
	}


	return 0;
}
	
