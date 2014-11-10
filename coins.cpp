#include <bits/stdc++.h>
using namespace std;

map<long long int,long long int> s;
	
void f(long long int n){	
	if(s.find(n)==s.end()){
		long long int a,b,c;
		a=n/2; b=n/3; c=n/4;
		if(a+b+c <= n){
			s[n]=n;
		}
		else{
			f(a);f(b);f(c);
			s[n]=s[a]+s[b]+s[c];
		}
	}
}

int main(){
	long long int n;
	while(cin>>n){
		f(n);
		cout << s[n] << endl;
	}
}
