#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a,b,c;
	cin >> n;
	while(n!=0){
		n--;
		cin >> a >> b;
		if(a==0){
			cout << 0 << endl;
			continue;
		}
		if(b==0){
			cout << 1 << endl;
			continue;			
		}
		if(b%4!=0) 
			c=pow(a%10,b%4);
		else
			c=pow(a%10,4);
		cout << (c%10) << endl;
	}
}
