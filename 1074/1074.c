//问题：机制为007400这样时，怎么处理 
#include<stdio.h>
int main()
{
    int a,b,m = 0;
    int k,carry;
    int count = 0;
    int num[20];
    char n[20];
    scanf("%d%d",&a,&b);
    for(k = 0; ;k++)
    {
    	m = n % 10;
    	if(n % 10 == 0)
    		m = 10;
    	carry = (a % 10 + b % 10) / m;//进位
        num[k] = a % 10 + b % 10 - carry * m;//本位
        a = a / 10 + carry; 
		b /= 10;		
    }
    m = 0;
    for(k;k >= 0;k--)
    {
    	if(num[k] != 0)
    		m++;
    	if(m != 0)
    		printf("%d",num[k]);
	}
    return 0;
}
