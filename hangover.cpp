#include <bits/stdc++.h>
using namespace std;

struct Pair{
	float a;
	int b;
	
	Pair(float a, int b){
		this-> a=a;
		this-> b=b;
		
	}
};

vector<Pair> v;

void make(){
	float sum=0;
	for(float i=1;; i++){
		if(sum>5.21) break;
		sum+=1.0/(i+1.0);
		v.push_back(Pair(sum,int(i)));
	}
}

struct comp{
	bool operator()(Pair a, Pair b) const{
		return (a.a <= b.a);
	}
};
int main(){
	float n,a;
	make();
	while(cin >> n && n!=0){
		vector<Pair>::iterator i = upper_bound( v.begin() , v.end() , Pair(n,0) , comp() );
		cout << i->b << " card(s) "<< endl;
	}
}
