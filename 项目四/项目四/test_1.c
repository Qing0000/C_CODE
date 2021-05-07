#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
int main()
{
	int time = 10;
	printf("十秒倒计时开始\n");
	for (time = 10; time > 0; time--)
	{
		printf("剩余%d秒\n", time);
		Sleep(1000);
	}
	while (1);
	return 0;
}

//int main()
//{
//	int time = 10;
//	printf("十秒倒计时开始\n");
//	do
//	{
//		printf("剩余%d秒\n",time);
//		Sleep(1000);
//		time--;
//	} while (time > 0);
//	while (1);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	printf("input a string:");
//	while (getchar() != '\n')
//	{
//		n++;
//	}
//	printf("%d\n", n);
//	while (1);
//	return 0;
//}

//int main()
//{
//	int i, sum;
//	for (i = 1, sum = 0; i <= 100; i++)
//	{
//		sum += i;
//	}
//	printf("sum=%d\n", sum);
//	while (1);
//	return 0;
//}

//int main()
//{
//	int i,sum;
//	i = 0, sum = 0;
//	do
//	{
//		sum+=i;
//		i++;
//	}while(i<=100);
//
//	printf("sum=%d\n",sum);
//	while(1);
//	return 0;
//}

//int main()
//{
//	int i,sum;
//	i=1,sum=0;
//	while(i<=100)
//	{
//		sum+=i;
//		i++;
//	}
//	printf("sum=%d\n",sum);
//	while(1);
//	return 0;
//}