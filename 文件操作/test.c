#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL) {
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	/*fputc('h', pf);
//	fputc('e', pf);*/
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	char buf[10] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL) {
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fgets(buf, 10, pf);
//	/*printf("%s\n", buf);*/	//buf�б���ӵ�л���
//	//printf("%s", buf);
//	puts(buf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	char buf[10] = "hello";
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL) {
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fputs(buf, pf);
//	fputs("world", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//�Ӽ��̶�ȡһ���ı���Ϣ
//	char buf[10] = { 0 };
//	//fgets(buf, 10, stdin);	//�ӱ�׼��������ȡ
//	//fputs(buf, stdout);	//�������׼�����
//
//	gets(buf);
//	puts(buf);
//	return 0;
//}

//struct S
//{
//	int n;
//	char arr[10];
//};

//int main()
//{
//	struct S s = { 100,"hello" };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fprintf(pf, "%d %s", s.n, s.arr);	//��ʽ�����
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fscanf(pf, "%d %s", &(s.n), &(s.arr));	//��ʽ������
//	printf("%d %s", s.n, s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct S s = { 0 };
//	fscanf(stdin, "%d %s", &(s.n), &(s.arr));	//��ʽ�����
//	fprintf(stdout, "%d %s", s.n, s.arr);
//	return 0;
//}

//int main()
//{
//	struct S s = { 100, "hello" };
//	struct S tmp = { 0 };
//	char buf[20] = { 0 };
//	sprintf(buf, "%d %s", s.n, s.arr);
//	sscanf(buf, "%d %s", &(tmp.n), &(tmp.arr));//��buf�ж�ȡ��ʽ�����ݵ�tmp��
//	printf("%s\n", buf);
//	printf("%d %s\n", tmp.n, tmp.arr);
//	return 0;
//}

struct S
{
	int n;
	char arr[10];
};

//int main()
//{
//	struct S s = { 100, "guo" };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fwrite(&s, sizeof(struct S), 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main()
{
	struct S s = { 0 };
	FILE* pf = fopen("test.txt", "rb");
	if (pf == NULL)
	{
		return 0;
	}
	fread(&s, sizeof(struct S), 1, pf);
	printf("%d %s\n", s.n, s.arr);
	fclose(pf);
	pf = NULL;
	return 0;
}