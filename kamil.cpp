#include<bits/stdc++.h>
int main(){std::string s;int i,j,k;for(i=0; i<10; i++){k=1;std::cin>>s;for(j=0; j<s.size(); j++){if(s[j]=='T'||s[j]=='D'||s[j]=='L'||s[j]=='F')k*=2;}printf("%d \n",k);}}
