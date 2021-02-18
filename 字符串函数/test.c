#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>

//strcat()	//追加字符串，但不能自己加到自己上
//strncat()	自己追加到自己上
//strstr()	找子串

int main() {
	//int len = strlen("abcdef");		//返回无符号整形
	char arr[] = { "asd@qq.com" };
	char arr1[] = { "asdf" };
	char arr2[] = { "adfs" };
	char* p = "@.";
	//strcpy();
	//strcat(arr1,arr2);
	//strcmp(arr1, arr2);				//字符串比较
	//strncpy(arr1, arr2, count);		//字节
	//strncat(arr1, arr2, count);
	//strncmp(arr1, arr2, count);
	//strstr(arr1, arr2);				查找子字符串,返回子字符串处地址,不存在返回空指针
	//strtok(arr1, 用作分割符的字符集合);
	
	
	/*char* ret = strtok(arr, p);
	printf("%s\n", ret);
	ret = strtok(NULL, p);
	printf("%s\n", ret);
	ret = strtok(NULL, p);
	printf("%s\n", ret);*/
	
	
	/*char* ret = NULL;
	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p)) {
		printf("%s\n", ret);
	}*/

	//char* str = strerror(错误码);
	/*char* str = strerror(1);*/
	char* str = strerror(errno);		//errno是一个全局的错误变量（错误码）当C语言的库函数执行时发生了错误，就把对应的错误码赋值到errno中
	printf("%s\n", str);
	return 0;
}
