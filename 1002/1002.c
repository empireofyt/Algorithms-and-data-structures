#include<stdio.h>
int main(void)
{
    char n[100];
    int a[10];
    scanf("%s",n);
    int i=0,j=0,sum=0,t=0;
    char pinyin[][10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    for(i=0;n[i]!='\0';i++){
        sum+=(n[i]-48);
        }
    //printf("%d  %dAA\n",(n[i]-48),sum);
    i=0;
    while(sum!=0){
        a[i]=sum%10;
        sum/=10;
        //printf("%d %dBB\n",a[i],sum);
        i++;
    }
    //printf("%dAA",i);
    //for(j=0;j<i;j++)
        //printf("%d\n",a[j]);
    printf("%s",pinyin[a[i-1]]);
    for(t=i-2;t>=0;t--){
        printf(" %s",pinyin[a[t]]);
    }
    return 0;
}
