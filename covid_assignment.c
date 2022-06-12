/*[평가항목 1] : 과제 설명

컴퓨터프로그래밍 평가과제 (배점 25점)
학과 : 컴퓨터공학부
학번 : 202202465
이름 : 이서연
과제 주제 : 코로나19 현황과 백신에 대해서 알아보기
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void menu() //[평가항목 2] : 함수 사용
{
	printf("\nmenu\n");
	printf("============================================\n");
	printf("a.국가별 백신 접종 현황 알아보기\n");
	printf("b.백신 차수 별 변이바이러스 예방효과 알아보기\n");
	printf("c.전국 도 별 현재 감염자 수 현황 알아보기\n");
	printf("d.위의 항목들의 결과가 나와있는 파일 복사하기\n");
	printf("종료를 원하시면 'q'을 써주세요.\n");
	printf("============================================\n");
}
struct ratio //[평가항목 5] : 구조체 사용
{
	double korea, china, uk, russia;
};
int main(void)
{
	char choice;
	int ch;
	while (1)
	{
		menu();
		printf("메뉴에서 선택하세요.  ");
		choice = getchar();

		if (choice == 'q')
			break;

		else if (choice == 'a')
		{
			struct ratio s;
			s.korea = 86.9;
			s.china = 86.8;
			s.uk = 73;
			s.russia = 50;

			int i, n;
			char* nations[] = //[평가항목 6] : 포인터 활용
			{ "1. 한국",
				"2. 중국",
				"3. 영국",
				"4. 러시아"
			};
			int ntn;
			char nation;
			printf("알고싶은 나라의 번호를 입력해주세요 : ");
			printf("\n");

			n = sizeof(nations) / sizeof(nations[0]);

			for (i = 0; i < n; i++)
				printf("%s \n", nations[i]);
			scanf("%d", &ntn);
			nation = (char)ntn;

			if (nation == 1)
				printf("한국의 백신 접종 비율은 %f 퍼센트 입니다.\n",s.korea);
			else if (nation == 2)
				printf("중국의 백신 접종 비율은 %f 퍼센트 입니다.\n",s.china);
			else if (nation == 3)
				printf("영국의 백신 접종 비율은 %f 퍼센트 입니다.\n",s.uk);
			else if (nation == 4)
				printf("러시아의 백신 접종 비율은 %f 퍼센트 입니다.\n",s.russia);
			
		}
		else if (choice == 'b')
		{
			int number;
			printf("백신 차수(1차,2차)를 정수형으로 입력하시오 : ");
			scanf("%d", &number);
			if (number == 1)
				printf("백신 1차를 접종하면 변이바이러스를 49.2퍼센트 예방할 수 있습니다.\n");
			else if (number == 2)
				printf("백신 2차를 접종하면 변이바이러스를 93.4퍼센트 예방할 수 있습니다.\n");
		}
		else if (choice == 'c')
		{
			int r[] = {1,2,3,4,5,6,7,8,9}; //[평가항목 3] : 배열 사용
			int virus[] = { 3637088,4950835,519731,783967,1095230,557267,717598,601833,597808 };
			int* p; //[평가항목 4] : 포인터 사용
			p = virus;
			int region;
			printf("%d.서울특별시  %d.경기도  %d.강원도  %d.충청북도  %d.충청남도\n", r[0], r[1], r[2], r[3], r[4]);
			printf("%d.경상북도  %d.경상남도  %d.전라북도  %d.전라남도 \n", r[5], r[6], r[7], r[8]);
			printf("알고싶은 지역의 숫자를 입력하시오 : ");
			scanf("%d", &region);

			if (region == r[0])
				printf("\n서울특별시의 현재 감염자 수는 %d명 입니다.\n", p[0]);
			if (region == r[1])
				printf("\n경기도의 현재 감염자 수는 %d명 입니다.\n", p[1]);
			if (region == r[2])
				printf("\n강원도의 현재 감염자 수는 %d명 입니다.\n", p[2]);
			if (region == r[3])
				printf("\n충청북도의 현재 감염자 수는 %d명 입니다.\n", p[3]);
			if (region == r[4])
				printf("\n충청남도의 현재 감염자 수는 %d명 입니다.\n", p[4]);
			if (region == r[5])
				printf("\n경상북도의 현재 감염자 수는 %d명 입니다.\n", p[5]);
			if (region==r[6])
				printf("\n경상남도의 현재 감염자 수는 %d명 입니다.\n", p[6]);
			if (region == r[7])
				printf("\n전라북도의 현재 감염자 수는 %d명 입니다.\n", p[7]);
			if (region == r[8])
				printf("\n전라남도의 현재 감염자 수는 %d명 입니다.\n", p[8]);
		}
		else if (choice == 'd')
		{
			FILE* fp1, * fp2;
			char file1[1000], file2[1000];
			char buffer[1000];

			printf("원본 파일 이름 : ");
			scanf("%s", &file1);

			printf("복사 파일 이름 : ");
			scanf("%s", &file2);

			if ((fp1 = fopen(file1, "r")) == NULL)
			{
				fprintf(stderr, "원본 파일 %s를 열 수 없습니다.\n", file1);
				exit(1);
			}
			if ((fp2 = fopen(file2, "w")) == NULL)
			{
				fprintf(stderr, "복사 파일 %s를 열 수 없습니다.\n", file2);
				exit(1);
			}
			while (fgets(buffer, 1000, fp1) != NULL)
				fputs(buffer, fp2);
			fclose(fp1);
			fclose(fp2);
			return 0;
		}
		else
		{
			printf("다시 메뉴에서 선택해주세요.\n");
		}
		getchar();
	}	
	return 0;
}

