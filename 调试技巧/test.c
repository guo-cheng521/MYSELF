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
//	assert(dest != NULL);	//���� ���Ϊ�ٱ���
//	assert(src != NULL);
//	while (*dest++ = *src++) {
//		;
//	}
//}
//

//char* my_strcpy(char* dest, const char* src) {
//	char* ret = dest;
//	assert(dest != NULL);	//���� ���Ϊ�ٱ���
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
//	//*p = 20;	//const����ָ�����*���ʱ�����ε���*p��Ҳ���ǲ���ͨ��p���ı�*p(num)��ֵ
//
//	int* const p = &num;
//	*p = 20;	//const����ָ�����*�ұߣ����ε���ָ���������p���ܱ��ı�
//
//	return 0;
//}