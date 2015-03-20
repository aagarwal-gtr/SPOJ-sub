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
int main()
{
	int i, k, t, n, sum, m[1000], f[1000];
	cin>>t;
	for(i=0; i<t; i++){
		cin>>n;
		for(k=0; k<n; k++)
			cin>>m[k];
		for(k=0; k<n; k++)
			cin>>f[k];
		sort(m, m+n);
		sort(f, f+n);
		sum=0;
		for(k=0; k<n; k++)
			m[k]*=f[k];
		for(k=0; k<n; k++)
			sum+=m[k];
		cout<<sum<<endl;
	}
	return 0;
}