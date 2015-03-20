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
lli recursor(lli x,lli y, lli f,lli a,lli b,lli c,lli d,lli prod)
{
	lli opp;
	        if(f==1){
	        	if(x==0 && y==0){
	        		return prod*a;
	        	}

	        	else if(x==0 && y==1){
	        		return prod*b;
	        	}

	        	else if(x==1 && y==0){
	        		return prod*c;
	        	}

	        	else{
	        		return prod*d;
	        	}
	        }
			if(x<f && y<f){
				opp=a;
				prod= prod*a;
				recursor(x,y,f/2,a,b,c,d,prod);
			}
			else if(x<f && y>=f){
				opp=b;
				prod = prod*b;
				recursor(x,y-f,f/2,a,b,c,d,prod);
			}
			else if(x>=f && y<f){
				opp=c;
				prod = prod*c;
				recursor(x-f,y,f/2,a,b,c,d,prod);
			}
			else{
				opp=d;
				prod = prod*d;
				recursor(x-f,y-f,f/2,a,b,c,d,prod);
			}
}
int main()
{	lli t,e,a,b,c,d,x,y,z,f;
	cin>>t;
	while(t!=0){
		t--;
		cin>>z;
		cin>>a>>b>>c>>d;
		cin>>x>>y;
		f = max(x,y);
		e = 1;
		while(1){
			 if(e>=f){
			 	break;
			 }
		     e = e*2; }   
			f = e/2;
			cout<<z*recursor(x-1,y-1,f,a,b,c,d,1)<<endl;
	}			
	return 0;
}

