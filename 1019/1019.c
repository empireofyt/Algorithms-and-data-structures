#include<stdio.h>
int paixu(int *num);//paixu
int main(void)
{
    int n,num[4],i=0,j=0,n1=0,n2=0,m;
    int num1[4];
    scanf("%d",&n);
    m=n;
    for(i=3;i>=0;i--){
        num[i]=m%10;
        m/=10;
    }
    if((num[0]==num[1])&&(num[1]==num[2])&&(num[2]==num[3])){
        printf("%4d - %4d = 0000",n,n);
        goto loop;
    }
    for(i=0;n!=6174;i++){
        paixu(*num);
        n1=num[0]*1000+num[1]*100+num[2]*10+num[3];
        n2=num[3]*1000+num[2]*100+num[2]*10+num[0];
        n=n1-n2;
        printf("%4d - %4d == %4d",n1,n2,n);
        for(j=3;j>=0&&n!=6174;j--){
            num[j]=n%10;
            n/=10;
        }
    }
    loop:return 0;
}
int paixu(int *num)
{
    int a,b,temp;
    for(a=0;a<3;a++){
        for(b=a+1;b<4;b++){ /*注意循环的上下限*/
        if(num[a]<=num[b]) {
            temp=num[a];
            num[a]=num[b];
            num[b]=temp;
            }
        }
    }
    return 0;
}
