/*[���׸� 1] : ���� ����

��ǻ�����α׷��� �򰡰��� (���� 25��)
�а� : ��ǻ�Ͱ��к�
�й� : 202202465
�̸� : �̼���
���� ���� : �ڷγ�19 ��Ȳ�� ��ſ� ���ؼ� �˾ƺ���
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void menu() //[���׸� 2] : �Լ� ���
{
	printf("\nmenu\n");
	printf("============================================\n");
	printf("a.������ ��� ���� ��Ȳ �˾ƺ���\n");
	printf("b.��� ���� �� ���̹��̷��� ����ȿ�� �˾ƺ���\n");
	printf("c.���� �� �� ���� ������ �� ��Ȳ �˾ƺ���\n");
	printf("d.���� �׸���� ����� �����ִ� ���� �����ϱ�\n");
	printf("���Ḧ ���Ͻø� 'q'�� ���ּ���.\n");
	printf("============================================\n");
}
struct ratio //[���׸� 5] : ����ü ���
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
		printf("�޴����� �����ϼ���.  ");
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
			char* nations[] = //[���׸� 6] : ������ Ȱ��
			{ "1. �ѱ�",
				"2. �߱�",
				"3. ����",
				"4. ���þ�"
			};
			int ntn;
			char nation;
			printf("�˰���� ������ ��ȣ�� �Է����ּ��� : ");
			printf("\n");

			n = sizeof(nations) / sizeof(nations[0]);

			for (i = 0; i < n; i++)
				printf("%s \n", nations[i]);
			scanf("%d", &ntn);
			nation = (char)ntn;

			if (nation == 1)
				printf("�ѱ��� ��� ���� ������ %f �ۼ�Ʈ �Դϴ�.\n",s.korea);
			else if (nation == 2)
				printf("�߱��� ��� ���� ������ %f �ۼ�Ʈ �Դϴ�.\n",s.china);
			else if (nation == 3)
				printf("������ ��� ���� ������ %f �ۼ�Ʈ �Դϴ�.\n",s.uk);
			else if (nation == 4)
				printf("���þ��� ��� ���� ������ %f �ۼ�Ʈ �Դϴ�.\n",s.russia);
			
		}
		else if (choice == 'b')
		{
			int number;
			printf("��� ����(1��,2��)�� ���������� �Է��Ͻÿ� : ");
			scanf("%d", &number);
			if (number == 1)
				printf("��� 1���� �����ϸ� ���̹��̷����� 49.2�ۼ�Ʈ ������ �� �ֽ��ϴ�.\n");
			else if (number == 2)
				printf("��� 2���� �����ϸ� ���̹��̷����� 93.4�ۼ�Ʈ ������ �� �ֽ��ϴ�.\n");
		}
		else if (choice == 'c')
		{
			int r[] = {1,2,3,4,5,6,7,8,9}; //[���׸� 3] : �迭 ���
			int virus[] = { 3637088,4950835,519731,783967,1095230,557267,717598,601833,597808 };
			int* p; //[���׸� 4] : ������ ���
			p = virus;
			int region;
			printf("%d.����Ư����  %d.��⵵  %d.������  %d.��û�ϵ�  %d.��û����\n", r[0], r[1], r[2], r[3], r[4]);
			printf("%d.���ϵ�  %d.��󳲵�  %d.����ϵ�  %d.���󳲵� \n", r[5], r[6], r[7], r[8]);
			printf("�˰���� ������ ���ڸ� �Է��Ͻÿ� : ");
			scanf("%d", &region);

			if (region == r[0])
				printf("\n����Ư������ ���� ������ ���� %d�� �Դϴ�.\n", p[0]);
			if (region == r[1])
				printf("\n��⵵�� ���� ������ ���� %d�� �Դϴ�.\n", p[1]);
			if (region == r[2])
				printf("\n�������� ���� ������ ���� %d�� �Դϴ�.\n", p[2]);
			if (region == r[3])
				printf("\n��û�ϵ��� ���� ������ ���� %d�� �Դϴ�.\n", p[3]);
			if (region == r[4])
				printf("\n��û������ ���� ������ ���� %d�� �Դϴ�.\n", p[4]);
			if (region == r[5])
				printf("\n���ϵ��� ���� ������ ���� %d�� �Դϴ�.\n", p[5]);
			if (region==r[6])
				printf("\n��󳲵��� ���� ������ ���� %d�� �Դϴ�.\n", p[6]);
			if (region == r[7])
				printf("\n����ϵ��� ���� ������ ���� %d�� �Դϴ�.\n", p[7]);
			if (region == r[8])
				printf("\n���󳲵��� ���� ������ ���� %d�� �Դϴ�.\n", p[8]);
		}
		else if (choice == 'd')
		{
			FILE* fp1, * fp2; //[���׸� 7] : ���� �����
			char file1[1000], file2[1000];
			char buffer[1000];

			printf("���� ���� �̸� : ");
			scanf("%s", &file1);

			printf("���� ���� �̸� : ");
			scanf("%s", &file2);

			if ((fp1 = fopen(file1, "r")) == NULL)
			{
				fprintf(stderr, "���� ���� %s�� �� �� �����ϴ�.\n", file1);
				exit(1);
			}
			if ((fp2 = fopen(file2, "w")) == NULL)
			{
				fprintf(stderr, "���� ���� %s�� �� �� �����ϴ�.\n", file2);
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
			printf("�ٽ� �޴����� �������ּ���.\n");
		}
		getchar();
	}	
	return 0;
}

