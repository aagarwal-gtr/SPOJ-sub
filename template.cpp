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
	//int t;
	//cin>>t;
	//while(t--){
		int m;
		cin>>m;
		const int nn=m;
		long long int len[nn]; int d[nn];
		long long int length; int digit;
		for(int i=0; i<m; i++){
			cin>>len[i]>>d[i];
		}
		int place=0;
	    long long int num=0;
	    for(int j=m; j>=0; j--){
	    	digit=d[j];
	    	length=len[j];
	    	for(int k=0; k<length; k++){
	    		num+=digit*pow(10, place); 
	    		place++;
	    	}
	    }
	    cout<<num;
	//}
	return 0;
}