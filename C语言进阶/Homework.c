#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//int i;//ȫ�ֱ������û�г�ʼ����Ĭ�ϻᱻ��ʼ��Ϊ0
//int main()
//{
//    i--;//-1
//    if (i > sizeof(i))//sizeof��һ����������������������صĽ����size_t�ģ�size_t���޷�������
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}

//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//��++����ʹ�� a=6��c=6 
//	b = ++c, c++, ++a, a++;//7  7  8  7  8
//	b += a++ + c;
//	//a++=��ʹ�ã���++ a=9��+C=8  a+c=16  b(7)+=a(8)+c(8)=23 b=23
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}




//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :1999 2299
//������� : 7
//int main()//��ʽ1
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int i = 0;
//	int diff = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			diff++;
//		}
//	}
//	printf("%d\n", diff);
//	return 0;
//}

//int main()//��ʽ2
//{
//	int m = 0; 
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int i = 0;
//	int diff = 0;
//	int tmp = m ^ n;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		diff++;
//	}
//	printf("%d\n", diff);
//	return 0;
//}


//��ӡ���������Ƶ�����λ��ż��λ
//��ҵ����
//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	int i = 0;
//	//����λ
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	//ż��λ
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	return 0;
//}

////����������ʱ������������������������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	a = a + b;  // a+b֮�͸���a
//	b = a - b; //  ��-bΪa����b 
//	a = a - b; //  ��-b��b��a��ֵ��Ϊb����a 
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//}



//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}//00345

//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}

//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}

//ʹ��ָ���ӡ��������
//��ҵ����:дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//arr��һ������һά���顣

//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

////дһ����������������һ���ַ��������ݡ�
//int main()
//{
//	char arr[10000] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	char* left = arr;
//	char* right = arr + len - 1;
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//	printf("%s\n", arr);
//	return 0;
//}


//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//�� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ������� 
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//�ж�i�Ƿ���������
//		//1.����i��λ��
//		int n = 1;
//		int tmp = i;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2.����ÿһλ��n�η�֮��
//		tmp = i;
//		int sum = 0;
//		while (tmp)//1234
//		{
//			sum += (int)pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//�Ƚ�
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < n - 1 - i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 0; i < n - 1; i++)
    {
        int j = 0;
        for (j = 0; j <= i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < (n - 1 - i) * 2 - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}