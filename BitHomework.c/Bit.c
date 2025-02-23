#include <stdio.h>
#include <math.h>
//思路：
//素数：即质数，除了1和自己之外，再没有其他的约数，则该数据为素数，具体方式如下

//1.
//int main() {
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i++) {
//		int j = 0;
//		for (j = 2; j <= i; j++) {
//			if (i % j == 0) {
//				break;
//			}
//		}
//		if (i == j) {
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//2.
//int main() {
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i++) {
//		int j = 0;
//		for (j = 2; j <= i/2; j++) {
//			if (i % j == 0) {
//				break;
//			}
//		}
//		if (j > i/2) {
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//3.
int main() {
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2) {
		int j = 0;
		for (j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				break;
			}
		}
		if (j > sqrt(i)) {
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
}
