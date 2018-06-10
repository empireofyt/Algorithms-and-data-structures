#include<stdio.h>
int main(void)
{
    int m,n,s,i,j;
    char name[m];
    int num=(m-s)/(n+1)+1,a=1;
    char prize[num];
    scanf("%d %d %d",&m,&n,&s);
    if(m<s){
        printf("Keep going...");
    }
    else{
    for(i=0;i<m;i++){
        scanf("%s",&name[i]);
    }
    printf("%s\n",name[s-1]);
    prize[0]=name[s-1];
    for(i=s+n-1;i<m;i+=n){
        for(j=0;j<num;j++){
            if(name[i]==prize[j]){
                prize[a]=name[i];
                a++;
                break;
            }
            else
                printf("%s\n",name[i]);
        }
    }}
    return 0;
}
