#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

int func(vector<int> k, vector<int> l, int digit){
	int ret=0;
	int i=0;
	while(digit!=0){
		if(k[i]!=0){
			ret=ret+(l[i]*pow(10,digit-1));
			k[i]--;
			digit--;
		}
		else{
			i++;
		}
	}
	return ret;
}

int func2(int num){
		
}

int main(){
	int n;
	cin >> n;
	while(n!=0){
		int m, digit=0;
		int kk, ll;
		vector<int> k,l;
		cin >> m;
		for(int i=0; i<m; i++){
			cin >> kk >> ll;
			k.push_back(kk);
			l.push_back(ll);
			digit+=k[i];
		}
		int num=func(k,l,digit);
		cout << func2(num) << endl;
		n--;
	}
}
