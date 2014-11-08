#include<iostream>
using namespace std;

int main(){
  int a;
  while(cin>>a){
    if(a==0)
     	break;
    else
    	cout<<((a*(a+1)*((2*a)+1))/6)<<endl;
  }
}
