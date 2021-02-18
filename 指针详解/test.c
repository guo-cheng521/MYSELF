#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//
//int main() {
//	char* p = "abcde";
//	*p = 'w';	//有问题,字符串常量不能改
//	printf("%s\n", p);
//	return 0;
//}


//int main() {
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	if (arr1 == arr2) {
//		printf("相等\n");
//	}
//	else {
//		printf("不想等\n");
//	}
//	if (p1 == p2) {
//		printf("相等\n");
//	}
//	else {
//		printf("不想等\n");
//	}
//	return 0;
//}


//int main() {
//
//	//数组指针-指向数组的指针 &arr数组的地址
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
//	//test(arr);//二维数组传参
//	//test1(arr);
//	//test2(arr);
//	/*test3(arr);*/
//	//test4(arr);
//	//test5(arr);
//
//	return 0;
//}

//&函数名 和 函数名都是函数的地址

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
//	//&函数名 和 函数名 都是函数的地址
//	/*
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	*/
//	int (*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2, 3));//5
//
//	return 0;
//}


// signal是一个函数声明
// signal函数的参数有2个，第一个是int。第二个是函数指针，该函数指针指向的函数的参数是int，返回类型是void
// signal函数的返回类型也是一个函数指针：该函数指针指向的函数的参数是int，返回类型是void
//
//void(* signal(int, void(*)(int)) )(int);
//
////简化
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);
//

//函数指针的数组
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
//	//指针数组 转移表
//	//int* arr[5];//
//	//需要一个数组，这个数组可以存放4个函数的地址 - 函数指针的数组
//	int (*pa)(int, int) = Add;//Sub/Mul/Div
//
//	int(*parr[4])(int, int) = {Add, Sub, Mul, Div};//函数指针的数组
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
//	//void* 类型的指针 可以接收任意类型的地址
//	//void* 类型的指针 不能进行解引用操作
//	//void* 类型的指针 不能进行+-整数的操作
//
//	return 0;
//}