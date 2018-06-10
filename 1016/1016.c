#include<stdio.h>
#include<math.h>
int main(void)
{
    int a,b;
    int da,db,pa=0,pb=0,i,j;
    scanf("%d %d %d %d",&a,&da,&b,&db);
    for(i=0,j=0;a!=0;i++){
        if(a%10==da){
            pa+=(a%10)*pow(10,j);
            j++;
        }
        //printf("%dPA  ",pa);
        a/=10;
        //printf("%dA  ",a);
    }
    for(i=0,j=0;b!=0;i++){
        if(b%10==db){
            pb+=(b%10)*pow(10,j);
            j++;
        }
        //printf("%dPB  ",pb);
        b/=10;
        //printf("%dB  ",b);
    }
    printf("%d",pa+pb);
    return 0;
}
