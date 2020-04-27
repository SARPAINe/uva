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

int y[12]= {31,28,31,30,31,30,31,31,30,31,30,31};
int ly[12]= {31,29,31,30,31,30,31,31,30,31,30,31};
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
int find(int x,int ar[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(ar[i]==x)
            break;
    }
    return i;
}

int main()
{
    /*freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);*/
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);*/
    int n,m;
    int con[20][3];
    while(scanf("%d%d",&n,&m)&& (n||m))
    {
        for(int i=0; i<m; i++)
        {
            scanf("%d%d%d",&con[i][0],&con[i][1],&con[i][2]);
        }
        int ar[n],ans=0;
        for(int i=0; i<n; i++)
        {
            ar[i]=i;
        }
        do
        {
            bool sat=true;

            for(int i=0; i<m; i++)
            {
                int pos1=find(con[i][0],ar,n);
                int pos2=find(con[i][1],ar,n);
                //cout<<pos1<<" "<<pos2<<endl;
                if(con[i][2]>0)
                {
                    if(abs(pos1-pos2) >con[i][2])
                    {
                        sat=false;
                        break;
                    }
                }
                 if(con[i][2]<0)
                {
                    if(abs(pos1-pos2) <-con[i][2])
                    {
                        sat=false;
                        break;
                    }
                }
            }
            if(sat)
                ans++;
        }
        while (next_permutation(ar, ar + n));
        printf("%d\n",ans);
    }
    return 0;

}




