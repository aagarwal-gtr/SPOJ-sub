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
        string str;
        cin>>str;
        lli n=0, n1=0;
        for(lli i=0; i+4<str.length(); i++){
            if(str.substr(i, 5)=="heavy")
                n++;
            if(str.substr(i, 5)=="metal")
                n1+=n;
        }
        cout<<n1<<endl;
        return 0;
}