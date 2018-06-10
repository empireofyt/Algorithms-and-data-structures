#include<stdio.h>
int main(void){
    int i,n,sum1=0,sum=0;
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++){
        sum1 += num[i];
    }
    sum = (11 * sum1)*(n - 1);
    printf("%d",sum);
    return 0;
}
