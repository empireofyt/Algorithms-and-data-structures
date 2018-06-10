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
    if(n1 * m2 > n2 * m1) {  //�����������ϡ�����>���¡������������>�ҷ���
        swap(n1, n2);        //�����������������߱��ұߴ��򽻻�λ��
        swap(m1, m2);
    }
    int flag = 0;
    int num = n1 * k / m1 + 1;  //��Ϊ��������ԭ���ķ������������߳�������Ҫ+1
    while(n1 * k < m1 * num && m2 * num < n2 * k){//��num��ʼ�������ǲ������
        if(gcd(num, k) == 1) {
            if(!flag)   flag = true;
            else    printf(" ");
            printf("%d/%d", num, k);
        }
        num++;
    }
    return 0;
}
