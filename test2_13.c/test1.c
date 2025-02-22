//#include <string.h>
//#define MAX 100
//enum Sex {
//	MALE,
//	FEMALE,
//	unknown
//};
//int main() {
//
//	/*enum Sex a = MALE;*/
//	//printf("%d\n", a);
//	/*char arr1[] = "abc";
//	char arr2[] = { 'a','b','c','\0'};
//	int len = strlen(arr1);*/
//	//printf("%d\n", len);
//	//printf("%d\n", strlen(arr2));
//	///*printf("%s\n", arr1);
//	//printf("%s\n", arr2);*/
//	//printf("%c\n", '\'');
//	//printf("\\\test\\\test1");
//	/*printf("\aabc\ndef");*/
//	printf("%c\n\a", '\125');
//	printf("%d", strlen("qwe rt"));
//	return 0;
//	}
//int main() {
//
//    int x = 13.1;
//    int a;
//    if (x >= 100) {
//        a = x % 100;
//    }
//    else if (x < 100 && x >= 10) {
//        a = x % 10;
//    }
//    else if (x < 10) {
//        a = x;
//    }
//    printf("%d", a);
//    return 0;
//}
//int Add(int x, int y) {
//	return (x + y);
//	}
//int main() {
//	printf("%d", Add(1, 1));
//}
//int main() {
//	int arr[10] = { 10,11,12,13,14,15,16,17,18,19, };
//	//               0  1  2  3  4  5  6  7  8  9
//	for (int i = 0; i <=9; i++) {
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//	}
//int max(int x, int y) { return x > y ? x : y; }
//
//int main() {
//	printf("%d\n", max(10, 20));
//	return 0;
//}
//int mul(int a, int b) {
//	int c = 0;
//	for (int i = 1; i <= b; i++) {
//		c = c + a;
//	}
//	return c;
//}
//
//int main() {
//	printf("%d", mul(5, 2));
//	return 0;
//}
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
//int mul(int x, int y) {
//int z = 0;
//	for (int i = 1; i <= y; i++) {
//		z = z + x;
//	}
//	return z;
//}
//int main() {
//	int a,b;
//	scanf("%d %d", &a, &b);
//	printf("%d", mul(a,b));
//	return 0;
//}
//int main() {
	/*int a = (int)3.14;
	printf("%d", a);
	return 0;*/
	/*int x=1;
	int y=2;
	int z = x > y ? x: y;
	printf("%d", z);
	return 0;
}*/

//int test() {
//	static int x = 1;
//	x++;
//	return x;
//}
//int main() {
//	for (int i = 1; i <= 10; i++) {
//		printf("%d ", test());
//	}
//}
//#define ADD(x,y) x+y
//
//int main() {
//	int a = 10;
//	int b = 20;
//	int c = ADD(a,b);
//	printf("%d", c);
//	return 0;
//}

//typedef struct test
//{
//	char* sex;
//	int* num;
//}man;
//
//int main() {
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d", a);
//	printf("%d", *p);
//}
//int main() {
//	for (int i = 0; i <= 100; i++) {
//		if (i % 2 != 0) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main() {
//	int day;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday");
//		break;
//	case 6:
//	case 7:
//		printf("weekend");
//		break;
//	default:
//			printf("ERROR");
//			break;
//	}
//	return 0;
//}
//int main() {
//	int i = 0;
//	while (i <= 10) {
//		i++;
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main() {
//	char password[20] = { 0 };
//	printf("ÇëÊäÈëÃÜÂë:>");
//		scanf_s("%s", password);
//		getchar();
//		printf("ÇëÈ·ÈÏÃÜÂë(Y/N):>");
//		int ret = getchar();
//		if ('Y' == getchar) {
//			printf("YES\n");
//		}
//		else {
//			printf("NO\n");
//		}
//		return 0;
//}
//int main() {
//	int ch = getchar();
//	printf("%c\n", ch);
//	putchar(ch);
//	return 0;
//}
//int main() {
//	int ch = 0;
//	while ((ch=getchar()) != EOF) {
//		putchar(ch);
//	}
//	return 0;
//}
int main() {
	char ch = '\0';
	while ((ch = getchar()) != EOF) {
		if (ch < '0' || ch > '9') {
			continue;
		}
			putchar(ch);
	}
		return 0;
}