#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS
void menu() {
	printf("***********************\n");
	printf("******  1.play   ******\n");
	printf("******  0.exit   ******\n");
	printf("***********************\n");
	printf("***********************\n");
}
void game() {
	int ret = rand()%100+1;//���������
	int guess = 0;
	int i = 0;
	for (i = 1; i <= 10;i ++) {
	printf("�������:>\n");
	scanf_s("%d", &guess);
		if (guess < ret && i < 10) {
			printf("̫С��!\n");
		}
		else if (guess > ret && i < 10) {
			printf("̫����!\n" );
		}
		else if (guess == ret){
			printf("�¶���!\n");
			break;
		}
		else if(i ==10){
			printf("10�λ���������!������!\n");
			break;
		}
	}
	
}
int main() {
	int input = 0;
	srand((unsigned int)time(NULL));//srand��Ҫunsigned int�������� time������Ҫһ��ָ��
	do {
		menu();
		printf("��ѡ��:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳�");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);


}