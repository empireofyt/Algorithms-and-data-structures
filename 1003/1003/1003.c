#include<stdio.h>
#include<string.h>

void main()
{
	int m, i;
	scanf("%d", &m);
	char str[m][100];
	for (i = 0; i < m; i++)
	{
		scanf("%s", str[i]);
	}
    int j=0;
    int a1=0,a2=0,a3=0;
    for(i=0;i<m;i++)
    {
        for(j=0;str[i][j]!='\0';j++)
        {
            if(str[i][j]!='A'&&str[i][j]!='P'&&str[i][j]!='T')
            {
                printf("no\n");
                break;
            }
            else if(str[i][j]=='P')
            {
                if(str[i][j+1]=='A'&&str[i][j+2]=='T')
                {
                    j+=3;
                    for(j;str[i][j]!='\0';j++)
                    {
                        if(str[i][j]=='A')
                        {
                            printf("yes\n");
                            break;
                        }
                        else
                        {
                            printf("no\n");
                            break;
                        }
                    }
                    break;
                }
                else if(str[i][j+1]=='A'&&str[i][j+1]=='A'&&str[i][j+2]=='T')
                {
                    j+=4;
                    for(j;str[i][j]!='\0';j++)
                    {
                        if(str[i][j]=='A')
                        {
                            printf("yes\n");
                            break;
                        }
                        else
                        {
                            printf("no\n");
                            break;
                        }

                }
            }
            else if()
        }
    }
}
u
