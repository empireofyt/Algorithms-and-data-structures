//结构体的初步使用
#include<stdio.h>
int main(void)
{
    int n,i;
    scanf("%d",&n);
    struct student{
        char name[20];
        char num[20];
        int score;
    }stu[n];
    int max ;
    int min ;
    for(i=0;i<n;i++)
    {
        scanf("%s %s %d",&stu[i].name,&stu[i].num,&stu[i].score);
    }
    max=stu[0].score;
    min=stu[0].score;
    for(i=1;i<n;i++){
        max=stu[i].score>max?stu[i].score:max;
        min=stu[i].score<min?stu[i].score:min;
        //printf("%d\n",min);
    }
    //printf("%d %d",max,min);
    for(i=0;i<n;i++){
        if(max==stu[i].score)
            printf("%s %s\n",&stu[i].name,&stu[i].num);
    }
    for(i=0;i<n;i++){
        if(min==stu[i].score)
            printf("%s %s\n",&stu[i].name,&stu[i].num);
    }
    return 0;
}
