#include<stdio.h>
int main(void)
{
    int t,n;
    int m;
    scanf("%d",&t);
    long int a[t][3] ;
    for(n = 0;n < t;n++){
        scanf("%ld %ld %ld",&a[n][0],&a[n][1],&a[n][2]);
        }
    for(m = 1;m <= t;m++){
        printf("Case #%d: ",m);
        if(a[m - 1][0] + a[m - 1][1] > a[m - 1][2])
            printf("true\n");
        else
            printf("false\n");
    }
    return 0;
}
