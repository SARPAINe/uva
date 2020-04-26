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
int dp[5][7490];
int count( int S[], int n, int W )
{
    if (W == 0)
        return 1;
    if (W < 0)
        return 0;
    if (n <=0 && W >= 1)
        return 0;
    if(dp[n-1][W]==-1)
    {
        dp[n-1][W]=count( S, n - 1, W ) + count( S, n, W-S[n-1] );
        return dp[n-1][W];
    }
    else
        return dp[n-1][W];
}

// Driver program to test above function
int main()
{
    int i, j;
    memset(dp,-1,sizeof dp);
    int arr[] = {1,5,10,25,50};
    //int arr[] = {4,5,8,11,15,18};
    while(scanf("%d",&i)!=EOF)
    {
        int n = 5;
        printf("%d\n", count(arr, n, i));
    }
    return 0;
}



