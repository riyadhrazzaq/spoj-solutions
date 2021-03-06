#include<cstdio>
#include<iostream>
#include<string>
#include<cstdlib>
#include<queue>
#include<stack>
#include<utility>
#include<string>
#include<cstring>
#include<set>
#include<cmath>
#include<vector>
#include<fstream>
#include<map>
#include<list>
#include<algorithm>

#define VI vector<int>
#define VF vector<float>
#define VD vector<double>
#define VC vector<char>
#define VVI vector<VI>
#define VVF vector<VF>
#define VVD vector<VD>
#define VVC vector<VC>
#define SI set<int>
#define SF set<float>
#define SD set<double>
#define SC set<char>
#define SSI set<SI>
#define SSF set<SF>
#define SSD set<SD>
#define SSC set<SC>
#define STI stack<int>
#define STF stack<float>
#define STD stack<double>
#define STC stack<char>
#define STSTI stack<STI>
#define STSTF stack<STF>
#define STSTD stack<STD>
#define STSTC stack<STC>

typedef long long int LLD;
typedef unsigned long long int LLU;

using namespace std;

int mat[13][12];

void init(){
	for(int i=1;i<13;i++)
		for(int j=1;j<12;j++)
			mat[i][j] = 0;
	mat[1][1] = 1;
	mat[12][1] = 1;
}

void display(){
	for(int i=1;i<13;i++){
		for(int j=1;j<12;j++)
			printf("%8d", mat[i][j]);
		printf("\n");
	}
	system("pause");
}

int main(){
	
	init();
	
	for(int j=2;j<12;j++){
		for(int i=1;i<j;i++){
			mat[i][j] += mat[i][j-1] * i;
			mat[i+1][j] += mat[i][j-1];
		}
		
		for(int i=1;i<12;i++)
			mat[12][j] += mat[i][j];
		
//		display();
	}
	
	int t, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		printf("%d\n", mat[12][n]);
	}
    return 0;
}
