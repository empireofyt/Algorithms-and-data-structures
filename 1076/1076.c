#include<stdio.h>
/*void main()
{
	int n;
	scanf("%d*%c",&n);
	char str[];
	int i,j;
	/*for(i=0;i<n;i++)
	{
		gets(str[i]);
	}*/
	//键入数据 
	for(i=0;i<n;i++)
	{
		for(j=0;j<8;j++)
		{
			//gets(str);
			scanf("%c*%c%c*%c",&str[i]);
			//printf("a");
		}	
	}
	//找出正确的密码
	for(i=0;i<n;i++)
	{
		if(str[i][j]=='A'&&str[i][j+1]=='T')
			{
			//	printf("%d%d a",i,j);
				printf("1");
				break;
			}
			else if(str[i][j]=='B'&&str[i][j+1]=='T')
			{
			//	printf("%d%d b",i,j);
				printf("2");
				break;
			}
			else if(str[i][j]=='C'&&str[i][j+1]=='T')
			{
			//	printf("%d%d c",i,j);
				printf("3");
				break;
			}
			else if(str[i][j]=='D'&&str[i][j+1]=='T')
			{
			//	printf("%d%d d",i,j);
				printf("4");
				break;
			}	
	}	 
 }*/
 
    
int main(void)  
{  
    int n,i;  
    char a,b;  
    scanf("%d%*c",&n);  
   for (i=0;i<n*4;i++)  
    {  
        scanf("%c%*c%c%*c",&a,&b);  
        if (b=='T')  
        {  
            if (a=='A') printf("1");  
            else if (a=='B') printf("2");  
            else if (a=='C') printf("3");  
            else if (a=='D') printf("4");  
        }  
   }  
    return 0;  
} 
 
 
 
 
 
 
 
 
 
 
 
 
  
