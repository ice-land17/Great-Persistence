#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret); 
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}


int main()
{
	char arr1[] = "hello bit";
	char arr2[20] = { 0 };
	strc py(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}