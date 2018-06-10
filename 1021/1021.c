#include<stdio.h>
int main(void)
{
    int n,i;
    int a[10]={0};
    long lastn,changedn;
    scanf("%d",&n);
    for(i=0;n!=0;i++){
        lastn=n%10;
        a[lastn]++;
        n/=10;
    }
    for(i=0;i<10;i++){
        if(a[i]!=0)
            printf("%d:%d\n",i,a[i]);
        }
    return 0;
}
