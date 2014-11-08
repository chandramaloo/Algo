#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n!=0){
		int k,l,temp;
		cin >> k >> l;
		for(int i=0; i<k; i++){
			cin >> temp;
			if(temp>=l){
				if(i==k-1) cout << k << endl;
				continue;
			}
			else{
				cout << i << endl; 
				while(i!=k-1){
					cin >> temp;
					i++;
				}
				break;
			}
		}
		n--;
	}
}
