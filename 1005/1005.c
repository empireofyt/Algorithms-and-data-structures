#include<stdio.h>

void findnum(int num1[],int n)
{
    int i=0,j=0;
    int all[100];
    int num2[n];
    for(i=0;i<n;i++)
    {
        num2[i]=num1[i];//������������
    }
    //�������г��ֵ�����
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
    int k=j;//k���ǳ��ֹ���������Ŀ
    int count = 0;
    //��������������ֹ��������жԱȣ��ҳ��ؼ�������δ������all�����е���
    //�����ֵ�����Ϊ0
    for(i=0;i<n;i++)
    {
        for(j=0;j<k;j++)
        {
            if(num2[i]==all[j])
            {
                count ++;
                num2[i]=0;
                break;//���ҵ���ͬ������������ֵΪ0
            }
        }
    }
    int guanjianshu[n-count];
    j=0;
    //�����еĹؼ������һ������,(n-count)���ǹؼ����ĸ���
    for(i=0;i<n-count;i++)
    {
        if(num2[i]!=0)
        {
            guanjianshu[j]=num2[i];
            j++;
        }
    }
    //����С�����˳����������ؼ���
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
