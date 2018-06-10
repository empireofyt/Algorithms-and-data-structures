#include<iostream> 
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include"string.h"
#define M 20
using namespace std;

int mima(char str[],int n)
{
  int shuzi=0,zimu=0,fal=0;
  if(6>n)
    printf("Your password is tai duan le.\n");
  else
  {
    for(int i=0;i<n-1;i++)
    {
      if(str[i]>='0'&&str[i]<='9')
        shuzi++;
      else if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
        zimu++;
        else if(str[i]=='.'){
		}
      else 
      {
        printf("Your password is tai luan le.\n");
        return 0;
      }
    }
    if(shuzi==0)
      printf("Your password needs shu zi.\n");
    else if(zimu==0)
      printf("Your password needs zi mu.\n");
    else 
      printf("Your password is wan mei.\n");
  }
  return 0;
}

int main()
{
  int n;
  cin>>n;
  char str[M];
  for(int i=0;i<n;i++)
  {
    scanf("%s",str);
    int num = strlen(str);
	mima(str,num);
  }
  return 0;
}
