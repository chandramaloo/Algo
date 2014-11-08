#include<iostream>
#include<cmath>
using namespace std;

int Z(int a){
	int c=0, i=0;
	while(true) 
	{
		if(pow(5,i)>a)
			break;
		i++;
		c+=(a/pow(5,i));
	}
	return c;
}

int main(){
	int N,a;
	cin >> N;
	while(N>0)
	{
		cin >> a;
		cout << Z(a) << endl;
		N--;
	}
}
