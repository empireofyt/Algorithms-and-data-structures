#include<stdio.h>

int GameScore(int pleyer[][4],int K,int T);
int main(int argc,char const *argv[])
{
    int T,K;//T是筹码数，K是游戏次数
    scanf("%d %d",&T,&K);

    int player[K][4];
    int i;
    for(i = 0;i < K;i++)
    {
        scanf("%d %d %d %d",&player[i][0],&player[i][1],&player[i][2],&player[i][3]);
    }
    GameScore(player,K,T);
    return 0;
}

int GameScore(int player[][4],int K,int T)
{
    int i;
    for(i = 0;i < K;i++)
    {
        if(T == 0)
            {
                printf("Game Over.\n");
                break;
            }
            else  if(player[i][2] > T)
            {
                printf("Not enough tokens.  Total = %d.\n",T);

            }
                else if((player[i][0] < player[i][3]) == player[i][1])//player[i][0]<player[i][3]时值为1
                {
                    printf("Win %d!  Total = %d.\n",player[i][2],T + player[i][2]);
                    T += player[i][2];
                }
                    else if(T - player[i][2] >= 0)
                    {
                        printf("Lose %d.  Total = %d.\n",player[i][2], T - player[i][2]);
                        T -= player[i][2];
                    }
    }
    return 0;
}
