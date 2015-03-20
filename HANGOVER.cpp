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
    float arr[275];
    int i;
    for(i=0;i<275;i++)
    {
        arr[i]=1.0/(2.0+i);
    }
    float t; cin>>t;
    while(t)
    {
        float sum=0;
        for(i=0;i<275;i++)
         {
             sum+=arr[i];
             if(sum>=t)
                break;
        }
        cout<<i+1<<" card(s)\n";
        cin>>t;
    }
    return 0;
}