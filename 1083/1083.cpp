#include<iostream> 
#include<cstdio>
#include<cstdlib>
#include<cmath>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int *num=(int *)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	int max=fabs(num[0]-1);
	int min=fabs(num[0]-1);
	num[0]=fabs(num[0]-1);
	for(int i=1;i<n;i++)
	{
		num[i]=fabs(num[i]-i-1);
		max=(max>num[i])?max:num[i];//记录差值的最大值和最小值
		min=(min<num[i])?min:num[i];
	}
	while(max>=min)
	{
		int count=0;
		for(int j=0;j<n;j++) 
		{
			if(num[j]==max)
			{
				count++;
			}
		}		
		if(count>1)
			printf("%d %d\n",max,count);
		max--;
	}
	return 0;
}
