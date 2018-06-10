#include<stdio.h>
int main(void){
    int m,n,i,j;
    scanf("%d",&n);
    long messages[n][3];
    for(i=0;i<n;i++){
        scanf("%ld %ld %ld",&messages[i][0],&messages[i][1],&messages[i][2]);
    }
    scanf("%d",&m);
    int search[m];
    for(j=0;j<m;j++){
        scanf("%d",&search[j]);
    }
    for(j=0;j<m;j++){
        for(i=0;i<n;i++){
            if(search[j]==messages[i][1])
                printf("%ld %ld\n",messages[i][0],messages[i][2]);
            }
    }
    return 0;
}
