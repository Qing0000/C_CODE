#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int main()
//{
//	int a = 0;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	//printf("%d\n", sizeof int);//int不是变量，a是变量
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0;
//}

//// % 表 取模， = 表赋值，== 表判断相等
//int main()
//{//数组：一组相同类型元素的集合
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//{1-10}这个数组被定义为arr[10]
//	printf("%d\n", arr[4]);//以下标的形式访问元素（默认从0开始）
//	return 0;//arr[10]定义一个存放10个整数数字的数组
//}            //char ch[20]表一个有二十个字符组成的集合。
             //float arr2[5]表两个由五个单精度浮点数组成的集合。

////函数分为库函数和自定义函数（自己设计）。例：Add函数是自定义函数
//int Add(int x, int y)//int是函数返回类型，Add是函数名，x,y是参数，括号里是函数题。
//{//函数可以使功能更便捷
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a, b, sum;
//	printf("请输入两个数字\n");
//	scanf("%d%d", &a, &b);
//	sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line < 200)
//	{
//		printf("努力敲代码:%d\n",line);
//		line++;//
//	}
//	if (line >= 200);
//	printf("年薪三十W的offer\n");
//	return 0;
//}

//int main()
//{
//	int coding;
//	printf("你会去敲代码吗？(选择1 or 0)>:");
//	scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("坚持，你会有好offer\n");
//	}
//	else
//	{
//		printf("毕业回家卖红薯\n");
//	}
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//        printf("卖红薯\n");
//	return 0;
//}

///*{    // /*xxxxx*/   是第二种注释方法，有缺陷，不能嵌套，第一种比第二种更好用。
	//printf("c:\test\382\test.c\n");
//	printf("c:\test\328\test.c\n");
//	printf("%s\n", "c:\test\328\test.c");
//	return 0;
//}*/

//#include<string.h>
//int main()
//{
//	printf("%c\n", '\x61');//\xdd  表16进制，\ddd 表8进制。
//	printf("%c\n", '\32');// \32 是一个转义字符。
//	printf("%c\n", '\64');
//	printf("%c\n", '\132');
//	printf("%c\n", '\328');
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	printf("%d\n", strlen("c:\test\328\test.c"));
//	printf("%d\n", strlen("c:\test\64\test.c"));
//	return 0;
//}

//{
//	printf("%s\n", "\"abc\"");//输出  "abc" 
//	//printf("%s\n", "\"");//同理，......
//	//printf("%s\n", "abc");
//	return 0;
//}

//{
//	printf("%c\n", '\'');//  \ 表示转义，否则 ' 打印不出来。
//	return 0;    //%c表示打印字符，%s表示打印字符串。
//}

//{
//	printf("c\\test\\64\\test.c");
//	// \t 表示一个大空格，在它之前在加一个 \ \t  表示将\t的\再次转义，使\表示一个正常的\.
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };//加0是长度3，不加是长度  随机值。  （可能是15，也可能是其他值)。
//	printf("%d\n", strlen(arr1));//strlen--string length，计算字符串的长度。
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";// "  " 表示一个字符串，这句话表示将"abc"存入数组arr1中
//	char arr2[] = { 'a','b','c','\0'};//必须有0或'\0'，即'\0'=0;  '\0'表示字符串的结束标识。
//	printf("%s\n", arr1);//转义字符 即转变意思   \0表示字符串的结束标识，\n表示换行，\t表示水平制表符（即大空格TAb		)
//	printf("%s\n", arr2);
//	while (1);
//	return 0;
//}

//enum Sex//枚举常量是固定的，不能更改的
//{
//	Male,
//	Female,
//	Secret
//};
//int main()
//{
//	printf("%d\n", Male);//0
//	printf("%d\n", Female);//1
//	printf("%d\n", Secret);//2
//	while (1);
//	return 0;
//}

//#define n 10
//int main()
//{
//	int arr[n] = { 0 };
//	printf("n=%d\n", n);
//	while (1);
//	return 0;
//}

//#define MAX 10  //定义标识符常量
//int main()
//{
//	int arr[MAX] = { 0 };//已经define MAX是10，无论括号里填几，输出结果也仍是10。
//	printf("MAX=%d\n", MAX);
//	while (1);
//	return 0;
//}

//int main()
//{         //const是常属性
//	const int n = 10;//n是常变量，但本质仍是变量，所以不能运行
//	int arr[n] = { 0 };
//printf("n=%d\n", n);
//	while (1);
//	return 0;
//}

//int main()
//{
//	const int m = 23;
//	printf("m=%d\n", m);
//	int a = -46;
//	printf("a=%d\n", a);
//	while (1);
//	return 0;
//}

//int main()
//{
//	int num1, num2,num3, sum;
//	printf("请输入三个数字:");
//	scanf("%d%d%d", &num1, &num2,&num3);
//	sum = num1 + num2+num3;
//	printf("sum=%d\n", sum);
//	while (1);
//	return 0;
//}

//int add(int a,int b,int c)
//{
//	int d;
//	d = a + b + c;
//	return d;
//}
//int main()
//{
//	int x, y, z, sum;
//	printf("Input three integers :" );
//	scanf("%d%d%d", &x, &y, &z);
//	sum = add(x, y, z);
//	printf("sum=%d\n", sum);
//	while (1);
//	return 0;
//
//}

//int main()
//{
//	char ch = 'Z';
//	printf("ch=%c\n",ch);
//	while (1);
//	return 0;
//}

