#include<stdio.h>

void findnum(int num1[],int n)
{
    int i=0,j=0;
    int all[100];
    int num2[n];
    for(i=0;i<n;i++)
    {
        num2[i]=num1[i];//保留给定的数
    }
    //记下所有出现的数字
    for(i=0;i<n;i++)
    {
        while(num1[i]!=0)
        {
        if(num1[i]%2==0)
        {
            num1[i]/=2;
            all[j]=num1[i];
            j++;
        }
        else
        {
            num1[i]=3*num1[i]+1;
            all[j]=num1[i];
            j++;
        }
        }
    }
    int k=j;//k就是出现过的数的数目
    int count = 0;
    //将给定的数与出现过的数进行对比，找出关键数，即未出现在all数组中的数
    //将出现的数变为0
    for(i=0;i<n;i++)
    {
        for(j=0;j<k;j++)
        {
            if(num2[i]==all[j])
            {
                count ++;
                num2[i]=0;
                break;//若找到相同的数，将他赋值为0
            }
        }
    }
    int guanjianshu[n-count];
    j=0;
    //把所有的关键数组成一个数组,(n-count)就是关键数的个数
    for(i=0;i<n-count;i++)
    {
        if(num2[i]!=0)
        {
            guanjianshu[j]=num2[i];
            j++;
        }
    }
    //按从小到大的顺序依次输出关键数
    for(i=0;i<n-count;i++)
    {
        printf("%d",guanjianshu[i]);
    }
}

void main()
 {
     int m,i=0;
     scanf("%d",&m);
     int num[m];
     for(i=0;i<m;i++)
     {
         scanf("%d",&num[i]);
     }
     findnum(num[m],m);
 }
