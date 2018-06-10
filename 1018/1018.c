#include<stdio.h>
int main(void)
{
    int n,i=0,wina=0,pin=0,winb=0;
    int a1=0,a2=0,a3=0;
    int b1=0,b2=0,b3=0;
    scanf("%d",&n);
    getchar();
    char num[n][2];
    for(i=0;i<n;i++){
        scanf("%c %c",&num[i][0],&num[i][1]);
        getchar();
    }
    //for(i=0;i<n;i++){
      //  printf("%c %c\n",num[i][0],num[i][1]);
    //}
    for(i=0;i<n;i++){
        if((num[i][0]=='C'&&num[i][1]=='J')||(num[i][0]=='J'&&num[i][1]=='B')||(num[i][0]=='B'&&num[i][1]=='C'))
           {
               wina++;
            if(num[i][0]=='B')
                a1++;
            else if(num[i][0]=='C')
                a2++;
                else
                    a3++;}
        else if((num[i][0]=='C'&&num[i][1]=='C')||(num[i][0]=='J'&&num[i][1]=='J')||(num[i][0]=='B'&&num[i][1]=='B'))
            pin++;
        else{
            winb++;
            if(num[i][1]=='B')
            b1++;
                else if(num[i][0]=='C')
                b2++;
                    else
                    b3++;
    }}
    printf("%d %d %d\n",wina,pin,winb);
    printf("%d %d %d\n",winb,pin,wina);
    if((a2>a1)&&(a2>a3))
        printf("C ");
        else if((a3>a1)&&(a3>a2))
            printf("J ");
        else
        printf("B ");
    if((b2>b1)&&(b2>b3))
        printf("C");
        else if((b3>b1)&&(b3>b2))
            printf("J");
        else
        printf("B");
    return 0;
}
