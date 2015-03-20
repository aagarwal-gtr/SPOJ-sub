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
	int t, key, tmp, i;
	char str[100001];
	cin>>t;
	for(int i=0; i<t; i++){
	    cin>>key;
		scanf(" %s",str);
		if(key<26){
			for(i=0; str[i]!='\0'; i++){
				tmp=str[i];
				if(tmp>=65&&tmp<=90){
					tmp-=65;
					tmp=(tmp+key)%26;
					tmp+=65;
				}else if(tmp>=97&&tmp<=122){
					tmp-=97;
					tmp=(tmp+key)%26;
					tmp+=97;
				}else{
					tmp=32;
				}
				str[i]=tmp;
			}
		}
		else{
			key-=26;
			for(i=0; str[i]!='\0'; i++){
				tmp=str[i];
				if(tmp>=65&&tmp<=90){
					tmp-=65;
					tmp=(tmp+key)%26;
					tmp+=97;
				}else if(tmp>=97&&tmp<=122){
					tmp-=97;
					tmp=(tmp+key)%26;
					tmp+=65;
				}else{
					tmp=32;
				}
				str[i]=tmp;
			}
		}
		printf("%s\n", str);
    }
}