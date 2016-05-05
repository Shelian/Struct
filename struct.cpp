#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//
//int int_cmp(const void *p1, const void *p2)
//{
//	if (*(int *)p1 > *(int *)p2)
//	{
//		return 1;
//	}
//	else if (*(int *)p1 == *(int *)p2)
//	{
//		return 0;
//	}
//	else
//	{
//		return -1;
//	}
//}
//
//void swap(void *p1, void *p2, int size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		char tmp = *((char *)p1 + i);
//		*((char *)p1 + i) = *((char *)p2 + i);
//		*((char *)p2 + i) = tmp;
//	}
//}
//
//void bubble(void *base, int count, int size, int(*cmp)(const void *, const void *))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < count - 1; i++)
//	{
//		for (j = 0; j < count - i - 1; j++)
//		{
//			if (cmp((char *)base +size*j,(char *)base+size*(j+1))>0)
//			{
//				swap((char *)base + size*j, (char *)base + size*(j + 1), size);
//			}
//		}
//	}
//}
//
//int str_cmp(const void *p1, const void *p2)
//{
//	return strcmp((char *)(*(int *)p1), (char *)(*(int *)p2));
//}
//
//int main()
//{
//	//int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	char *arr[] = { "dddd", "bbbb", "cccc", "aaaa" };
//
//	bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof(char *), str_cmp);
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//
//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//struct Kcb
//{
//	char class[10];
//	char adrr[10];
//};
//struct
//{
//	char name[10];
//	int age;
//	char sex[3];
//	float score;
//	char tele[12];
//	char addr[30];
//	
//}a,b;
//
//struct
//{
//	char name[10];
//	int age;
//	char sex[3];
//	float score;
//	char tele[12];
//	char addr[30];
//}*pa;
//
//
//typedef struct Stu
//{
//	char name[10];
//	int age;
//	char sex[3];
//	float score;
//	char tele[12];
//	char addr[30];
//	struct Stu *next;
//	struct Kcb kcb;
//}Stu,*Pstu;
//
//
//typedef struct A
//{
//	int a;
//	struct A *next;//4
//}A;
//
//struct A;
//
//struct B
//{
//	struct A a;
//};
//
//struct A
//{
//	struct B b;
//};
//
//
//
//int main()
//{
//	Stu stu;
//	Pstu pstu = &stu;
//	strcpy(stu.name, "abcdef");
//	strcpy(stu.kcb.class, "datastr");
//	stu.age = 10;
//	printf("%s\n", stu.name);
//	printf("%s\n", (*pstu).kcb.class);
//	printf("%s\n", pstu->kcb.class);
//	
//	system("pause");
//	return 0;
//}
//
//
//
//#include <stdio.h>
//
//struct S
//{
//	char s;
//	short sh;
//	char name[10];
//};
//struct Stu
//{
//	char name[10];
//	int age;
//	char sex[3];
//	float f;
//	struct S ss;
//};
//int main()
//{
//	struct Stu stu = { {'a','b','c'}, 12, "男", 97.5, { 'w', 15, "bit" } };
//	char name[10] = { 'a', 'b' };
//	printf("name = %s\n", stu.name);
//	printf("f = %f\n", stu.f);
//	printf("%s\n", stu.ss.name);
//	system("pause");
//	return 0;
//}
//
//
//
//
////#include <stddef.h>
////#include <stdio.h>
//
////
////默认对齐数：
////vs、vc中是8
////linux环境是4
//
//#pragma pack(4)
//
////8
////typedef struct A
////{
////	char c;//1 8   1
////	int i;//4  8   4
////	double d;//8 8 8
////	int in;//4 8   4
////	//4
////}A;
//
////typedef struct A
////{
////	double d;//8 8  8
////	char c;//1 8    1
////	int i;//4  8    4
////	short sh;//2  8 2
////}A;
//

//struct B
//{
//	char c;//     1 
//	char c2;//    1
//	//2
//	int i;//4 4   4
//	int b;
//	//struct A sa;//
//	struct A
//{
//	char c;//1
//	//3
//	double i;//8 4 4
//	char c2;//1
//	//3
//};//16
//	//24
//};
//
////#pragma pack()
//
//int main()
//{
//	printf("%d\n", sizeof(struct B));
//	//A a = {0};
//	//printf("%d\n", offsetof(A,c));
//	//printf("%d\n", offsetof(A,d));
//	system("pause");
//	return 0;
//}
//
//
//
//
#include <stdio.h>
#include <stdlib.h>

struct AA
{
	int a;//4  8   4
	//4
	double d;//8 8 8
	struct A
	{
		int a;
		char c;
		double d;
	};
	char c[5];   //5
	//7
};

int main()
{
	printf("%d\n", sizeof(struct AA));
	system("pause");
	return 0;
}

//
//#include <stdio.h>
//
//struct A
//{
//	int a;
//	char c[1024];
//	double d;
//};
//void fun(struct A* psa)
//{
//	
//}
//int main()
//{
//	struct A a;
//	fun(&a);
//	return 0;
//}
//

//#include <stdio.h>
//struct A
//{
//	int a:1;
//	int b:29;
//	int c:3;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	system("pause");
//	return 0;
//}

