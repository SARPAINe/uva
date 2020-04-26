//#include<bits/stdc++.h>

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
int dp[1001][31];
int knapSack(int W, int wt[], int val[], int n)
{


    if (n == 0 || W == 0)
        return 0;

    if (wt[n-1] > W)
    {
        dp[n-1][W]=knapSack(W, wt, val, n-1);
        return dp[n-1][W];
    }
    else if(dp[n-1][W]!=-1)
        return dp[n-1][W];
    else
    {
        dp[n-1][W]=max( val[n-1] + knapSack(W-wt[n-1], wt, val, n-1),
                    knapSack(W, wt, val, n-1) );
        return dp[n-1][W];
    }
}

// Driver code
int main()
{
   // freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int tc;
    cin>>tc;
    while(tc--)
    {
        memset(dp,-1,sizeof dp);
        int n,hum,sum=0;
        cin>>n;
        int val[n],wt[n];
        for(int i=0; i<n; i++)
        {
            cin>>val[i]>>wt[i];
        }
        cin>>hum;
        while(hum--)
        {
            int W;
            cin>>W;
            sum+=knapSack(W, wt, val, n);
        }
        if(tc!=0)
            cout<<sum<<endl;
        else
            cout<<sum<<endl;
    }


}


