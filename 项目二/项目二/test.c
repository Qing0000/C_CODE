#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int sum = 103;
	int count = 7;
	double average;
	average = (double)sum / count;
	printf("Average is %lf\n",average);
	return 0;
	while (1);
}

//{
//	int a = 8;
//	a += a *= a /= a - 6;
//	printf("a=%d\n", a);
//	while (1);
//	return 0;
//}

//{
//  printf("%d\n",7%5);
//  printf("%d\n",5%7);
//	printf("%f\n", 1.0 / 2);
//	printf("%d\n", 1 / 2);
//	printf("%f\n",3./5 );// 3 可以有 .0 也可以只 .
//	printf("%d\n", 3/5);
//	while (1);
//	return 0;
//}

//{
//	char a = '064';
//	printf("a=%d\n", a);
//	printf("a=%c\n", a);
//	return 0;
//	while (1);
//}

//{
//	char ch1, ch2, ch3, ch4;
//	ch1 = 'a';
//	ch2 = 'B';
//	printf("ch1=%c,ch2=%c\n", ch1 - 32, ch2 + 32);
//	printf("ch3=%c,ch4=%c\n", 'a' - 32, 'B' + 32);
//	while(1);
//	return 0;
//}

//{
//	char c1, c2;
//	int m, n;
//	c1 = 65;
//	c2 = 66;
//	m = 'a';
//	n = 'b';
//	printf("%c  %c\n", c1, c2);
//	printf("%d  %d\n", c1, c2);
//	printf("%d  %c\n", m,m);
//	printf("%d  %c\n", n,n);
//	while (1);
//	return 0;
//}

//{
//	unsigned char a = 0xA1;
//	printf("%d\n",a );
//	while (1);
//	return 0;
//}

//{
//	float a, b, c, d, e;
//	a = 3.4e-3;
//	b = 2.5e3;
//	c = 3.5E3;
//	d = 6E3;
//	printf("a=%f\n", a);
//	printf("b=%f\n",b );
//	printf("c=%f\n",c );
//	printf("d=%f\n",d );
//	while (1);
//	return 0;
//}

//{
//	printf("%d\n", 17u);
//	while (1);
//	return 0;
//}

//{
//	int a = 9;
//	a += a -= a * a;
//	printf("a=%d\n", a);
//	return 0;
//}

//int add(int a, int b, int c)//不在括号里，不能加符号 ; 
//{
//	int d;
//	d = a + b + c;
//	return d;
//}
//int main()
//{
//	int x, y, z, sum;
//	printf("Input three integers；");
//	scanf("%d%d%d", &x, &y, &z);
//	sum = add(x, y, z);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int input;
//	printf("在大学期间\n");
//	printf("你想要好好学习吗？(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("年薪30w的offer\n");
//	else
//		printf("毕业卖红薯\n");
//	return 0;
//}

//int main()
//{
//	printf("%c\n", '\64');
//	while (1);
//	return 0;
//}