#include<stdio.h>
#define MAX 1000
int main(void)
{
  int n,count = 0;
  do{
    scanf("%d",&n);
  }while(n > MAX);
  while(n > 1)
  {
    count ++;
    if(n % 2 == 0) {n = n / 2;}
    else {n = (3 * n + 1) / 2;}
    }
  printf("%d\n",count);
  return 0;
  }
