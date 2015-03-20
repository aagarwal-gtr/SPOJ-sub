#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
#include <math.h> 
#include <vector>
#include <set>
#include <map> 
#include <string.h>
#include <cstdlib>
#include <limits.h>
#include <tr1/unordered_map>
#include <tr1/unordered_set>
#include <functional>
#include <stack>
#include <queue>
using namespace std;
typedef long long int lli;
typedef unsigned int ui;
#define max(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _a : _b; })
#define min(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _b : _a; })
#define MAX 30000
char strings[MAX][21];
int bit[MAX+1];
tr1::unordered_map<string,int> m;
char cur[21];
int n;
void update(int idx){
	while(idx<=n){
		bit[idx]++;
		idx += (idx & -idx);
	}
}

int cf(int idx){
	int c = 0;
	while(idx>0){
		c += bit[idx];
		idx -= (idx & -idx);
	}
	return c;
}
int main()
{
	int t,i,j;
	for(scanf("%d",&t);t--;){
		m.clear();
		scanf("%d",&n);
		for(i=0;i<=n;i++) bit[i] = 0;
		for(i=0;i<n;i++) scanf("%s",strings[i]);
		for(i=1;i<=n;i++){
			scanf("%s",cur);
			m[cur] = i;
		}
		j = (n*(n-1))/2;
		for(i=0;i<n;i++){
			int p = m[strings[i]];
			j -= cf(p);
			update(p);
		}
		printf("%d\n",j);
	}
	return 0;
}