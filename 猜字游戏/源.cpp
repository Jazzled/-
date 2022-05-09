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
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了,请重猜\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
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
		printf("请进行选择:\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			printf("请猜数字\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("无效输出，请重新进行选择\n");
			break;
			
		}


	} 
	while (input);
	return 0;
}