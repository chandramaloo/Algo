#include <bits/stdc++.h>
using namespace std;

int f(int n){
	if(n==1) return 1;
	else{
		int ret=0;
		for(int i=1; i<=sqrt(n); i++){
			if(n%i==0) ret++;
		}
		return ret+f(n-1);
	}
}

int main(){
	int n;
	cin >> n;
	cout << f(n) << endl;
}
