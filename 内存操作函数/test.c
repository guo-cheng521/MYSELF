#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


int main() {
	int arr1[] = { 1,2,3,4,5 };
	int arr2[5] = { 0 };
	char arr3[5] = { 0 };

	memcpy(arr2, arr1, sizeof(arr1));

	memmove(arr1+2, arr1, 12);		//¥¶¿Ì÷ÿµ˛øΩ±¥

	memcmp(arr1, arr2, 20);

	memset(arr3, '*', 5); 
	return 0;
}