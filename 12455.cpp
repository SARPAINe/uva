//#include<bits/stdc++.h>
//cntrl+shift+c to comment out and x to reverse
#include<cstdio>
#include<cmath>
#include<cctype>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<vector>
#include<list>
#include<set>
#include<utility>
#include<map>
#include<queue>
#include<deque>
#include<stack>
#include <iterator> //iterators
#include<stdio.h>
#include<limits.h>


#define PI acos(-1)
#define INF 1e18
#define clr(a) memset(a,0,sizeof a)
#define fil(a) memset(a,1,sizeof a)

using namespace std;

typedef long long int lli;
typedef list<int> li;
typedef pair<int,int>pii;

int y[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int ly[12]={31,29,31,30,31,30,31,31,30,31,30,31};
double distance(int a,int b)
{
    double c,d,dis;
   c=pow((double)a,2);
   d=pow((double)b,2);
   dis=sqrt(c+d);
   return dis;
}

string ssort(string a)
{
    sort(a.begin(),a.end());
    return a;
}

bool cmp(int arr1,int arr2)
{
    return arr1>arr2;
}
int sx(int ar[])
{
    return sizeof ar;
}

int main()
{
    /*freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);*/
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);*/
    int t;
    scanf("%d",&t);
    while(t--)
    {

        int n,p,sum,fnd=0;
        scanf("%d",&n);
        scanf("%d",&p);
        int ar[p];

        for(int i=0;i<p;i++)
        {
            scanf("%d",&ar[i]);
        }


        for(int i=0;i<(1<<p);i++)
        {
            sum=0;
             for(int j=0;j<p;j++)
             {
                 if(i&(1<<j))
                    sum+=ar[j];
             }
             if(sum==n)
             {
                 fnd=1;
                 break;
             }

        }
        if(fnd)
            printf("YES\n");
        else
            printf("NO\n");

    }
	return 0;

}




