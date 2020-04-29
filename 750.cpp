
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

int tc,a,b,row_val[8],num;

bool place(int r,int c)
{
    for(int prev=0; prev<c; prev++)

        if(row_val[prev]==r||(abs(row_val[prev]-r)==abs(prev-c)))
            return false;

    return true;
}
void back_track(int c)
{
    if(c==8 && row_val[b]==a)
    {
        printf("%2d %d", ++num, row_val[0]+1 );
        for (int j = 1; j <8; j++) printf(" %d", row_val[j]+1 );
        printf("\n");
    }
    for(int r=0; r<8; r++)
    {
        if(place(r, c))
        {
            row_val[c]=r;
            back_track(c+1);
        }
    }

}



int main()
{
    /*freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);*/
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);*/

    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d %d",&a,&b);
        a--;
        b--;
        clr(row_val);
        num=0;
        printf("SOLN COLUMN\n");
        printf(" # 1 2 3 4 5 6 7 8\n\n");
        back_track(0);
        if (tc) printf("\n");
    }
    return 0;

}



