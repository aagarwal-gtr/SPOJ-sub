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
#define INF 100000000
using namespace std;
typedef long long int lli;
typedef unsigned int ui;
#define max(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _a : _b; })
#define min(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _b : _a; })
int main()
{
	int n, height[100005];
	while(1) {
		cin>>n; if(!n) break;
		height[0]=-1;
		for(int i=1; i<=n; i++) {
			cin>>height[i];
		}
		height[n+1]=-1;
		 {
		    stack<int>sk;
            sk.push(0);
            for(int i=1; i<=n; i++) {
                while( height[sk.top()] >= height[i] ) {
                    sk.pop();
                }
                left[i] = i - sk.top();
                sk.push(i); 
            }
        }
 
        {
            stack<int>st;
            st.push(n+1);
            for(int i = n; i>0; i--) {
                while(height[st.top()] >= height[i] ) {
                    st.pop();
                }
                right[i] = st.top() - i;
                st.push(i); 
            }
        }

        result = -INF;
 
        for(int i=1; i<=n; i++)
            result = max(result, (left[i] + right[i]-1) * height[i]) ;
        cout<<result<<endl;
 
	}
	return 0;
}