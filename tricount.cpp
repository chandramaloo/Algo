#include <bits/stdc++.h>
using namespace std;

int main(){
	long long unsigned n,j;
	cin >> n;
	for(long long int i=1; i<=n; i++){
		cin >> j;
		cout << ((j*(j+2)*(2*j+1))/8) << endl;
	}
}
