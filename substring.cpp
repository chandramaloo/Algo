#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
  string a, b;
  while(cin>>a>>b){
    int j=0;
    for(int i=0; i<10; i++){
      if(a[i]==b[j]){
	j=j+1;
      }
      if(j==5){
	cout << "1" << endl;
	break;
      }
    }
    if(j!=5) cout << "0" << endl;
    j=0;
  }
}
