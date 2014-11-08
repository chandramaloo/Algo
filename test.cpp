#include<iostream>
#include<cmath>
using namespace std;

int rev(int a){
	int c=0, i=0;
	while(true) 
	{
		if(pow(10,i)>a) break;
		i++;
	}
	while(i!=0)
	{
		i--;
		c+= pow(10,i)*(a%10);
		a=a/10;
	}
	return c;
}

int main(){
	int N,a,b;
	cin >> N;
	while(N>0)
	{
		cin >> a >> b;
		cout << rev(rev(a)+rev(b)) << endl;
		N--;
	}
}
