#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n,a;
	cin >> n;
	while(n!=0){
		n--;
		cin >> a;
		if(a%4==0) cout << 1000*(a/4 - 1) + 942 << endl;
		else if(a%4==1) cout << 1000*(a/4) + 192 << endl;
		else if(a%4==2) cout << 1000*(a/4) + 442 << endl;
		else if(a%4==3) cout << 1000*(a/4) + 692 << endl;
	}
}
