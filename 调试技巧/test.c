#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main() {
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++) {
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
//}

//void my_strcpy(char* dest, char* src) {
//	if (dest != NULL && src != NULL) {
//		while (*dest++ = *src++) {
//			;
//		}
//	}
//
//}

#include <assert.h>

//void my_strcpy(char* dest, const char* src) {
//	assert(dest != NULL);	//断言 如果为假报错
//	assert(src != NULL);
//	while (*dest++ = *src++) {
//		;
//	}
//}
//

//char* my_strcpy(char* dest, const char* src) {
//	char* ret = dest;
//	assert(dest != NULL);	//断言 如果为假报错
//	assert(src != NULL);
//	while (*dest++ = *src++) {
//		;
//	}
//	return ret;
//}
//int main() {
//	char arr1[] = "############";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//
//}


//int main() {
//	const int num = 10;
//	//const int* p = &num;
//	//*p = 20;	//const放在指针变量*左边时，修饰的是*p，也就是不能通过p来改变*p(num)的值
//
//	int* const p = &num;
//	*p = 20;	//const放在指针变量*右边，修饰的是指针变量本身，p不能被改变
//
//	return 0;
//}