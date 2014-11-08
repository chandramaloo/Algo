#include<stdio.h>

int func(int x, int y){
	bool xev = (x%2==0);
	bool yev = (y%2==0);
	if(xev && yev){
		if(x == y) return 2*x;
		else if(x == y+2) return 2*x-2;
		else return -1;
	} 
	else if(!xev && !yev){
		if(x == y) return 2*x-1;
		else if( x == y+2 ) return 2*x-3;
		else return -1;
	} 
	else return -1;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n][2];
	for(int i=0; i<n; i++)
		a[i][0]=a[i][1]=0;
	for(int i=0; i<n; i++)
		scanf("%d %d",&a[i][0],&a[i][1]);
	for(int i=0; i<n; i++)
		if(func(a[i][0],a[i][1])!=-1)
			printf("%d \n", func(a[i][0],a[i][1]));
		else printf("%s","No Number \n");
}
