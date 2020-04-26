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
bool check(int n, int m) {
	if (n >= 100000)
		return false;

	int c, mask = 0;
	for (int i = 0; i < 5; i++) {
		c = (int) (n / pow(10, i)) % 10;
		if ((mask >> c) % 2)
			return false;
		mask |= 1 << c;
	}
	for (int i = 0; i < 5; i++) {
		c = (int) (m / pow(10, i)) % 10;
		if ((mask >> c) % 2)
			return false;
		mask |= 1 << c;
	}

	return true;
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);*/
    int n,i,j,x,y,k=0;
    while(scanf("%d",&n),n)
    {
        k++;
        if(k>1)
            printf("\n");
        int cnt=0;
        for(i=1234;i<=50000;i++)
        {
            y=i;
            x=i*n;
            if(x/y==n&&check(x,y))
            {
                printf("%0.5d / %0.5d = %d\n",x,y,n);
                cnt++;
            }

        }
        if(cnt==0)
            printf("There are no solutions for %d.\n",n);


    }
	return 0;

}




