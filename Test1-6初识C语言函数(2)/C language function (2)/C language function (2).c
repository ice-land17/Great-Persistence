#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//int Add(int x, int y);//����������,�βε����ֿ���ʡ��
////����������һ������ں�����ʹ��֮ǰ��Ҫ������������ʹ�á�
//int main()
//{
//	int a = 10;
//	int b = 20; 
//	int sum = Add(a, b);
//	printf("%d\n", sum);//������ʹ��
//	return 0;
//}
////�����Ķ���
//int Add(int x, int y)
//{
//	return x + y;
//}	



////�򵥵ĵݹ�
//int main()
//{
//	printf("hehe\n");
//
//	main();
//	return 0;
//}


////��ϰ1: (��ͼ����)
////����һ������ֵ(�޷���).������˳���ӡ����ÿһλ��
////���� :����: 1234, ���1 2 3 4.
//void print(int n)
//{
//	if (n > 9)//1234��123��12��1�����εĽ��еݹ飬Ȼ�����洢1 2 3 4 ��������,ÿ�ε��ƶ���һ�ζ����ĺ�������
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}



////��д�������ַ����ĳ��ȣ�������ʹ����ʱ������
//int my_strlen(char* str)
//{
//	int count = 0;//ͳ���ַ��ĸ���
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//
//	printf("%d\n", len);
//	return 0;
//}




////��n�Ľ׳ˣ����������
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d\n", ret);
//
//	return 0;
//}



////���n��쳲�������:������дӵ� 3 �ʼ��ÿһ�����ǰ����֮�͡�
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//
//	return 0;
//}



//ѭ����쳲�������
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;

	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d\n", ret);
	return 0;
}