#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n!=0){
		int k,ret=0;
		cin >> k;
		vector<int> a(k),b(k);
		for(int i=0; i<2*k; i++){
			if(i<k)
				cin >> a[i];
			else
				cin >> b[i-k];
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		for(int i=0; i<k; i++){
			ret+=a[i]*b[i];
		}
		cout << ret << endl;
		n--;
	}
}
