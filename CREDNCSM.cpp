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
unsigned int noncarrysum(unsigned int x, unsigned int y)
{
	while(z!=0)
    {
        // carry now contains common set bits of x and y
        int carry=x&y; 
        // Sum of bits of x and y where at least one of the bits is not set
        x=x^y;
        // Carry is shifted by one so that adding it to x gives the required sum
        y=carry<<1;
    }
    return x;
}
int main()
{
	cout<<noncarrysum(5625, 8924);
	// unsigned int n;
	// cin>>n;
	// unsigned int a[n];
	// for(unsigned int i=0; i<n; i++)
	// 	cin>>a[n];
	// sort(a, a+n);
	// noncarrysum(a[n-1], a[n]);
	return 0;
}