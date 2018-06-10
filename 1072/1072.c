#include<stdio.h>
typedef struct student_messages
{
    char students_name[10];
	int number_of_things;
    //int *hold_things_name = (int *)malloc(number_of_things * sizeof(int));
    int hold_things_name[10];
}stu;

 //找出每个学生的违禁物，并输出带违禁物的学生数和违禁物总数
void find_things(stu num[],int n,int tname[],int tnum)//传入学生信息以及学生数目，以及规定违禁物的名称和数目
{
	int i = 0,j = 0,k = 0;
	int nstu = 0,nth = 0;
	int count = 0;
	for(i = 0;i < n;i++)
	{
		count = 0;
		for(j = 0;j < num[i].number_of_things;j++)//人所带的物品
		{
			for(k = 0;k < tnum ;k++)//违禁物
			{
				if(num[i].hold_things_name[j] == tname[k] && count == 0)
				{
					printf("%s: %d",num[i].students_name,num[i].hold_things_name[j]);
					nth++;
					count++;
					break;
				}
				else if(num[i].hold_things_name[j] == tname[k] && count != 0)
				{
					printf(" %d",num[i].hold_things_name[j]);
					count++;
					nth++;
					break;
				}
			}
		}
		if(count!=0)
		{
			nstu++;
		}
		printf("\n");
	}
	printf("%d %d\n",nstu,nth);
}
int main(void)
{
    int students_number,things_number,i,j;
    scanf("%d%d",&students_number,&things_number);
    int things_name[things_number];
    //int *things_name = (int *)malloc(things_number * sizeof(int));
    for(i=0;i<things_number;i++)//输入违禁物品名称
        scanf("%d",&things_name[i]);
    stu num[students_number];//初始化一个结构体，表示所有学生的信息
    for(i = 0,j = 0;i < students_number;i++)
    {
        scanf("%s",&num[i].students_name);//输入学生的名字
        scanf("%d",&num[i].number_of_things);//输入学生所带的物品数目
        for(j=0;j<num[i].number_of_things;j++)
            scanf("%d",&num[i].hold_things_name[j]);//所带的各项物品的编号
    }
    find_things(num,students_number,things_name,things_number);
    //free(things_name);
    return 0;
}
