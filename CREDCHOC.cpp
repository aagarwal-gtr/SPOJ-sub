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
	lli n, x, y, d;
	cin>>n>>x>>y;
	const lli n1=n;
	lli A[n1];
	for(lli i=0; i<n; i++){
		cin>>A[i];
	}
	d=y%x;
	if((float)d){ cout<<d<<endl; cout<<"IMPOSSIBLE"; return 0;}
	lli B[n1];
	for(lli j=0; j<n; j++){
		cout<<A[j];
	}
	return 0;
}