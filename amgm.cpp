#include<iostream>
using namespace std;

int main(){
  long long int a, b, c;
  while(cin>>a>>b>>c){
    if(a==0 && b==0 && c==0) break;
    if(b*b==a*c) cout << "GP "<< (c*b)/a << endl;
    else cout << "AP " << (c+b-a) << endl;
  }
}
