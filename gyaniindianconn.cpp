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
{       lli t,n,k,i,j,e;
        cin>>t;
        while(t!=0){
                t--;
                cin>>n;
                cin>>e;
                k = pow(2,n-1);
                lli arr[k][n];
                for(i=0;i<k;i++){
                        for(j=0;j<n;j++){
                                arr[k][n]=7;
                        }
                }
                arr[0][0]=0;
                for(j=1;j<n;j++){
                        for(i=0;i<k;i=i+2){
                                if(arr[i/2][j-1]==7){
                                        break;
                                }
                                else{
                                        if(arr[i/2][j-1]==0){
                                                arr[i][j]=0;
                                                arr[i+1][j]=1;
                                        }
                                        else{
                                                arr[i][j]=1;
                                                arr[i+1][j]=0;
                                        }
                                }
                        }
                }
                if(arr[e-1][n-1]==0){
                        cout<<"Male"<<endl<<endl;
                }
                else{
                        cout<<"Female"<<endl<<endl;
                }
               
        }
        return 0;
}