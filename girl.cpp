#include<stdio.h>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){
	int g, b;
	vector<int> a;
	while(scanf("%d %d",&g, &b)){
		if(g==-1) break;
		else if(g==0) a.push_back(b);
		else if(b==0) a.push_back(g);
		else if ((g-b) < 0) a.push_back(int(ceil(b/(g+1.0))));
		else a.push_back((int)ceil(g/(b+1.0)));
	}
	for(vector<int>::iterator p=a.begin(); p!=a.end(); p++)
		printf("%d \n",*p);
}
