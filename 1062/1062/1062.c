#include <stdio.h>

int gcd(int a, int b){
    int c;
    while(b != 0){
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main() {
    int n1, m1, n2, m2, k;
    scanf("%d/%d %d/%d %d", &n1, &m1, &n2, &m2, &k);
    if(n1 * m2 > n2 * m1) {  //两个分数左上×右下>左下×右上则左分数>右分数
        swap(n1, n2);        //若输入的两个分数左边比右边大，则交换位置
        swap(m1, m2);
    }
    int flag = 0;
    int num = n1 * k / m1 + 1;  //因为不可能是原来的分数，除尽或者除不尽都要+1
    while(n1 * k < m1 * num && m2 * num < n2 * k){//从num开始遍历看是不是最简
        if(gcd(num, k) == 1) {
            if(!flag)   flag = true;
            else    printf(" ");
            printf("%d/%d", num, k);
        }
        num++;
    }
    return 0;
}
