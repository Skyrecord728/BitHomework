
//
//int main() {
//	int a = 20;
//	int b = 40;
//	int c;
//	while (c = a % b) {
//		a = b;
//		b = c;
//	}
//	printf("%d", b);
//	return 0;
//
//}
//int main() {
//	int arr[] = { 1,2,3,4,5 };
//	int sz = sizeof (arr) / sizeof (arr[0]);
//	int i = 0;
//	while (i <= sz) {
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0;
//int main() {
//	int i = 1;
//	int sum = 0;
//	int ret = 1;
//		for (i = 1; i <= 10; i++) 
//		{
//			ret = ret * i;
//			sum = sum + ret;
//		}
//	printf("%d", sum);
//	return 0;
//}
#include <stdio.h>
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 1;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int left = 0;
//	while (left <= right) {
//	/*int mid = (left + right) / 2;*/
//		int mid = left + (right - left) / 2;
//		if (n > arr[mid]) {
//			left = mid + 1;
//		}
//		else if (n < arr[mid]) {
//			right = mid - 1;
//		}
//		else {
//			printf("找到了，下标为:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("找不到");
//	}
//	return 0;
//} 
//x,y形参
<<<<<<< HEAD
//void swap(int* px, int* py) {
//	int z = *px;
//	*px = *py;
//	*py = z;
//}//a,b实参
//int main() {
//	int a = 10; 
//	int* p1 = &a;
//	int b = 20;
//	int* p2 = &b;
//	swap(&a,&b);
//	printf("%d", a);
//	return 0;
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	int count = 0;
//	for (a = 0; a < 10; a++) {
//		for (b = 0; b < 10; b++) {
//			int c = a * 10 + b;
//			if ( c%10 == 9 || c/10 == 9 ) {
//				count++;
//			}
//		}
//	}
//	printf("%d", count+1);
//}
//int main() {
//	double i = 1.0;
//	double j = 1.0;
//	double s1 = 0.0;
//	double s2 = 0.0;
//	for (i = 1; i <= 100; i+=2) {
//		s1 = s1 + 1 / i;
//		
//	}
//	for (j = -2; j >= -100; j -= 2) {
//		s2 = s2 + 1 / j;
//		
//	}
//	printf("%lf", s1+s2);
//	return 0;
//}
//int main() {
//	for (int i = 1; i <= 9; i++) {
//		for (int j = 1; j <= i; j++) {
//			printf("%dx%d=%d\t", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
#define _CRT_SECURE_NO_WARNINGS
int main() {
	int arr[10] = { 0,1,2,3,29,5,6,7,8,9 };
	int i = 0;
	int max = 0;

	/*for (i = 0; i <= 10; i++) {
		scanf("%d", arr[i]);
	}*/
	max = arr[0];
	for (i = 1; i <= 10; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	printf("%d", max);
=======
void swap(int* px, int* py) {
	int z = *px;
	*px = *py;
	*py = z;
}//a,b实参
int main() {
	int a = 10;
	int* p1 = &a;
	int b = 20;
	int* p2 = &b;
	swap(&a,&b);
	printf("%d", a);
>>>>>>> bf1c84fb143ee7383515f21a5529a1a3059349ec
	return 0;

}