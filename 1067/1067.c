#include<stdio.h>

void judge(char m[],int length)
{
	
}
int main()
{
	char ture[20];
	int n,i;
	scanf("%s%d",ture,&n);
	char mima[20];
	for(i = 0;;i++)
	{
		scanf("%s",mima);
		if(mima[0]=='#'&&mima[1]=='\0') 
			break;
		judge(mima,sizeof(mima));
	}
	return 0;
 } 
