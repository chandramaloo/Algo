#include<bits/stdc++.h>
using namespace std;

class BigInt{
	public:
	string a;
	
	BigInt(){
		a="";
	}
	
	BigInt operator*(BigInt b){
		int sum=0;
		BigInt ret;
		for(int i=0; i<(this->a.size())+b.a.size()-1; i++){
			if(a.size()>=b.a.size()){
				for(int j=0; j<=i && j<b.a.size(); j++)
				{	
					if(a.size()-i+j>=1)
						sum+= (int)(b.a[b.a.size()-1-j]-'0') * (int)(a[a.size()-1-i+j]-'0') ;
				}
				ret.a=((char)(sum%10+48))+ret.a;
				sum=sum/10;
			}
			else{
				for(int j=0; j<=i && j<a.size(); j++)
				{	
					if(b.a.size()-i+j>=1)
						sum+= (int)(a[a.size()-1-j]-'0') * (int)(b.a[b.a.size()-1-i+j]-'0') ;
				}
				ret.a=(char)((sum%10)+48)+ret.a;
				sum=sum/10;
			}
		}
		if(sum!=0) ret.a=(char)((sum%10)+48)+ret.a;
		return ret;
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
	
	void operator=(string s){
			a=s;
	}
	
	void operator=(int s){
			while(s!=0){
					a=(char)((s%10)+48)+a;
					s=s/10;
			}
	}
};

BigInt fact(int n){
	BigInt ret;
	ret = n;
	if(n==1) return ret;
	else return fact(n-1)*ret;
}

int main(){
	int n;
	cin >> n;
	while(n!=0){
		int i;
		cin >> i;
		cout << fact(i).a << endl;
		n--;
	}
}
