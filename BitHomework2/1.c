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
	int ret = rand()%100+1;//生成随机数
	int guess = 0;
	int i = 0;
	for (i = 1; i <= 10;i ++) {
	printf("请猜数字:>\n");
	scanf_s("%d", &guess);
		if (guess < ret && i < 10) {
			printf("太小了!\n");
		}
		else if (guess > ret && i < 10) {
			printf("太大了!\n" );
		}
		else if (guess == ret){
			printf("猜对了!\n");
			break;
		}
		else if(i ==10){
			printf("10次机会用完了!您输了!\n");
			break;
		}
	}
	
}
int main() {
	int input = 0;
	srand((unsigned int)time(NULL));//srand需要unsigned int数据类型 time（）需要一个指针
	do {
		menu();
		printf("请选择:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);


}