#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int main()
//{
//	int a = 0;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	//printf("%d\n", sizeof int);//int���Ǳ�����a�Ǳ���
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

//// % �� ȡģ�� = ��ֵ��== ���ж����
//int main()
//{//���飺һ����ͬ����Ԫ�صļ���
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//{1-10}������鱻����Ϊarr[10]
//	printf("%d\n", arr[4]);//���±����ʽ����Ԫ�أ�Ĭ�ϴ�0��ʼ��
//	return 0;//arr[10]����һ�����10���������ֵ�����
//}            //char ch[20]��һ���ж�ʮ���ַ���ɵļ��ϡ�
             //float arr2[5]����������������ȸ�������ɵļ��ϡ�

////������Ϊ�⺯�����Զ��庯�����Լ���ƣ�������Add�������Զ��庯��
//int Add(int x, int y)//int�Ǻ����������ͣ�Add�Ǻ�������x,y�ǲ������������Ǻ����⡣
//{//��������ʹ���ܸ����
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a, b, sum;
//	printf("��������������\n");
//	scanf("%d%d", &a, &b);
//	sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//{
//	int line = 0;
//	printf("�������\n");
//	while (line < 200)
//	{
//		printf("Ŭ���ô���:%d\n",line);
//		line++;//
//	}
//	if (line >= 200);
//	printf("��н��ʮW��offer\n");
//	return 0;
//}

//int main()
//{
//	int coding;
//	printf("���ȥ�ô�����(ѡ��1 or 0)>:");
//	scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("��֣�����к�offer\n");
//	}
//	else
//	{
//		printf("��ҵ�ؼ�������\n");
//	}
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��offer\n");
//	else
//        printf("������\n");
//	return 0;
//}

///*{    // /*xxxxx*/   �ǵڶ���ע�ͷ�������ȱ�ݣ�����Ƕ�ף���һ�ֱȵڶ��ָ����á�
	//printf("c:\test\382\test.c\n");
//	printf("c:\test\328\test.c\n");
//	printf("%s\n", "c:\test\328\test.c");
//	return 0;
//}*/

//#include<string.h>
//int main()
//{
//	printf("%c\n", '\x61');//\xdd  ��16���ƣ�\ddd ��8���ơ�
//	printf("%c\n", '\32');// \32 ��һ��ת���ַ���
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
//	printf("%s\n", "\"abc\"");//���  "abc" 
//	//printf("%s\n", "\"");//ͬ��......
//	//printf("%s\n", "abc");
//	return 0;
//}

//{
//	printf("%c\n", '\'');//  \ ��ʾת�壬���� ' ��ӡ��������
//	return 0;    //%c��ʾ��ӡ�ַ���%s��ʾ��ӡ�ַ�����
//}

//{
//	printf("c\\test\\64\\test.c");
//	// \t ��ʾһ����ո�����֮ǰ�ڼ�һ�� \ \t  ��ʾ��\t��\�ٴ�ת�壬ʹ\��ʾһ��������\.
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };//��0�ǳ���3�������ǳ���  ���ֵ��  ��������15��Ҳ����������ֵ)��
//	printf("%d\n", strlen(arr1));//strlen--string length�������ַ����ĳ��ȡ�
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";// "  " ��ʾһ���ַ�������仰��ʾ��"abc"��������arr1��
//	char arr2[] = { 'a','b','c','\0'};//������0��'\0'����'\0'=0;  '\0'��ʾ�ַ����Ľ�����ʶ��
//	printf("%s\n", arr1);//ת���ַ� ��ת����˼   \0��ʾ�ַ����Ľ�����ʶ��\n��ʾ���У�\t��ʾˮƽ�Ʊ��������ո�TAb		)
//	printf("%s\n", arr2);
//	while (1);
//	return 0;
//}

//enum Sex//ö�ٳ����ǹ̶��ģ����ܸ��ĵ�
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

//#define MAX 10  //�����ʶ������
//int main()
//{
//	int arr[MAX] = { 0 };//�Ѿ�define MAX��10���������������������Ҳ����10��
//	printf("MAX=%d\n", MAX);
//	while (1);
//	return 0;
//}

//int main()
//{         //const�ǳ�����
//	const int n = 10;//n�ǳ����������������Ǳ��������Բ�������
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
//	printf("��������������:");
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

