#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	float a = 3 / 2.0;
//	printf("%f\n", a);
//	return 0;
//}

//��λ������
//int main()
//{
//	int a = 5;
//	int b = a << 1;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = -5;
//	int b = a << 1;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = 5;
//	int b = a >> 1;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//int main()
//{
//	int a = -5;
//	int b = a >> 1;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}



//λ������
//&^ |
//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a & b;
//	printf("%d\n", c);//��ӡ3
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a | b;
//	printf("%d\n", c);//��ӡ-5
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a ^ b;
//	printf("%d\n", c);//��ӡ-8
//	//��Ӧ�Ķ�����λ����ͬλ0������Ϊ1��
//	return 0;
//}



//int main()
//{
//	int num1 = 1;
//	int num2 = 2; 
//	int num4 = num1 & num2;//0
//	int num5 = num1 | num2;//3
//	int num6 = num1 ^ num2;//3
//	printf("%d %d %d", num4, num5, num6);
//	return 0;
//}



//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}



////��д����ʵ��:��һ�������洢���ڴ��еĶ�������1�ĸ�����
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}



//c������c99֮ǰû�б�ʾ��ٵ�����
//c99�������˲�������
//#include <stdbool.h>
//int main()
//{
//	_Bool flag1 = false;
//	bool flag2 = true;
//	if (flag2)
//	{
//		printf("hehe\n");
//	}
//}
//int main()
//{
//	int num = 10;
//	if (num)
//	{
//
//	}
//	if (!num)
//	{
//	}//numΪ��,������
//}



//int main()
//{
//	int a = -10;
//	int b = -a;
//	printf("%d\n", b);
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	//&ȡ��ַ������
//	//*�����ò�����(��ӷ��ʲ�������
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;//*-�����ò�����
//	int arr[10] = { 0 };
//	&arr;//ȡ������ĵ�ַ������ĵ�ַӦ�÷ŵ�����ָ����ȥ
//	struct S s = { 0 };
//	struct  S* ps = &s;
//	return 0;
//}

//sizeof��һ�������������Ǻ���
//�������ʹ����ı�����ռ�ڴ�Ĵ�С����λ���ֽ�
//int main()
//{
//	//int a = 10;
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(int));
//	//int arr[10] = { 0 };
//	//printf("%d\n", sizeof(arr));
//	int a = 10;
//	short s = 0;
//	printf("%d\n", sizeof(s = a + 2));
//	printf("%d\n", s);
//	return 0;
//}



int main()
{
	int a = 0;
	printf("%d\n", ~a);//��һ�����Ķ�����Ϊ��λȡ��
	return 0;
}