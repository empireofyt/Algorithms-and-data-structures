#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d\n",&n);
    int num[n],i,j;
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    //printf("rnd");
    int fn[37],m=0,count=0;
    for(i=0;i<n;i++)
    {
        m=0;
        for(j=0;n!=0;j++){
            m+=num[i]%10;
            num[i]/=10;
        }
        fn[m]++;
    }
    for(i=0;i<37;i++){
        if(fn[i]>=2)
        {
            count++;
        }
    }
    printf("%d\n",count);
    for(i=0,j=0;j==0;i++){
        if(fn[i]>=2)
        {
            printf("%d",i);
            j++;
        }
    }
    for(;i<37;i++){
        if(fn[i]>=2)
        {
            printf(" %d",i);
        }
    }
    return 0;
}
