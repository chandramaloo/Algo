#include <bits/stdc++.h>
using namespace std;

long long int a[5001];

void f(string n){
	if(n.size()<=1){
		a[n.size()]=1;
		return;
	}
	int c = (int)(n[n.size()-1]-'0') + (int)(n[n.size()-2]-'0')*10;
	if(c<=9){
		if(a[n.size()-1]==-1)
			f(n.substr(0,n.size()-1));
		a[n.size()]=a[n.size()-1];
		return;
	}
	else if(c%10==0){
		if(a[n.size()-2]==-1)
			f(n.substr(0,n.size()-2));
		a[n.size()]=a[n.size()-2];
		return;
	}
	else if(c>10 && c<=26){
		if(a[n.size()-2]==-1)	
			f(n.substr(0,n.size()-2));
		if(a[n.size()-1]==-1)
			f(n.substr(0,n.size()-1));
		a[n.size()]=a[n.size()-2]+a[n.size()-1];
		return;
	}
	else{
		if(a[n.size()-1]==-1)
			f(n.substr(0,n.size()-1));
		a[n.size()]=a[n.size()-1];
		return;
	}
}

int main(){
	string n;
	while(cin>>n && n!="0"){
		for(int i=0; i<5001; i++) a[i]=-1;
		f(n);
		cout << a[n.size()] << endl;
	}
}
