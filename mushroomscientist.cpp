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
        int s, a, b, c;
        cin>>s>>a>>b>>c;
        double x, y, z;        
        x=(double)a*s/(a+b+c);
        y=(double)b*s/(a+b+c);
        z=(double)c*s/(a+b+c);
        if(a+b+c==0)
                cout<<"0.0 0.0 0.0";
        else
                printf("%.18lf %.18lf %.18lf ", x, y, z);
}