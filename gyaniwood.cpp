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
{	lli m , n , i, j, prod,l1,h1,l2,h2,x,y,prodm;
	cin>>m>>n;
	prodm = 1;
	lli arr[m][n];
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
			cin>>arr[i][j];
	for(i=0;i<m;i++){
		for(j=0;j<n-1;j++){
            l1=1; h1=1; l2=1; h2=1;
			if(arr[i][j]==arr[i][j+1]){
				l1=2;
				h1=1;
				h2=1;
				l2=1;
				x=i;
				y =j;
				while(arr[x][y]==arr[x][y+1]&&x<m&&y+1<n){
					l1++;
					y++;
				}
				x=i;y=j;
				while(arr[x][y]==arr[x+1][y]&&x+1<m){
					h1++;
					x = x+1;
				}
				x=i;y=j;
				while(arr[x][y+l1-1]==arr[x+1][y+l1-1]&&x<m){
					x++;
					h2++;
				}
				x=i;y=j;
				while(arr[x+h1-1][y]==arr[x+h1-1][y+1]&&y+1<n){
					h2++;
					y++;
				}
				x = min(l1,l2);
				if(l2==1)
					
				y = min(h2,h1);
				prod=x*y;
				if(prod>prodm){
					prodm = prod;
				}
			}

		}
	}
	cout<<prodm<<endl;		


}
