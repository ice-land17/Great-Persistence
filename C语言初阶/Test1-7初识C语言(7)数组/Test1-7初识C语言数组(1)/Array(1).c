#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



////����Ĵ���
//int main()
//{
//	//���飺һ����ͬ����Ԫ�صļ���
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[100] = { 0 };
//	return 0;
//}


////����ĳ�ʼ��
//int main()
//{
//	int arr1[10] = { 1,2,3,4 };//����ȫ��ʼ��
//	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10,11 };//��ʼֵ�趨��ֵ̫��
//	char ch1[] = { 'a','b','c' };
//	char ch2[] = { 'a','98','c' };
//	return 0;
//}


//��������Ԫ�ظ���
//int main()
//{
//	int arr[100] = { 1,2,3,4,5,6 };
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}


//��������Ԫ�ظ�����д��
//int main()
//{
//	int arr[300] = { 1,2,3,4,5,6 };
//	int sz = sizeof(arr) / sizeof(arr)[0];
//	int i = 0;
//		for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}




////һά�������ڴ��еĴ洢
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p \n", i, &arr[i]);
//	}
//	return 0;
//}




//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[0];
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p <===> %p\n", i, &arr[i]);
//	}
//	return 0;
//}



////��ά����Ĵ���
//int main()
//{
//	int arr[3][5]= {1,2,3,4,5,6 };//��ʼ����һ���֣�����ȫ��ʼ��
//		  //��  ��
//
//	return 0;
//}


//��ά����Ĵ���,����
//int main()
//{
//	int arr2[][5] = { {1,2},{4,5},{5,6} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr2[i][j]);
//		}
//		printf("\n");
//	}
//}



////���ʵ�ַ
//int main()
//{
//	int arr[3][5] = { {1,2},{4,5},{5,6} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}



////����Խ��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10, };
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}




//��������ʲô;����������Ԫ�صĵ�ַ
//�����������û���⣬���������⣻
//(1)siezeof(������),������������Ԫ�صĵ�ַ����������ʾ��������.
//(2)&������������������������Ԫ�صĵ�ַ����������ʾ�������飬ȡ��������������ĵ�ַ.
//int main()
//{	
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	/*printf("%d\n", sizeof(arr));*/
//	return 0;
//}

void bubble_sort(int arr[],int sz)
{ 
	

	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//ÿһ��ð���������
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//����
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j+1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//дһ��ð������ĺ�����������arr���������
	/*ð������:������2�����ڵ�Ԫ�ؽ��бȽϣ����������˳��ͽ���
	����Ϊ����!*/
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}