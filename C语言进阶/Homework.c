#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


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

int main()
{
	unsigned long pulArray[] = { 6,7,8,9,10 };
	unsigned long* pulPtr;
	pulPtr = pulArray;
	*(pulPtr + 3) += 3;
	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
	return 0;
}