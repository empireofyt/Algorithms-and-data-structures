#include<stdio.h>
int main(void)
{
    int m,n,a,b,hui,i,j;
    int count = 0;
    scanf("%d %d %d %d %d",&m,&n,&a,&b,&hui);
    int change[m][n];
    //���������ֵ
    for(i = 0;i < m;i++){
        for(j = 0;j < n;j++){
            scanf("%d",&change[i][j]);
        }
    }
    //�ı��ɫ�����ֵ!
    for(i = 0;i < m;i++){
        for(j = 0;j < n;j++){
            if(change[i][j] >= a&&change[i][j] <= b)
               change[i][j] = hui;
        }
    }
    //����ȷ��ʽ���
    for(i = 0;i < m;i++){
        count = 0;
        for(j = 0;j < n;j++){
            if(count != 0)
            printf(" ");
            if(change[i][j] <= 9)
            printf("00%d",change[i][j]);
            else if(change[i][j] >= 10&&change[i][j] <= 99)
                printf("0%d",change[i][j]);
                else if(change[i][j] >= 100)
                    printf("%d",change[i][j]);
            count++;
        }
        printf("\n");
    }
    return 0;
}
