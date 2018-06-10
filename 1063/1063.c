#include<stdio.h>
#include<math.h>
int main(void)
{
    int n,i=0;
    scanf("%d",&n);
    int num[n][3];
    for(i=0;i<n;i++){
        scanf("%d %d",&num[i][0],&num[i][1]);
        num[i][2]=num[i][0]*num[i][0]+num[i][1]*num[i][1];
    }
    float sqr[n];
    for(i=0;i<n;i++){
        sqr[i]=sqrt((float)num[i][2]);
        //printf("%.2f\n",sqr[i]);
    }
    float max;
    max=sqr[0];
    for(i=1;i<n;i++){
        if(max<sqr[i])
            max=sqr[i];
        }
    printf("%.2f",max);
    return 0;
}
