#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int guess = 0;
void menu()
{
	printf("*******************\n");
	printf("******1.play*******\n");
	printf("******0.exit*******\n");
	printf("*******************\n");
}
void game()
{
	int ret = rand() % 100 + 1;
	
	while (1)
	{
		scanf_s("%d", &guess);
		if(guess>ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��,���ز�\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));
int input=0;
	do {
		menu();
		printf("�����ѡ��:\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			printf("�������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("��Ч����������½���ѡ��\n");
			break;
			
		}


	} 
	while (input);
	return 0;
}