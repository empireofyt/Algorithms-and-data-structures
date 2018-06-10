#include<stdio.h>
#include<math.h>

int main(void){
    int a1,a2,a3,b1,b2,b3;
    int p,a,sum;
    scanf("%d.%d.%d %d.%d.%d",&a1,&a2,&a3,&b1,&b2,&b3);
    p=a1*17*29+a2*29+a3;
    a=b1*17*29+b2*29+b3;
    sum=a-p;
    if(sum<0){
        printf("-");
        sum =- sum;
    }
    printf("%d.%d.%d",sum/(29*17),sum%(29*17)/29,sum%29);
    return 0;
}
