#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



//����ָ��



//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	char* pc = &ch;
//
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pc));
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc+1);
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int* q = NULL;
//	if (q != NULL)
//	{
//
//	}
//	p = NULL;
//	return 0;
//}



////����ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��ָ�������һ��ָ�룩
//	int** ppa = &pa;//ppa��һ������ָ��
//	int*** pppa = &ppa;//pppa��������ָ��
//	return 0;
//}


//ָ������-���ָ�������
//��������
//int main()
//{
//	int arr[5];//ָ������-������ε�����
//	char ch [6];//�ַ�����-����ַ�������
//	int a = 10;
//	int b = 11;
//	int c = 12;
//	int d = 13;
//	int e = 14;
//	int* arr2[5] = { &a,&b,&c,&d,&e };//ָ������
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", *(arr2[i]));
//	}
//	return 0;
//}



int main()
{
	int data1[] = { 1,2,3,4,5 };
	int data2[] = { 2,3,4,5,6 };
	int data3[] = { 3,4,5,6,7 };
	int* arr[3] = {data1,data2,data3};
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}