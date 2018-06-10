#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
    int n,i;
    scanf("%d",&n);
    int *num = (int*)malloc(n*sizeof(int));
    int *yu = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++){
        yu[i]=num[i]%5;
    }
    int sum0=0,sum1=0,count[5]={0},max4=0;
    double sum3=0;
    for(i=0;i<n;i++){
        switch(yu[i]){
        case 0:

            if(num[i]%2==0&&num[i]!=0){
                sum0+=num[i];
                count[0]++;
            }
            break;
        case 1:
            sum1+=num[i]*pow(-1,count[1]);
            count[1]++;
            break;
        case 2:
            count[2]++;
            break;
        case 3:
            count[3]++;
            sum3+=num[i];
            break;
        case 4:
            max4=max4>num[i]?max4:num[i];
            count[4]++;
            break;
        default:
            break;
        }
    }
    if(count[0]==0)
        printf("N ");
    else
        printf("%d ",sum0);
    count[1]=sum1;
    for(i=1;i<3;i++){
        if(count[i]==0)
           printf("N ");
        else
            printf("%d ",count[i]);
    }
    if(count[3]==0)
        printf("N ");
    else
        printf("%.1lf ",(sum3/count[3]));
    if(count[4]==0)
        printf("N");
    else
        printf("%d",max4);
    free(num);
    return 0;
}
