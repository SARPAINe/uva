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



int n,position[30],taken[30],tc,sz;
char s[30];
string ss;
void perm(int start)
{
    if((int)ss.size()==n)
    {
        for(int i=0;i<n;i++)
            cout<<ss[i];
        cout<<endl;
        return;
    }
    for(int i=start;i<sz;i++)
    {
        //cout<<"taken:"<<i<<": "<<taken[i]<<endl;
        if(taken[i]==0 )
        {
            taken[i]=1;
            ss.push_back(s[i]);
            perm(i+1);
            taken[i]=0;
            ss.pop_back();
        }
        while(s[i]==s[i+1])i++;
    }

}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);*/

   while(scanf("%s %d",&s,&n)==2)
   {
       sz=strlen(s);
       sort(s,s+sz);
       clr(taken);
       clr(position);
       perm(0);
   }

    return 0;
}





