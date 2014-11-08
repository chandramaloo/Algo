#include<iostream>
#include<cmath>
#include<vector>
#include<climits>
using namespace std;

int main(){
	int N;
	cin >> N;
	while(N!=0){
		int n,m;
		int temp;
		vector<vector <int> > mat;
		cin >> n >> m;
		for(int i=0; i<n; i++){
			vector<int> tv;
			for(int j=0; j<m; j++){
				cin >> temp;
				tv.push_back(temp);
			}
			mat.push_back(tv);
		}
		int result=-100;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(n<=m){
					for(int k=i+1; k<n-j; k++){
						int suml=0;
						for(int l=i; l<=k; l++){
							if(2*l==(i+k)){
								suml+=mat[l][j+l-i];
								continue;
							}
							suml+=mat[l][j+l-i];
							suml+=mat[l][j+k-l];
						}
						if(suml>result) result=suml;
					}
				}
				else{
					for(int k=j+1; k<m-i; k++){
						int suml=0;
						for(int l=j; l<=k; l++){
							if(2*l==(j+k)){
								suml+=mat[l+i-j][l];
								continue;
							}
							suml+=mat[l+i-j][l];
							suml+=mat[l+i-j][j+k-l];
						}
						if(suml>result) result=suml;
					}
				}
			}
		}
		cout << result << endl;
		N--;
	}
}
