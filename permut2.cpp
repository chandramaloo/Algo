#include <bits/stdc++.h>
using namespace std;

int a[100001];
int b[100001];

int main(){
	int n;
	bool flag;
	while(cin>>n && n!=0){
		flag=true;
		for(int i=1; i<=n; i++){
			cin >> a[i];
			b[a[i]]=i;
		}
		for(int i=1; i<=n; i++){
			if(a[i]!=b[i]){
				cout << "not ambiguous" << endl;
				flag=false;
				break;
			}
		}
		if(flag) cout << "ambiguous" << endl;
	}
}
