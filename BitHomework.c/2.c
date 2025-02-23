#include <stdio.h>
#include <string.h>
//int main() {
//	int a = 12;
//	int b = 10;
//	int c = 9;
//	if (a > c) {
//		int t = a;
//		a = c;
//		c = t;
//	}
//	if (b > c) {
//		int t = b;
//		b = c;
//		c = t;
//	}
//	if (a > b) {
//		int t = a;
//		a = b;
//		b = t;
//	}
//	printf("%d %d %d", c, b, a);
//	return 0;
//}
//int main() {
//	for (int i = 1; i <= 100; i++) {
//		if (i % 3 == 0) {
//			printf("%d ", i);
//		}
//	}
//}
#include <Windows.h>
#include <stdlib.h>
int main() {
	char arr1[] = { "I Love You" };
	char arr2[] = { "##########" };
	int left = 0;
	int right = strlen(arr1)-1;
	while (right >= left) {
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls");
		left++;
		right--;
	}
	return 0;
	

}