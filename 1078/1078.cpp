#include<iostream>
#include<cstdio> 
#define M 1000+10
using namespace std;

//��������ѹ�������ַ��� 
void yasuo()
{
	char str[M];
	gets(str);
	getchar();
	int i=0;
	int j=0;
	while(str[i]!='\0')
	{ 
		j=i+1;
		while(str[j]==str[i])
			j++;
		if(j-i>1){
			printf("%d%c",(j-i),str[i]);
		}
		else
		{
			printf("%c",str[i]);
		} 
		i=j; 		
	}
}


//����������ѹ����ַ��� 
void jieya()
{
	char str[M];
	gets(str);
	int i=0;
	int j=0;
	while(str[i]!='\0')
	{
		if(str[i]>='0'&&str[i]<='9')
		{
			if(str[i+1]>='0'&&str[i+1]<='9')
			{
				if(str[i+2]>='0'&&str[i+2]<='9')
				{
					if(str[i+3]>='0'&&str[i+3]<='9')
					{
						for(j=0;j<((str[i]-'0')*1000+(str[i+1]-'0')*100+(str[i+2]-'0')*10+str[i+3]-'0');j++)
						{
							printf("%c",str[i+4]);	
						}
						i+=5;
					}
					else
					{
						for(j=0;j<((str[i]-'0')*100+(str[i+1]-'0')*10+str[i+2]-'0');j++)
						{
							printf("%c",str[i+3]);	
						}
						i+=4;
					}
				
				}
				else
				{
					for(j=0;j<((str[i]-'0')*10+(str[i+1]-'0'));j++)
					{
						printf("%c",str[i+2]);	
					}
					i+=3;
				}
				
				
			}
			else
			{
				for(j=0;j<str[i]-'0';j++)
				{
					printf("%c",str[i+1]);
				}
				i+=2;
			}
	
		}//j������¼�ж��ٸ��ظ���Ԫ�أ���ͨ���ڲ�ѭ����� 
		else
		{
			printf("%c",str[i]);
			i++;
		}
				
	}
}
int main()
{
	char s;
	scanf("%c ",&s);
	if(s=='C')
		yasuo();
	else if(s=='D')
		jieya();
	return 0;
}
