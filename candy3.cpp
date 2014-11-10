#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int N,a,n,sum;
	cin >> N;
	while(N!=0){
		N--;
		cin >> n;
		sum=0;
		for(int i=0; i<n; i++){
			cin >> a;
			sum=(sum+a)%n;
		}
		if(sum % n == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
