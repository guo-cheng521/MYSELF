#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//
//int main() {
//	char* p = "abcde";
//	*p = 'w';	//������,�ַ����������ܸ�
//	printf("%s\n", p);
//	return 0;
//}


//int main() {
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	if (arr1 == arr2) {
//		printf("���\n");
//	}
//	else {
//		printf("�����\n");
//	}
//	if (p1 == p2) {
//		printf("���\n");
//	}
//	else {
//		printf("�����\n");
//	}
//	return 0;
//}


//int main() {
//
//	//����ָ��-ָ�������ָ�� &arr����ĵ�ַ
//	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;*/
//
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	return 0;
//}


//void test(int arr[3][5])
//{}
//void test1(int arr[][5])
//{}
//void test2(int arr[3][])//err
//{}

//void test3(int* arr) //err
//{}
//
//void test4(int **arr) //err
//{}
//
//void test5(int (*arr)[5])
//{}

//int main()
//{
//	int arr[3][5] = { 0 };
//
//	//test(arr);//��ά���鴫��
//	//test1(arr);
//	//test2(arr);
//	/*test3(arr);*/
//	//test4(arr);
//	//test5(arr);
//
//	return 0;
//}

//&������ �� ���������Ǻ����ĵ�ַ

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//int arr[10] = { 0 };
//	//int (*p)[10] = &arr;
//
//	//arr;
//	//printf("%d\n", Add(a, b));
//
//	//&������ �� ������ ���Ǻ����ĵ�ַ
//	/*
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	*/
//	int (*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2, 3));//5
//
//	return 0;
//}


// signal��һ����������
// signal�����Ĳ�����2������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������void
// signal�����ķ�������Ҳ��һ������ָ�룺�ú���ָ��ָ��ĺ����Ĳ�����int������������void
//
//void(* signal(int, void(*)(int)) )(int);
//
////��
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);
//

//����ָ�������
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	//ָ������ ת�Ʊ�
//	//int* arr[5];//
//	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ - ����ָ�������
//	int (*pa)(int, int) = Add;//Sub/Mul/Div
//
//	int(*parr[4])(int, int) = {Add, Sub, Mul, Div};//����ָ�������
//	
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));//5 -1 6 0
//	}
//
//	return 0;
//}


//char* my_strcpy(char* dest, const char* src);
//char* (*pf)(char*, const char*) = my_strcpy;
//char* (*arr[1])(char*, const char*);
//pf[0] = my_strcpy;


//int main()
//{
//	int a = 10;
//	//int* pa = &a;//
//	//char* pc = &a;
//
//	//char ch = 'w';
//	void* p = &a;
//	//*p = 0;
//	//p++;
//
//	//p = &ch;
//	//void* ���͵�ָ�� ���Խ����������͵ĵ�ַ
//	//void* ���͵�ָ�� ���ܽ��н����ò���
//	//void* ���͵�ָ�� ���ܽ���+-�����Ĳ���
//
//	return 0;
//}