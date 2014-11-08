#include<bits/stdc++.h>
using namespace std;

class BigInt{
	public:
	string a;
	
	BigInt(){
		a="";
	}
	
	void operator=(string s){
			a=s;
	}
	
	bool operator<(BigInt b){
			if(a.length()<b.a.length()) return true;
			if(a.length()>b.a.length()) return false;
			int i=0;
			while(a[i]>=b[i]){
				if(a[i]>b[i] || i==a.length()) return false;
				i++;
			}
			return true;
	}
	
	bool operator>(BigInt b){
			if(a.length()>b.a.length()) return true;
			if(a.length()<b.a.length()) return false;
			int i=0;
			while(a[i]<=b[i]){
				if(a[i]<b[i] || i==a.length()) return false;
				i++;
			}
			return true;
	}
	
	bool operator==(BigInt b){
			if(a.length()!=b.a.length()) return false;
			int i=0;
			while(a[i]==b[i]){
				if( i==a.length() ) return true;
				i++;
			}
			return false;
	}
	
	bool operator>=(BigInt b){
			return ( *this > b || *this==b );
	}
	
	bool operator<=(BigInt b){
			return ( *this < b || *this==b );
	}

	void operator=(int s){
			while(s!=0){
					a=(char)((s%10)+48)+a;
					s=s/10;
			}
	}
	
	BigInt operator+(BigInt b){
		BigInt ret;
		int sum=0,carry=0,i;
		if(a.size()>b.a.size()){
			for(i=0; i<b.a.size(); i++){
				sum=(int)(b.a[b.a.size()-1-i]-'0')+(int)(a[a.size()-1-i]-'0');
				ret.a=(char)((sum%10)+48)+ret.a;
				sum=sum/10;
			}
			for(i; i<a.size(); i++){
				sum=(int)(a[a.size()-1-i]-'0');
				ret.a=(char)((sum%10)+48)+ret.a;
				sum=sum/10;
			}
			if(sum!=0){
				ret.a=(char)(sum+48)+ret.a;
			}
			return ret;
		}
		else{
			for(i=0; i<a.size(); i++){
				sum=(int)(a[a.size()-1-i]-'0')+(int)(b.a[b.a.size()-1-i]-'0');
				ret.a=(char)((sum%10)+48)+ret.a;
				sum=sum/10;
			}
			for(i; i<b.a.size(); i++){
				sum=(int)(b.a[b.a.size()-1-i]-'0');
				ret.a=(char)((sum%10)+48)+ret.a;
				sum=sum/10;
			}
			if(sum!=0){
				ret.a=(char)(sum+48)+ret.a;
			}
			return ret;
		} 
	}

	BigInt operator-(BigInt b){
		BigInt ret="0";
		if(*this<=b) return ret;
		int carry=0,i;
			for(i=0; i<a.size(); i++){
				if()
				ret+
			}
			for(i; i<b.a.size(); i++){
				sum=(int)(b.a[b.a.size()-1-i]-'0');
				ret.a=(char)((sum%10)+48)+ret.a;
				sum=sum/10;
			}
			if(sum!=0){
				ret.a=(char)(sum+48)+ret.a;
			}
			return ret;
	}

	BigInt div(BigInt& b){
		BigInt ret, temp=a[0], rem=a.substr(1,a.length()-1);
		int j=0;
			for(i=0; i<a.size(); i++){
				while(temp < b){
					temp=temp.a+a[0];
					rem=rem.a.substr(1,rem.a.length()-1);
					i++;
				}
				//div / b	
				
				
			}
			return ret;
	}
	
};

int main(){
	BigInt n,m;
	for(int i=0; i<10; i++){
		cin >> n.a >> m.a;
		BigInt c = (n+m);
		cout << c.a << endl;
		}
}
