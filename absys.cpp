#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	string a,b,c;
	cin >> n;
	while(n!=0){
		n--;
		cin >> a >> b >> b >> c >> c;
		if(a.find("machula")!=-1)
			cout << atoi(c.c_str())-atoi(b.c_str()) << " + " << b << " = " << c << endl;
		else if(b.find("machula")!=-1)
			cout << a << " + " << atoi(c.c_str())-atoi(a.c_str()) << " = " << c << endl;
		else if(c.find("machula")!=-1)
			cout << a << " + " << b << " = " << atoi(a.c_str())+atoi(b.c_str()) << endl;
	}
}
