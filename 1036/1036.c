#include<stdio.h>
int main(void){
    int i,j,m,n;
    char base;
    scanf("%d %c",&n,&base);
    if(n%2!=0)
        m = n/2 + 1;
    else
        m = n /2;
    for(i=0;i<n;i++){
        printf("%c",base);
    }
    for(i=0;i<m-2;i++){
        printf("\n%c",base);
        for(j=0;j<n-2;j++)
            printf(" ");
        printf("%c",base);
    }
    printf("\n");
    for(i=0;i<n;i++)
        printf("%c",base);
    return 0;
}
