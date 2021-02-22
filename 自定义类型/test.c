#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stddef.h>

#pragma pack(4)		//修改默认对齐数
#pragma pack()		//取消修改的默认对齐数
int main() {
	//修改默认对齐数：#progma
	//offsetof(结构体类型名，成员变量名)：计算成员变量距结构体起始位置偏移量


	//位段成员必须是int; unsigned int; signed int（也可以有short,char）
	//位段的成员名后边有一个冒号和数字
	struct A
	{
		int _a : 2;		//2个比特位
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


//枚举
enum sex
{
	male,
	female
};

//联合体(共用体)	共用同一块空间
union UN
{
	char c;
	int i;
};
