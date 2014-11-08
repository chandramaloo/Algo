#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	char prev;
	vector<char> v;
	while(n!=0){
		cin >> s;
		for(int i=0; i<s.size(); i++){
			if(s[i]>='a' && s[i]<='z'){
				cout << s[i];
			}
			else if(s[i]=='('){
				continue;
			}
			else if(s[i]==')'){
				cout << v[v.size()-1];
				v.resize(v.size()-1);
			}
			else{
				v.push_back(s[i]);
			}
		}
		cout << endl;
		n--;
	}
}
