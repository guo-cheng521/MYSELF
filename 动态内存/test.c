#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <stdio.h>


//int main() {
//	int* p = (int*)malloc(10 * sizeof(int));
//	free(p);
//	int* p1 = (int*)calloc(10, sizeof(int));	//10��Ԫ�أ�ÿ��Ԫ��4���ֽڣ���ʼ��Ϊ0
//	free(p1);
//	p1 = NULL;
//	//realloc������̬�ڴ��С
//	int* ps = (int*)malloc(10 * sizeof(int));
//	if (ps != NULL) {
//		int i = 0;
//		for (i = 0; i < 10; i++) {
//			*(ps + i) = i;
//		}
//	}
//	ps = realloc(ps, 80);
//	free(ps);
//	ps = NULL;
//	return 0;
//}


//��������
struct S
{
	int n;
	int arr[];	//���һ����Ա������δ֪��С������	����Ĵ�С�ɵ���
};
int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
	ps->n = 100;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	struct S* ptr = (struct S*)realloc(ps, 44);
	if (ptr != NULL)
	{
		ps = ptr;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	free(ps);
	ps = NULL;
	return 0;
}