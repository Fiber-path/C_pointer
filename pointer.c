#include "stdio.h"
#define MAX 10

void ptr_func1() {
	printf("----------------------------函数ptr_func1的功能----------------------------\n");
	/*地址运算符&：后跟一个变量名时，&给出该变量的地址 */
	/*
	例如：
	&nurse 表示变量nurse 的地址
	*/

	/* 间接运算符*：后跟一个地址或指针，*给出该地址上的值 */
	int a[MAX] = { 1,7,5,4,1,5,1 }, * ptr = a;   /*数组名为数组首地址，则该语句意思：将数组的首地址赋给指针pointer*/
	printf("指针在数组中的使用<遍历>:\n");
	for (int i = 0; i < MAX; i++) {
		if (i == MAX / 2) {   /* 目的在换行 */
			printf("\n");
		}
		printf("%d: %d\t", i, *ptr);
		ptr++;    /* 将指针往后移，循环遍历输出整个数组 */
	}
	printf("\n");
}


int ptr_func2() {
	printf("\n----------------------------函数ptr_func3_2的功能----------------------------");
	/* 指针的加法 */
	/*
		对于数组来说：a[5]代表数组中第六个元素的值，指针*ptr代表数组首地址的值
		为了方便后续理解，此处*ptr可以理解为*(ptr+0), a[5]用指针则可以表示为*(ptr+5)
	*/
	int a1[MAX] = { 0,1,2,3,4,5 }, * ptr1 = a1;   /*目的需要将a[0]和a[5]输出*/
	for (int i = 1; i < MAX + 1; i++) {
		printf("\n指针加法的使用:\na1[0]: %d -> a1[5]: %d\n", *ptr1, *(ptr1 + 5));
		break;    /* 将指针往后移，循环遍历输出整个数组 */
	}
	return 0;
}


void ptr_func3_2(int* u, int* v);    /* 定义一个函数，用来占位和声明 */

int ptr_func3_1() {
	/* 使用指针解决交换函数的问题 */
	printf("\n----------------------------函数ptr_func3_1和ptr_func3_2的功能----------------------------");
	int x = 5, y = 10;
	printf("\n原始数据： x = %d and y = %d.\n", x,
		y);
	ptr_func3_2(&x, &y);    // 把地址发送给函数
	printf("更换之后的数据 x = %d and y = %d.\n", x, y);
	return 0;
}


void ptr_func3_2(int *u, int *v) {
	/* 使用指针解决交换函数的问题 */
	int temp;
	temp = *u;
	*u = *v;
	*v = temp;
}


int main() {
	ptr_func1();
	ptr_func2();
	ptr_func3_1();
}