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
int arr[101], dp[101][101];
int csum(int a, int b)
{
	int sum=0;
	for(int i=a; i<b+1; i++){
		sum=sum+arr[i];
		sum%=100;
	}
	return sum;
}
int best(int a, int b)
{
	if(dp[a][b]!=-1)
		return dp[a][b];
	if(a==b)
		return 0;
	int smk=dp[a][b];
	for(int k=a; k+1<=b; k++){
		int temp=best(a,k)+best(k+1,b)+csum(a,k)*csum(k+1,b);
		if(smk==-1||temp<smk)
			smk=temp;
	}
	dp[a][b]=smk;
	return smk;
}
int main()
{
	int n;
	while(cin>>n){
		int i;
		for(i=1; i<n+1; i++)
			cin>>arr[i];
		memset(dp, -1, sizeof dp);
		cout<<best(1, n)<<endl;
	}
	return 0;
}