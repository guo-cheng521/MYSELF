#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>

//strcat()	//׷���ַ������������Լ��ӵ��Լ���
//strncat()	�Լ�׷�ӵ��Լ���
//strstr()	���Ӵ�

int main() {
	//int len = strlen("abcdef");		//�����޷�������
	char arr[] = { "asd@qq.com" };
	char arr1[] = { "asdf" };
	char arr2[] = { "adfs" };
	char* p = "@.";
	//strcpy();
	//strcat(arr1,arr2);
	//strcmp(arr1, arr2);				//�ַ����Ƚ�
	//strncpy(arr1, arr2, count);		//�ֽ�
	//strncat(arr1, arr2, count);
	//strncmp(arr1, arr2, count);
	//strstr(arr1, arr2);				�������ַ���,�������ַ�������ַ,�����ڷ��ؿ�ָ��
	//strtok(arr1, �����ָ�����ַ�����);
	
	
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

	//char* str = strerror(������);
	/*char* str = strerror(1);*/
	char* str = strerror(errno);		//errno��һ��ȫ�ֵĴ�������������룩��C���ԵĿ⺯��ִ��ʱ�����˴��󣬾ͰѶ�Ӧ�Ĵ����븳ֵ��errno��
	printf("%s\n", str);
	return 0;
}
