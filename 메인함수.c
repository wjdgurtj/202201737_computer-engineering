/*

 ��ǻ�����α׷��� �򰡰���
 �а�:��ǻ�Ͱ��а�
 �й�:202201737
 �̸�:������
 ���� ����: ���������Ȳ

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
#include"code.h"


//����ü ���
struct Person {   // ����ü ����
	char name[5];        // �̸�
	int student_number;  // �й�
	char major[100];    // �а�
};
int main(void)
{
	char  a[10];
	int  b;
	char* strArr[6] = { "����","���","��û","���","����","����" };


	struct Person p1;     // ����ü ���� ����
	
	char buffer[20];    // ������ ���� �� ����� �ӽ� ����

	//���� �����(�޸��忡�� ���� �ҷ�����)
	FILE* fp = fopen("subject.txt", "r");    

	fgets(buffer, sizeof(buffer), fp);    

	printf("%s\n", buffer);    

	fclose(fp);  
	
		
	strcpy(p1.name, "������");
	p1.student_number = 202201737;
	strcpy(p1.major, "��ǻ�Ͱ��а�");

	printf("�̸�: %s\n", p1.name);       // �̸�: ������
	printf("�й�: %d\n", p1.student_number);        // �й�: 202201737
	printf("����: %s\n\n", p1.major);    // �а�: ��ǻ�Ͱ��а�

	front();
	//������ ���,Ȱ�� �� �迭
	printf("'%s',", strArr[0]);
	printf("'%s',", strArr[1]);
	printf("'%s',", strArr[2]);
	printf("'%s',", strArr[3]);
	printf("'%s',", strArr[4]);
	printf("'%s',", strArr[5]);
	//�Լ����
	last();

	start: //�߸� �Է������� ó������ ���ƿ������ؼ� start:�� ���
	while (1)//���� if�� ���°ͺ��� while 
	{
		printf("������ ������ : \n");
		scanf("%s", &a);
		if (strcmp(a, "����") == 0)
		{
			printf("������������ ������(1~4) : \n");
			scanf("%d", &b);
			switch (b)
			{
			case 1:
				printf("[%s]������[%d]��������Ȳ�� ���ϴ���[%d]���Դϴ�.", a, b, 8335477);
				return 0;
			case 2:
				printf("[%s]������[%d]��������Ȳ�� ���ϴ���[%d]���Դϴ�.", a, b, 8253506);
				return 0;
			case 3:
				printf("[%s]������[%d]��������Ȳ�� ���ϴ���[%d]���Դϴ�.", a, b, 6007373);
				return 0;
			case 4:
				printf("[%s]������[%d]��������Ȳ�� ���ϴ���[%d]���Դϴ�.", a, b, 687042);
				return 0;
			default:
				printf("�ٽ��Է����ּ���.\n");
			}
		}
		if (strcmp(a, "���") == 0)
		{
			printf("������������ ������(1~4) : \n");
			scanf("%d", &b);
			switch (b)
			{
			case 1:
				printf("[%s]������[%d]��������Ȳ�� ���ϴ���[%d]���Դϴ�.", a, b, 11811396);
				return 0;
			case 2:
				printf("[%s]������[%d]��������Ȳ�� ���ϴ���[%d]���Դϴ�.", a, b, 11691526);
				return 0;
			case 3:
				printf("[%s]������[%d]��������Ȳ�� ���ϴ���[%d]���Դϴ�.", a, b, 8609879);
				return 0;
			case 4:
				printf("[%s]������[%d]��������Ȳ�� ���ϴ���[%d]���Դϴ�.", a, b, 920177);
				return 0;
			default:
				printf("�ٽ��Է����ּ���.\n");
			}
		}
		if (strcmp(a, "��û") == 0)
		{
			printf("������������ ������(1~4) : \n");
			scanf("%d", &b);
			switch (b)
			{
			case 1:
				printf("[%s]������[%d]��������Ȳ�� ���ϴ���[%d]���Դϴ�.", a, b, 3323379);
				return 0;
			case 2:
				printf("[%s]������[%d]��������Ȳ�� ���ϴ���[%d]���Դϴ�.", a, b, 3291744);
				return 0;
			case 3:
				printf("[%s]������[%d]��������Ȳ�� ���ϴ���[%d]���Դϴ�.", a, b, 2563395);
				return 0;
			case 4:
				printf("[%s]������[%d]��������Ȳ�� ���ϴ���[%d]���Դϴ�.", a, b, 397539);
				return 0;
			default:
				printf("�ٽ��Է����ּ���.\n");
			}
		}
		if (strcmp(a, "���") == 0)
		{
			printf("������������ ������(1~4) : \n");
			scanf("%d", &b);
			switch (b)
			{
			case 1:
				printf("[%s]������[%d]��������Ȳ�� ���ϴ���[%d]���Դϴ�.", a, b, 5171749);
				return 0;
			case 2:
				printf("[%s]������[%d]��������Ȳ�� ���ϴ���[%d]���Դϴ�.", a, b, 5117100);
				return 0;
			case 3:
				printf("[%s]������[%d]��������Ȳ�� ���ϴ���[%d]���Դϴ�.", a, b, 3841024);
				return 0;
			case 4:
				printf("[%s]������[%d]��������Ȳ�� ���ϴ���[%d]���Դϴ�.", a, b, 506398);
				return 0;
			default:
				printf("�ٽ��Է����ּ���.\n");
			}
		}
		if (strcmp(a, "����") == 0)
		{
			printf("������������ ������(1~4) : \n");
			scanf("%d", &b);
			switch (b)
			{
			case 1:
				printf("[%s]������[%d]��������Ȳ�� ���ϴ���[%d]���Դϴ�.", a, b, 3244030);
				return 0;
			case 2:
				printf("[%s]������[%d]��������Ȳ�� ���ϴ���[%d]���Դϴ�.", a, b, 3214546);
				return 0;
			case 3:
				printf("[%s]������[%d]��������Ȳ�� ���ϴ���[%d]���Դϴ�.", a, b, 2630519);
				return 0;
			case 4:
				printf("[%s]������[%d]��������Ȳ�� ���ϴ���[%d]���Դϴ�.", a, b, 538586);
				return 0;
			default:
				printf("�ٽ��Է����ּ���.\n");
			}
		}
		if (strcmp(a, "����") == 0)
		{
			printf("������������ ������(1~4) : \n");
			scanf("%d", &b);
			switch (b)
			{
			case 1:
				printf("[%s]������[%d]��������Ȳ�� ���ϴ���[%d]���Դϴ�.", a, b, 589780);
				return 0;
			case 2:
				printf("[%s]������[%d]��������Ȳ�� ���ϴ���[%d]���Դϴ�.", a, b, 583766);
				return 0;
			case 3:
				printf("[%s]������[%d]��������Ȳ�� ���ϴ���[%d]���Դϴ�.", a, b, 434406);
				return 0;
			case 4:
				printf("[%s]������[%d]��������Ȳ�� ���ϴ���[%d]���Դϴ�.", a, b, 55363);
				return 0;
			default:
				printf("�ٽ��Է����ּ���.\n");
			}
		}
		if (strcmp(a, "����") == 0)
		{
			printf("������������ ������(1~4) : \n");
			scanf("%d", &b);
			switch (b)
			{
			case 1:
				printf("[%s]��[%d]��������Ȳ�� ���ϴ���[%d]���Դϴ�.", a, b, 45060270);
				return 0;
			case 2:
				printf("[%s]��[%d]��������Ȳ�� ���ϴ���[%d]���Դϴ�.", a, b, 44608032);
				return 0;
			case 3:
				printf("[%s]��[%d]��������Ȳ�� ���ϴ���[%d]���Դϴ�.", a, b, 33334292);
				return 0;
			case 4:
				printf("[%s]��[%d]��������Ȳ�� ���ϴ���[%d]���Դϴ�.", a, b, 4252150);
				return 0;
			default:
				printf("�ٽ��Է����ּ���.\n");
			}
		}
		else
		{
			printf("�ٽ��Է��ϼ���.\n");
			goto start;
		}
	
	
	} 
	return 0;
}


