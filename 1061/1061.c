#include<stdio.h>
int main(void){
    int m,n,i,j;
    scanf("%d %d",&n,&m);
    int score[n],value[m],result[n+1][m];
    for(i = 0;i < m;i++)
    {
        scanf("%d",&value[i]);
    }
    for(j = 0;j < n+1;j++){
        for(i = 0;i < m;i++){
            scanf("%d",&result[j][i]);
        }
    }
    for(j = 0;j < n;j++){
        score[j]=0;
        for(i = 0;i < m;i++)
            if(result[j+1][i] == result[0][i])
                score[j] += value[i];
    }
    for(j = 0;j < n;j++){
        printf("%d\n",score[j]);
    }
    return 0;
}
