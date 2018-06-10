#include<stdio.h>
int main()
{
    int i=0,j=0,n=0,b=0;
    scanf("%d",&n);
    int c=0,count=0;
    int ss[100];
    if(n>1){
        ss[0]=2;
        for(i=3;i<=n;i++){
            if(i%2!=0){
                for(j=2;j<i;j++){
                    if(i%j==0)
                        b++;
                    //break;
                }
                if(b==0){
                    c++;
                    ss[c]=i;
                }
                b=0;
            //printf("%dBB  ",c);
            }
        }
        //printf("%dAA",c);
        for(i=1;i<c+1;i++){
            if(ss[i]-ss[i-1]==2)
                count++;
        }
    }
    printf("%d",count);
    return 0;
}
