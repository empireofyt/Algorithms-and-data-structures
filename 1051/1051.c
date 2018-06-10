#include<stdio.h>
#include<math.h>
int main(void)
{
    double p,r,p1,r1,p2,r2;
    double A,B;
    scanf("%lf %lf %lf %lf",&r1,&p1,&r2,&p2);
    //r1 = 2.3; p1 = 3.5;
    //r2 = 5.2; p2 = 0.4;
    p = p1 + p2;
    r = r1 * r2;
    A = r * cos(p);
    B = r * sin(p);
    if(B > 0)
        {
            printf("%.2lf+%.2lfi",A,B);
        }
    else{
        printf("%.2lf-%.2lfi",A,fabs(B));
    }
   return 0;
}
