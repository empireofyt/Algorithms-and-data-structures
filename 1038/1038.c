#include<stdio.h>

int main(void)
{
    int n=0,k=0;
    int a[102]={0};
    int i=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        int j=0;
        scanf("%d",&j);
        a[j]++;

    }
    scanf("%d",&k);
    for(i=0; i<k; i++)
    {
        int j1=0;
        scanf("%d",&j1);
        printf("%d",a[j1]);
        (i!=k-1)?printf(" "):printf("\n");
    }
    return 0;
}
