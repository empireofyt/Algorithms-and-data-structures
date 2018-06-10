#include<stdio.h>

int main()
{
	int n,m;
	//输入组数N和满分M，n也是评分的个数，其中第一个是老师的评分，一定合法 
	scanf("%d%d",&n,&m);
	int i,j = 0;
	int count = 0,count1 = 0,count2 = 0;
	double sum1 = 0,ave = 0;
	int score[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&score[i][j]);
		}
	}
	int max,min;
	for(i=0;i<n;i++)
	{
		max = 0;
		min = m;
		for(j=1;j<n;j++)
		{
			if(score[i][j] >= 0 && score [i][j] <= m && score[i][j] > max)
				max = score[i][j];
			if(score[i][j] >= 0 && score [i][j] <= m && score[i][j] < min)
				min = score[i][j];	
		}
		//printf("max=%d,min=%d\n",max,min);
		count1=0,count2=0;
		for(j=1;j<n;j++)
		{
			if(score[i][j] == max&&count1 == 0)
			{
				count1++;
				score[i][j] = m + 10;
			}				
			if(score[i][j] == min&&count2 == 0)
			{
				count2++;
				score[i][j] = -10;
			}			
		}
	}
	count1=0;
	for(i = 0;i < n;i++)
	{
		sum1 = 0;
		count = 0;
		//count1 = 0; 
		for(j = 1;j < n;j++)
		{
			if(score[i][j] >= 0 && score [i][j] <= m)
			{
			
				sum1 += score[i][j];
				count++;
			}
		}
		ave = ((sum1 / count)+ score[i][0]) / 2;
		//printf("\n平均分是：%f",ave);
		/*if(ave-(int)ave>=0.5)
		{
			ave += 1;
		}
		printf("\n计算之后的平均分是：%f",ave);*/
		ave+=0.5;
		count1 ++;
		if(count1 == 1)
		{
			printf("%d",(int)ave);
		}
		else
		{
			printf("\n%d",(int)ave);
		}
		//printf("%.0f\n",ave);
		//count1=0;	
	}
	return 0;
}
