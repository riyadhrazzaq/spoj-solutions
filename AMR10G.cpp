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

int main(){
	
	int n, k, arr[20000], t;
	scanf("%d", &t);
	while(t--){
		scanf("%d%d", &n, &k);
		for(int i=0;i<n;i++)
			scanf("%d", &arr[i]);
		sort(arr, arr+n);
		int first = 0;
		int next = first + k - 1;
		int diff = arr[next] - arr[first];
		while(next < n){
			diff = min(arr[next] - arr[first], diff);
			first++;
			next = first + k - 1;
		}
		printf("%d\n", diff);
	}
	
	return 0;
}
