#include<stdio.h>
int main(void){
    int i,n,count1=0,count2=0;
    scanf("%d",&n);
    int hq[n][4];
    for(i=0;i<n;i++)
        scanf("%d %d %d %d",&hq[i][0],&hq[i][1],&hq[i][2],&hq[i][3]);
    for(i=0;i<n;i++){
            if(hq[i][0]+hq[i][2]==hq[i][1]&&hq[i][0]+hq[i][2]!=hq[i][3])
               count2++;
            else if(hq[i][0]+hq[i][2]==hq[i][3]&&hq[i][0]+hq[i][2]!=hq[i][1])
               count1++;
    }
    printf("%d %d",count1,count2);
    return 0;
}
