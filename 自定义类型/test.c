#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stddef.h>

#pragma pack(4)		//�޸�Ĭ�϶�����
#pragma pack()		//ȡ���޸ĵ�Ĭ�϶�����
int main() {
	//�޸�Ĭ�϶�������#progma
	//offsetof(�ṹ������������Ա������)�������Ա������ṹ����ʼλ��ƫ����


	//λ�γ�Ա������int; unsigned int; signed int��Ҳ������short,char��
	//λ�εĳ�Ա�������һ��ð�ź�����
	struct A
	{
		int _a : 2;		//2������λ
		int _b : 5;
		int _c : 10;
		int _d : 30;
	};
	return 0;
}


struct S
{
	char c;
	int a;
};


//ö��
enum sex
{
	male,
	female
};

//������(������)	����ͬһ��ռ�
union UN
{
	char c;
	int i;
};
