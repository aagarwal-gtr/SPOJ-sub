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
bool solve(int n, lli k)
{
	if(n==1&&k==1)
		return 1;
	if(k%2==0){
		if(!solve(n-1,k/2))
			return 1;
		else
			return 0;
	}else{
		if(!solve(n-1,(k+1)/2))
			return 0;
		else
			return 1;
;	}
}
int main()
{
	int t, n;
	lli k;
	cin>>t;
	for(int i=0; i<t; i++){
		cin>>n>>k;
		if(solve(n,k))
			cout<<"Male\n\n";
		else
			cout<<"Female\n\n";
	}
	return 0;
}