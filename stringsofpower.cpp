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
        char str[100000];
        scanf("%s", str);
        lli x=0,y=0;
        for(lli i=0; i<strlen(str); i++)
        {
            if(str[i]=='h'&&str[i+1]=='e'&&str[i+2]=='a'&&str[i+3]=='v'&&str[i+4]=='y'){
                i+=4; x++; }
            if(str[i]=='m'&&str[i+1]=='e'&&str[i+2]=='t'&&str[i+3]=='a'&&str[i+4]=='l'){
                i+=4; y+=x; }
        }
        cout<<y<<endl;
        return 0;
}