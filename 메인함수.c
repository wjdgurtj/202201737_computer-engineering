/*

 컴퓨터프로그래밍 평가과제
 학과:컴퓨터공학과
 학번:202201737
 이름:서정혁
 과제 주제: 백신접종현황

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
#include"code.h"


//구조체 사용
struct Person {   // 구조체 정의
	char name[5];        // 이름
	int student_number;  // 학번
	char major[100];    // 학과
};
int main(void)
{
	char  a[10];
	int  b;
	char* strArr[6] = { "서울","경기","충청","경상","전라","제주" };


	struct Person p1;     // 구조체 변수 선언
	
	char buffer[20];    // 파일을 읽을 때 사용할 임시 공간

	//파일 입출력(메모장에서 파일 불러오기)
	FILE* fp = fopen("subject.txt", "r");    

	fgets(buffer, sizeof(buffer), fp);    

	printf("%s\n", buffer);    

	fclose(fp);  
	
		
	strcpy(p1.name, "서정혁");
	p1.student_number = 202201737;
	strcpy(p1.major, "컴퓨터공학과");

	printf("이름: %s\n", p1.name);       // 이름: 서정혁
	printf("학번: %d\n", p1.student_number);        // 학번: 202201737
	printf("나이: %s\n\n", p1.major);    // 학과: 컴퓨터공학과

	front();
	//포인터 사용,활용 및 배열
	printf("'%s',", strArr[0]);
	printf("'%s',", strArr[1]);
	printf("'%s',", strArr[2]);
	printf("'%s',", strArr[3]);
	printf("'%s',", strArr[4]);
	printf("'%s',", strArr[5]);
	//함수사용
	last();

	start: //잘못 입력했을떄 처음으로 돌아오기위해서 start:를 사용
	while (1)//전부 if로 묶는것보다 while 
	{
		printf("지역을 고르세요 : \n");
		scanf("%s", &a);
		if (strcmp(a, "서울") == 0)
		{
			printf("몇차접종인지 고르세요(1~4) : \n");
			scanf("%d", &b);
			switch (b)
			{
			case 1:
				printf("[%s]지역의[%d]차접종현황은 당일누적[%d]명입니다.", a, b, 8335477);
				return 0;
			case 2:
				printf("[%s]지역의[%d]차접종현황은 당일누적[%d]명입니다.", a, b, 8253506);
				return 0;
			case 3:
				printf("[%s]지역의[%d]차접종현황은 당일누적[%d]명입니다.", a, b, 6007373);
				return 0;
			case 4:
				printf("[%s]지역의[%d]차접종현황은 당일누적[%d]명입니다.", a, b, 687042);
				return 0;
			default:
				printf("다시입력해주세요.\n");
			}
		}
		if (strcmp(a, "경기") == 0)
		{
			printf("몇차접종인지 고르세요(1~4) : \n");
			scanf("%d", &b);
			switch (b)
			{
			case 1:
				printf("[%s]지역의[%d]차접종현황은 당일누적[%d]명입니다.", a, b, 11811396);
				return 0;
			case 2:
				printf("[%s]지역의[%d]차접종현황은 당일누적[%d]명입니다.", a, b, 11691526);
				return 0;
			case 3:
				printf("[%s]지역의[%d]차접종현황은 당일누적[%d]명입니다.", a, b, 8609879);
				return 0;
			case 4:
				printf("[%s]지역의[%d]차접종현황은 당일누적[%d]명입니다.", a, b, 920177);
				return 0;
			default:
				printf("다시입력해주세요.\n");
			}
		}
		if (strcmp(a, "충청") == 0)
		{
			printf("몇차접종인지 고르세요(1~4) : \n");
			scanf("%d", &b);
			switch (b)
			{
			case 1:
				printf("[%s]지역의[%d]차접종현황은 당일누적[%d]명입니다.", a, b, 3323379);
				return 0;
			case 2:
				printf("[%s]지역의[%d]차접종현황은 당일누적[%d]명입니다.", a, b, 3291744);
				return 0;
			case 3:
				printf("[%s]지역의[%d]차접종현황은 당일누적[%d]명입니다.", a, b, 2563395);
				return 0;
			case 4:
				printf("[%s]지역의[%d]차접종현황은 당일누적[%d]명입니다.", a, b, 397539);
				return 0;
			default:
				printf("다시입력해주세요.\n");
			}
		}
		if (strcmp(a, "경상") == 0)
		{
			printf("몇차접종인지 고르세요(1~4) : \n");
			scanf("%d", &b);
			switch (b)
			{
			case 1:
				printf("[%s]지역의[%d]차접종현황은 당일누적[%d]명입니다.", a, b, 5171749);
				return 0;
			case 2:
				printf("[%s]지역의[%d]차접종현황은 당일누적[%d]명입니다.", a, b, 5117100);
				return 0;
			case 3:
				printf("[%s]지역의[%d]차접종현황은 당일누적[%d]명입니다.", a, b, 3841024);
				return 0;
			case 4:
				printf("[%s]지역의[%d]차접종현황은 당일누적[%d]명입니다.", a, b, 506398);
				return 0;
			default:
				printf("다시입력해주세요.\n");
			}
		}
		if (strcmp(a, "전라") == 0)
		{
			printf("몇차접종인지 고르세요(1~4) : \n");
			scanf("%d", &b);
			switch (b)
			{
			case 1:
				printf("[%s]지역의[%d]차접종현황은 당일누적[%d]명입니다.", a, b, 3244030);
				return 0;
			case 2:
				printf("[%s]지역의[%d]차접종현황은 당일누적[%d]명입니다.", a, b, 3214546);
				return 0;
			case 3:
				printf("[%s]지역의[%d]차접종현황은 당일누적[%d]명입니다.", a, b, 2630519);
				return 0;
			case 4:
				printf("[%s]지역의[%d]차접종현황은 당일누적[%d]명입니다.", a, b, 538586);
				return 0;
			default:
				printf("다시입력해주세요.\n");
			}
		}
		if (strcmp(a, "제주") == 0)
		{
			printf("몇차접종인지 고르세요(1~4) : \n");
			scanf("%d", &b);
			switch (b)
			{
			case 1:
				printf("[%s]지역의[%d]차접종현황은 당일누적[%d]명입니다.", a, b, 589780);
				return 0;
			case 2:
				printf("[%s]지역의[%d]차접종현황은 당일누적[%d]명입니다.", a, b, 583766);
				return 0;
			case 3:
				printf("[%s]지역의[%d]차접종현황은 당일누적[%d]명입니다.", a, b, 434406);
				return 0;
			case 4:
				printf("[%s]지역의[%d]차접종현황은 당일누적[%d]명입니다.", a, b, 55363);
				return 0;
			default:
				printf("다시입력해주세요.\n");
			}
		}
		if (strcmp(a, "전국") == 0)
		{
			printf("몇차접종인지 고르세요(1~4) : \n");
			scanf("%d", &b);
			switch (b)
			{
			case 1:
				printf("[%s]의[%d]차접종현황은 당일누적[%d]명입니다.", a, b, 45060270);
				return 0;
			case 2:
				printf("[%s]의[%d]차접종현황은 당일누적[%d]명입니다.", a, b, 44608032);
				return 0;
			case 3:
				printf("[%s]의[%d]차접종현황은 당일누적[%d]명입니다.", a, b, 33334292);
				return 0;
			case 4:
				printf("[%s]의[%d]차접종현황은 당일누적[%d]명입니다.", a, b, 4252150);
				return 0;
			default:
				printf("다시입력해주세요.\n");
			}
		}
		else
		{
			printf("다시입력하세요.\n");
			goto start;
		}
	
	
	} 
	return 0;
}


