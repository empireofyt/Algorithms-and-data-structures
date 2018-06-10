#include<stdio.h>
int main(void)
{
    int i=0,j=0,m,n,b=0,c=0;
    scanf("%d %d",&m,&n);
    int ss[n];
    if(n>1){
        ss[0]=2;
        for(i=3;c<=n;i++){
            if(i%2!=0){
            for(j=2;j<i;j++){
                if(i%j==0)
                    b++;
            }
            if(b==0){
                c++;
                ss[c]=i;
            }
            b=0;
            }
        }
    }
    j=0;
    printf("%d",ss[m-1]);
    for(i=m;i<n;i++){
        j++;
        if(j==10){
            printf("\n%d",ss[i]);
            j=0;
        }
        else
            printf(" %d",ss[i]);
    }
    return 0;
}
