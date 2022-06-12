#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
#include"code.h"

//함수설정
void front() 
{
	printf("===============================================================================\n");
	printf("=                                                                             =\n");
	printf("= 지역별 백신접종 현황입니다.                                                 =\n");
	printf("=                                                                             =\n");
	printf("= 보실수 있는 지역은");
}

void last()
{
	printf("가 있습니다.    =\n");
	printf("=                                                                             =\n");
	printf("= 1차접종에서 4차접종까지 보실 수 있습니다.                                   =\n");
	printf("=                                                                             =\n");
	printf("= 전국의 접종자수를 알고싶으시다면 '전국'을 입력하시오                        =\n");
	printf("=                                                                             =\n");
	printf("===============================================================================\n\n");

}
