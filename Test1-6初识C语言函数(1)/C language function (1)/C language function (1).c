#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>


////strcpy����ʹ�÷���
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };//�ܰ�arr1�е�abcdef������arr2��
//	strcpy(arr2, arr1);
//	printf("%s\n ", arr2);
//	return 0;
//}




////memset����ʹ�÷���
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr+6, 'X', 3);
//	//1.�����ڴ��ʱ�������ֽ�Ϊ��λ��
//	//2.ÿ���ֽڵ����ݶ���һ��value
//	printf("%s\n", arr);
//	return 0;
//}




////�Ƚ��������ִ�С
//get_Max(int x, int y)
//{
//	/*if (x > y)
//		return x;
//	else
//		return y;*/
//	return(x > y ? x : y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d" ,&a,&b);
//	//ʹ�ú�����a��b�Ľϴ�ֵ
//	//Max();
//	int m = get_Max(a, b);
//	printf("%d \n", m);
//	return 0;
//}




//дһ���������Խ����������α���������
// ��ʵ�δ����βε�ʱ���β���ʵ�ε�һ����ʱ���������βε��޸Ĳ���Ӱ��ʵ�Ρ�
//�β�
//void swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void swap2(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("����ǰ: a=%d,b=%d\n", a, b);
//	swap2(&a,&b);
//	printf("������: a=%d,b=%d\n", a, b);
//	return 0;	
//}



////�ж�����
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if(n%j==0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


////�ж��ǲ�������
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int count = 0;
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\nһ���ж��ٸ����� = %d\n", count);
//}





//���ֲ��ҷ���
//int bianry_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = bianry_search(arr, k,sz);
//	if (-1 == ret)
//		printf("�Ҳ���\n");
//	else
//		printf("�ҵ��ˣ��±�Ϊ: %d\n",ret);
//	return 0;
//}



////дһ��������ÿ����һ������������ͻὫnum��ֵ��1
//void test(int* p)
//{
//	*p = *p + 1;
//}
//int main()
//{
//	int num = 0;
//	test(&num);
//	printf("%d\n", num);
//	test(&num);
//	printf("%d\n", num);
//	test(&num);
//	printf("%d\n", num);
//	test(&num);
//	printf("%d\n", num);
//	test(&num);
//	printf("%d\n", num);
//	return 0;
//}




//��ʽ���ʷ���
int main()
{
	/*int len = strlen("abcdef");
	printf("len= %d\n", len);*/
	printf("%d", printf("%d", printf("%d", 43)));
	return 0;
}