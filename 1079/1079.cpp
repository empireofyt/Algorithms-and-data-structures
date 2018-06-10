#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#define M 20
using namespace std;

//回文数的转换
int huiwen(int n)
{
    int huiwen[M];
    int i=0;
    while(n!=0)
    {
        huiwen[i]=n%10;
        n/=10;
        i++;
    }
    i--;
    int j=0;
    n=0;
    while(i>=0)
    {
        n+=huiwen[j]*pow(10,i);
        j++;
        i--;
    }
    return n;

}

//判断是否为回文数
bool phw(int n)
{
    int huiwen[M];
    int i=0;
    while(n!=0)
    {
        huiwen[i]=n%10;
        n/=10;
        i++;
    }
    i--;
    int j=0;
    while(i>=j)
    {
        if(huiwen[i]!=huiwen[j])
            return false;
        i--;
        j++;
    }
    return true;
}

int main()
{
    int num;
    cin>>num;
    for(int i=0;i<10;i++)
    {
        if(phw(num))
        {
            printf("%d is a palindromic number.",num);
            return 0;
        }
        else
        {
            printf("%d + %d = %d\n",num,huiwen(num),huiwen(num)+num);
        }
        num+=huiwen(num);
    }
    printf("Not found in 10 iterations.");
    return 0;
}
