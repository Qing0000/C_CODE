#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()


//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10);
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}

//{
//	int b = 1;
//	printf("加入比特\n");
//	while (b<200)
//	{
//		printf("敲代码\n");
//		b++;
//	}
//	if(b>=200)
//	printf("好offer！\n");
//	while (1);
//	return 0;
//}

//{
//	int a = 0;
//	printf("加入比特\n");
//	printf("你是否要好好学习?(1/0)>:");
//	scanf("%d", &a);
//	if (a == 1)
//		printf("好offer!");
//	else
//		printf("回家卖红薯");
//	while (1);
//	return 0;
//}

//{//打印字符
//	printf("%d\n", '\x61');
//	printf("%d\n", '\132');
//	printf("%c\n", '\132');
//	while (1);
//	return 0;
//}

//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };//数完 abc 三个数字后随机出现数字继续数，直到出现0才算结束，所以是随机值。
//	printf("%d\n", strlen(arr1));//strlen: string length  表计算字符串的长度
//	printf("%d\n", strlen(arr2));
//	while (1);
//	return 0;
//}

//{
//	char arr1[] = "abc";// "abc": 'a','b','c','\0'
//	char arr2[] = { 'a','b','c','\0'};//  \0  是字符串的结束标志
//	printf("arr1=%s\n", arr1);
//	printf("arr2=%s\n", arr2);
//	while (1);
//	return 0;
//}

//#define MAX 10//define 定义的全局变量
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("arr=%d\n", arr);
//	while (1);
//	return 0;
//}

//{
//	extern int b;// extern 定义外部符号.
//	printf("b=%d\n", b);//全局变量的定义范围是整个工程，包括所有的文件.
//	while (1);
//	return 0;
//}

//int a = 100;//全局变量
//int main()
//{
//	int a = 10;
//	printf("a=%d\n", a);//局部变量
//	while (1);//输出结果是 10 ，当全局与局部变量都存在时，输出局部。
//	return 0;//全局与局部最好不要一样，，可能会产生bug。
//}

//#include<stdio.h>//stdio:standard input output     
//int main()
//{
//	float weight = 45.5f;
//	printf("%f\n"weight);//printf:print founction     表输出函数
//	while (1);
//	return 0;
//}