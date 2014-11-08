#include<iostream>
using namespace std;

void rem(bool a[], long long i, long long n){
	long long  k=2;
	while((i*k)<=n){
		a[i*k-1]=1;
		k++;
	}
}
	
void prime(long long ll,long long ul){
	if(ul>=2){
		bool a[ul];
		for(long long i=0; i<ul; i++)
			a[i]=0;
		
		for(long long i=1; i<ul; i++){
			if(a[i]==0){
				if((i+1)>=ll)
					cout << i+1 << endl;
				rem(a,i+1,ul);
			}
		}
		cout << endl;
	}
}

int main(){
	long long n;
	long long ll, ul;
	cin>>n;
	while(n!=0){
		cin >> ll >> ul;
		prime(ll,ul);
		n--;
	}
}
