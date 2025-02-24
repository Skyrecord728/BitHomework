
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
	return 0;
}