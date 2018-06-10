#include<stdio.h>
int main(void){
    int c1,c2,s,m,h;
    scanf("%d %d",&c1,&c2);
    m = c2-c1;
    if((double)m/100-m/100<0.5)
        s=m/100;
    else s=m/100+1;
    h=s/3600;
    m=s/60-h*60;
    s=s-h*3600-m*60;
    printf("%2d:%2d:%2d",h,m,s);
    return 0;
}
