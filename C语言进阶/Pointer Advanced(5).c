#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}


//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp +3);
//	printf("%s\n", *cpp[-2]+3);
//	printf("%s\n", cpp[-1][-1]+1);
//	return 0;
//}


//����ˮ�ɻ�
//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		int sum = 0;
//		int j = 0;
//		for (j = 1; j <= 4; j++)
//		{
//			int m = i % (int)pow(10, j);
//			int n = i / (int)pow(10, j);
//			sum += m * n;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

////�ж���ĸ
//int main()
//{
//	int ch = getchar();
//	if ((ch >= 'a' && ch <= 'z') || (ch >= "A" && ch <= 'Z'))
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}



//�ַ�����ת
//void left_move(char arr[], int k)
//{
//	int len = strlen(arr);
//	int j = 0;
//	for (j = 0; j < k%len; j++)
//	{
//		char tmp = arr[0];
//		int i = 0;
//		for (i = 0; i < len - 1; i++)
//		{
//			arr[i] = arr[i + 1];
//		}
//		arr[len - 1] = tmp;
//	}
//}
//int main()
//{
//	//����ת�ַ�����
//	char arr[20] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}

//���Ͼ���\
//����1
//void find_k(int arr[3][3], int k, int r, int c)
//{
//	int x = 0;
//	int y = c - 1;
//	int flag = 0;
//	while (x<r && y>=0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���:%d %d\n", x, y);
//			flag = 1;
//			break;
//		}
//	}
//	if(flag == 0)
//	printf("�Ҳ���\n");
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 12;
//	find_k(arr, k, 3, 3);
//	return 0;
//}

//����2
//void find_k(int arr[3][3], int k, int *px, int *py)
//{
//	int x = 0;
//	int y = *px - 1;
//	int flag = 0;
//	while (x < *py && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return;
//		}
//	}
//	//�Ҳ���
//	*px = -1;
//	*py = -1;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 2;
//	int x = 3;
//	int y = 3;
//	find_k(arr, k, &x,&y);
//	if (x == -1 && y == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±�ʺ:%d %d\n", x, y);
//	}
//	return 0;
//}



////��Ŀ ���������кϲ�
////���������������������е����У����������кϲ�Ϊһ���������в����
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int arr1[1000];
//	int arr2[1000];
//	//���յ�һ������
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	//���յڶ���ѧ��
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	//����ϲ���ӡ 
//	i = 0;
//	j = 0;
//	while (i < n && j < m)
//	{
//		if (arr1[i] < arr2[j])
//		{
//			printf("%d ",arr1[i]);
//		i++;
//		}
//		else
//		{
//			printf("%d ", arr2[j]);
//			j++;
//		}
//	}
//	if (i == n)
//	{
//		for (; j < m; j++)
//		{
//			printf("%d ", arr2[j]);
//		}
//	}
//	else
//	{
//		for (; i < n; i++)
//		{
//			printf("%d ", arr1[i]);
//		}
//	}
//	return 0;
//}


////��ӡ��������ͼ��
//int main()
//{
//	int n = 0;
//	while (scanf("%d",&n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j <= i; j++)
//			{
//				if (j == 0 || i == n - 1 || i == j)
//					printf("* ");
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}



////X��ͼ��
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == j || i + j == n - 1)
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}




//��Ŀ:������ɾ��ָ������
//����:��һ����������(�������ظ�������)����ɾ��ָ����ĳһ�������� 
//���ɾ��ָ������֮������У�������δ��ɾ�����ֵ�ǰ��λ��û�з����ı䡣
//���ݷ�Χ : ���г��Ⱥ������е�ֵ������1��n��50
//�������� :��һ������һ������(0sN��50)��
//		 �ڶ�������N�������������ÿո�ָ���N��������
//		 ������������Ҫ����ɾ����һ��������
//������� :���Ϊһ��, ɾ��ָ������֮������С�
int main()
{
	int arr[50] = { 0 };
	int n = 0;
	int del = 0;
	scanf("%d", &n);
	int i = 0;
    int j = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
    //����Ҫɾ����Ԫ��
    scanf("%d", &del);
    //ɾ��
    i = 0;//��������
    j = 0;//��¼���Դ�����ݵĵ�ǰλ��
    for (i = 0; i < n; i++)
    {
        if (arr[i] != del)
        {
            arr[j++] = arr[i];
        }
    }
    //��ӡ
    for (i = 0; i < j; i++)
    {
        printf("%d ", arr[i]);
    }
	return 0;
}