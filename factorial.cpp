#include<iostream>
#include<cmath>
using namespace std;

long long int factorial(long long int a){
	long long int c=1;
	while(a!=0) 
	{
		c*=a;
		a=a-1;
	}
	return c;
}

int main(){
	int N;
	long long int a;
	cin >> N;
	while(N>0)
	{
		cin >> a;
		cout << factorial(a) << endl;
		N--;
	}
}
