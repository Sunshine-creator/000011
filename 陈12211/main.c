#include"game.h"
void menu()
{
	printf("*********************\n");
	printf("***��ӭ����ɨ������**\n");
	printf("*1.play       2.exit*\n");
	printf("*********************\n");
	printf(" please enter your select :\n");
}
int main()
{
	menu();
	int select = 0;
	
	int quit = 0;
	while (!quit)
	{
		scanf(" %d", &select);
		switch (select)
		{
		case 1:
			game();
			break;
		case 2:
			quit = 1;
			break;
		default:
			printf(" your select is illegal,please check it and try again!\n");
			break;
		}
	}
	printf("�ټ���\n");
	system("pause");
	return 0;
}
