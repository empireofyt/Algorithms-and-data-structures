#include<stdio.h>
typedef struct student_messages
{
    char students_name[10];
	int number_of_things;
    //int *hold_things_name = (int *)malloc(number_of_things * sizeof(int));
    int hold_things_name[10];
}stu;

 //�ҳ�ÿ��ѧ����Υ����������Υ�����ѧ������Υ��������
void find_things(stu num[],int n,int tname[],int tnum)//����ѧ����Ϣ�Լ�ѧ����Ŀ���Լ��涨Υ��������ƺ���Ŀ
{
	int i = 0,j = 0,k = 0;
	int nstu = 0,nth = 0;
	int count = 0;
	for(i = 0;i < n;i++)
	{
		count = 0;
		for(j = 0;j < num[i].number_of_things;j++)//����������Ʒ
		{
			for(k = 0;k < tnum ;k++)//Υ����
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
    for(i=0;i<things_number;i++)//����Υ����Ʒ����
        scanf("%d",&things_name[i]);
    stu num[students_number];//��ʼ��һ���ṹ�壬��ʾ����ѧ������Ϣ
    for(i = 0,j = 0;i < students_number;i++)
    {
        scanf("%s",&num[i].students_name);//����ѧ��������
        scanf("%d",&num[i].number_of_things);//����ѧ����������Ʒ��Ŀ
        for(j=0;j<num[i].number_of_things;j++)
            scanf("%d",&num[i].hold_things_name[j]);//�����ĸ�����Ʒ�ı��
    }
    find_things(num,students_number,things_name,things_number);
    //free(things_name);
    return 0;
}
