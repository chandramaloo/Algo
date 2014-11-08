#include<iostream>
using namespace std;

int main(){
  string a;
  int b;
  while(cin>>b>>a){
    if(b==0)
     	break;
    else{
      int c = (a.size()/b);
      char d[b][c];
      for(int j=0; j<c; j++){
	for(int i=0; i<b; i++){
	  if((j%2)==0)
	    d[i][j]=a[0];
	  else
	    d[b-i-1][j]=a[0];
	  a=a.substr(1,a.size()-1);
	}
      }
      for(int i=0; i<b; i++){
	for(int j=0; j<c; j++){
	  cout << d[i][j];
	}
      }
      cout << endl;
    }
  }
}
