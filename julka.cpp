#include <bits/stdc++.h>
using namespace std;

string div(string c){
	string d="";
	int temp=0, carry=0;
	for(int i=0; i<c.size(); i++){
		if( (int)(c[i]-'0') + carry >1){
			temp=(int)(c[i]-'0')+carry;
			carry=temp%2*10;
			d+=char((temp/2) + 48);
		}
		else{
			carry=(int)(c[i]-'0')*10;
			d+="0";
		}  
	}
	while(d[0]=='0' && d.size()!=1) d=d.substr(1,d.size()-1);
	return d;
}

int main(){
	string a,b,c;
	int i;
	for(int z=0; z<10; z++){
		c="";
		cin >> a >> b;
		int sum=0, carry=0;
		for(i=0; i<b.size(); i++){
			sum=(int)(b[b.size()-1-i]-'0')+(int)(a[a.size()-1-i]-'0')+carry;
			carry=sum/10;
			sum=sum%10;
			c=char(sum+48)+c;
		}
		for(i; i<a.size(); i++){
			sum=(int)(a[a.size()-1-i]-'0')+carry;
			carry=sum/10;
			sum=sum%10;
			c=char(sum + 48)+c;
		}
		if(carry!=0) c=char(carry+48)+c;
		cout <<div(c) << endl;
		
		for(i=b.size(); i<a.size(); i++) b="0"+b;
		c="";
		int diff=0, borrow=false;
		for(i=0; i<b.size(); i++){
			if(!borrow){
				if(b[b.size()-1-i]<=a[a.size()-1-i]){
					c=char((int)(a[a.size()-1-i]-'0')-(int)(b[b.size()-1-i]-'0')+48)+c;
				}
				else{
					c=char( 10+ (int)(a[a.size()-1-i]-'0') - (int)(b[b.size()-1-i]-'0') + 48 )+c;
					borrow=true;
				}
			}
			else if(borrow){
				if(a[a.size()-1-i]=='0'){			
					if(i!=a.size()-1)
						a[a.size()-1-i]='9';
					if(b[b.size()-1-i]<=a[a.size()-1-i]){
						c=char((int)(a[a.size()-1-i]-'0')-(int)(b[b.size()-1-i]-'0')+48)+c;
					}
					else if(b[b.size()-1-i]>a[a.size()-1-i]){
						c=char( 10+ (int)(a[a.size()-1-i]-'0') - (int)(b[b.size()-1-i]-'0') + 48 )+c;
					}
				}
				else{
					a[a.size()-1-i]=char((int)(a[a.size()-1-i]-'0')-1+48);
					if(b[b.size()-1-i]<=a[a.size()-1-i]){
						borrow=false;
						c=char((int)(a[a.size()-1-i]-'0')-(int)(b[b.size()-1-i]-'0')+48)+c;
					}
					else if(b[b.size()-1-i]>a[a.size()-1-i]){
						borrow=true;
						c=char( 10+ (int)(a[a.size()-1-i]-'0') - (int)(b[b.size()-1-i]-'0') + 48 )+c;
					}
				}
			}	
		}
		while(c[0]=='0' && c.size()!=1) c=c.substr(1,c.size()-1);
		cout << div(c) << endl;
	}
	
}
