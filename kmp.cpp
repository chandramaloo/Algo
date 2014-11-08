#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int main()
{
	string p,t;
	cin >> p >> t;
	if(t.size()<p.size()){
		cout << "Match not found" << endl;
		exit(0);
	}
	int q[p.size()];
	q[0]=0;
	for(int i=0; i<p.size()-1; i++){
		int temp=i;
		for(int k=0; 1==1; k++){
			if(p[q[temp]]==p[i+1]){
				q[i+1]= q[temp]+1; 
				break;
			}
			else{
				temp=q[temp]-1;
				if(temp<0){
					q[i+1]=0;
					break;
				}
			}
		}
	}
/*	for(int i=0; i<p.size(); i++){
		cout << q[i] ;
	}
	cout << endl;
*/	bool flag=true;
	for(int i=0; i<=(t.size()-p.size()) && flag; i++){
		for(int j=0; j<p.size() && flag; j++){
			if( p[j]==t[i+j] ){
				if(j==p.size()-1) flag=false; //jperfect match
				continue;
			}
			else {
				if(j!=0){
					i=i+j-q[j-1];
					j=q[j-1]-1;
					continue;
				}
				else
					break;
			}	
		}
	}
	if(flag)
		cout << "Match not found" << endl;
	else
		cout << "Match found" << endl;
}
