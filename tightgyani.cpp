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
char line[1000001];
lli i, j;
long double a, b, s;
cin>>i;
cin>>line;
cin>>a>>b;
s=0;
for(j=0;j<i;j++){
        if(line[j]=='L'){
                s = s + a;
        }
        else{
                s = s - a;     
        }
        if(fabs(s)>=b){
                cout<<"NO"<<endl;
                break;
        }
}
if(fabs(s)<b){
        cout<<"YES"<<endl;
}
 
}