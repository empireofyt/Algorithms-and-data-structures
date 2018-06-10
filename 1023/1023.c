#include<stdio.h>
int main(void)
{
    int i,j;
    int n[10];
    for(i=0;i<10;i++){
        scanf("%d",&n[i]);
    }
    //for(i=0;i<10;i++)
        //printf("%d",n[i]);
    for(i=1;(i<10)&&(n[i]==0);i++){}
    printf("%d",i);
    for(j=0;j<n[0];j++)
    {
        printf("0");
    }
    for(j=0;j<n[i]-1;j++){
        printf("%d",i);
    }
    i++;
    for(;i<10;i++){
        for(j=0;j<n[i];j++){
            printf("%d",i);
        }
    }
    return 0;
}
