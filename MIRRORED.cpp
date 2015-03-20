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
	string a;
    cout<<"Ready\n";
	while(getline(cin,a)){
	   if((a[0]==' ') && (a[1]==' '))
	   break;	 
	   if((a[0]=='q')&&(a[1]=='p')||(a[0]=='b')&&(a[1]=='d')||(a[0]=='d')&&(a[1]=='b')||(a[0]=='p')&&(a[1]=='q'))
	   	  cout<<"Mirrored pair\n";
	   else
	      cout<<"Ordinary pair\n";
	}
	return 0;
}
