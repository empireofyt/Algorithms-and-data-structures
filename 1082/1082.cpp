#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#define N 10000
using namespace std;


int main()
{
    int n;
    cin>>n;
    int num[N][3];
    for(int i=0;i<n;i++)
    {
        cin>>num[i][0]>>num[i][1]>>num[i][2];
    }
    double min = sqrt(num[0][1]*num[0][1]+num[0][2]*num[0][2]),max = sqrt(num[0][1]*num[0][1]+num[0][2]*num[0][2]);
    int maxn=0,minn=0;
    for(int i=1;i<n;i++)
    {
        double sq=sqrt(num[i][1]*num[i][1]+num[i][2]*num[i][2]);
        if(sq>max)
        {
            max=sq;
            maxn=i;
        }
        if(sq<min)
        {
            min=sq;
            minn=i;
        }
    }
    printf("%04d %04d",num[minn][0],num[maxn][0]);
    return 0;
}
