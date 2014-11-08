#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	vector<int> v;
	while(cin>>n){
		int sum=0,ret=0;
		if(n==-1) return 0;
		for(int i=0; i<n; i++){
			cin >> k;
			v.push_back(k);
			sum+=k;
		}
		if(sum%n!=0){
			cout << -1 << endl;
			continue;
		}	
		sum=sum/n;
		for(int i=0; i<n; i++){
			if(v[i]>sum)
			ret+=(v[i]-sum);
		}
		cout << ret << endl;
	}
}
