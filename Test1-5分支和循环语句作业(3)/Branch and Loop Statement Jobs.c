#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////��ҵ1
// �������ִ�еĽ���ǣ�
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)//��ѭ���Ĵ�ӡ5
//			printf("%d ", i);
//	}
//	return 0;
//}

//���ӣ�https://www.nowcoder.com/questionTerminal/7ea144cc71bd4458ac1494ce00037230?
//KiKi��֪���Ӽ���������������Ĵ�С��ϵ������ʵ�֡�
//�������� :��Ŀ�ж����������ݣ�ÿһ������������������Χ��1 ~231 - 1�����ÿո�ָ���
//������� :���ÿ�����룬����������������С��ϵ�����ֺ͹�ϵ�����֮��û�пո�����������������
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	while (scanf("%d %d", &n1, &n2) == 2)//����
//	{
//		if (n1 == n2)
//			printf("%d=%d", n1, n2);
//		else if (n1 < n2)
//			printf("%d<%d", n1, n2);
//		if (n1 > n2)
//			printf("%d>%d", n1, n2);
//	}//���
//	return 0;
//}


////����:��һ����λ�������������https://www.nowcoder.com/practice/1f7c1d67446e4361bf4af67c08e0b8b0
////����������һ�У�����һ������n��1000 <= n <= 9999����
////������������ÿ�����룬���������Ӧ��λ����
////���룺1234
////�����4321
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		printf("%d", num % 10);
//		num = num / 10;
//	}
//	return 0;
//}


////���ӣ�https://www.nowcoder.com/questionTerminal/0fa5132c156b434da4347ad051c4be22
////��������һ��ѧ����3�Ƴɼ�������Ļ�������ѧ�����ܳɼ��Լ�ƽ���ɼ���
////�������� :һ�У�3�Ƴɼ����ɼ�֮����һ���ո������
////������� :һ�У��ܳɼ���ƽ���ɼ���С���������λ������һ���ո������
//����1
//int main()
//{
//	float score1 = 0;
//	float score2 = 0;
//	float score3 = 0;
//	//����
//	scanf("%f %f %f", &score1, &score2, &score3);
//	//����
//	float sum = score1+score2+score3;
//	float avg = sum / 3;
//	printf("%.2f %.2f\n", sum, avg);
//	return 0;
//}
//����2
//int main()
//{
//	int i = 0;
//	float score = 0.0;
//	float sum = 0.0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%f", &score);
//		sum = sum + score;
//	}
//	printf("%.2f %.2f", sum, sum / 3);
//	return 0;
//}


//С���ּ��㺯����https://www.nowcoder.com/practice/89238e99c36e450786ccf3a9e7481b7b
//������С����ѧ�����Զ��庯����BoBo��ʦ�������˸����⣬�������¹�ʽ����m��ֵ��
//#include <stdio.h>
//int max3(int x, int y, int z) {
//    int max = x;
//    if (y > max)
//        max = y;
//    if (z > max)
//        max = z;
//    return max;
//}
//int main() {
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    float m = 0.0;
//    scanf("%d %d %d", &a, &b, &c);
//    m = (float)(max3(a + b, b, c)) / (max3(a, b + c, c) + max3(a, b, b + c));
//    printf("%.2f", m);
//    return 0;
//}



//https://www.nowcoder.com/practice/60d96b08e1cb42e38629d54e37eac008
//����:����һ���༶5��ѧ����5�Ƴɼ������5��ѧ����5�Ƴɼ����ܷ֡�
//�������������У�ÿ������һ��ѧ����5�Ƴɼ�����������ʾ����Χ0.0~100.0�����ÿո�ָ���
//������������У���������˳��ÿ�����һ��ѧ����5�Ƴɼ����ܷ֣�С���㱣��1λ�����ÿո�ָ���
//int main()
//{
//    float score[5] = {0.0};
//    int i = 0;
//    for (i = 0; i < 5; i++)
//    {
//        int j = 0;
//        float sum = 0.0;
//        for (j = 0; j < 5; j++)
//        {
//            scanf("%f", &score[j]);
//            sum = sum + score[j];
//        }
//        //���
//        for (j = 0; j < 5; j++)
//        {
//            printf("%.1f ", score[j]);
//        }
//        printf("%.1f\n", sum);
//    }
//    return 0;
//}



////�Ӽ�������5���˵���ߣ��ף��������ǵ�ƽ����ߣ��ף���
////�������� :һ�У���������5����ߣ���Χ0.00~2.00�����ÿո�ָ���
////������� :һ�У����ƽ����ߣ�������λС����
//int main()
//{
//    int i = 0;
//    float hight = 0.0;
//    float sum = 0.0;
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%f", &hight);
//        sum += hight;
//    }
//    printf("%.2f\n", sum / 5);
//    return 0;
//}



////����:KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�* ����ɵ��߶�ͼ����
////�����������������룬һ��������1~100������ʾ�߶γ��ȣ����� * ����������
////������������ÿ�����룬���ռһ�У��á� * ����ɵĶ�Ӧ���ȵ��߶Ρ�
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int func(int a)
//{
//    int b;
//    switch (a)
//    {
//    case 1: b = 30; //û��break������ִ�е�default, ���Խ��Ϊ0��
//    case 2: b = 20;
//    case 3: b = 16;
//    default: b = 0;
//    }
//    return b;
//}
//��func(1) = ��    0  ��




//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {//��1
//	case 1://����case1
//		switch (y)//yΪ3���޷�����case0��case1;
//		{
//		case 0:/*�޷�����case0*/
//			printf("first");
//		case 1:/*�޷�����case1*/
//			printf("second");
//			break;
//		default: printf("hello"); /*���Խ���default��ӡhello*/
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}




//д���뽫�������������Ӵ�С�����
//���磺���룺2 3 1; �����3 2 1
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = 0;
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = 0;
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}



////��ӡ3�ı�������
////��ҵ����:дһ�������ӡ1 - 100֮������3�ı���������
//int main()//����1 
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}
//int main()//����2
//{
//	int i = 0;
//	for (i = 3; i <= 100; i+=3)
//	{
//			printf("%d\n", i);
//	}
//	return 0;
//}



//���Լ����
//��ҵ���ݣ����������������������������Լ��
//���磺���룺20 40 �����20
//����1
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = (a > b ? b : a);
//	while (1)
//	{
//		if (a % m == 0 && b % m == 0)
//		{
//			break;
//		}
//		m--;
//	}
//	printf("%d\n", m);
//	return 0; 
//}
//����2
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int m = 0;
//	scanf("%d %d", &a, &b);
//	while (m = a % b)
//	{
//		a = b;
//		b = m;
//	}
//	printf("%d\n", b);
//}




////��ҵ����
////��ӡ1000�굽2000��֮�������
////1.�ܱ�4���������Ҳ��ܱ�100���������ꣻ
////2.�ܱ�400����������;
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{ 
//		if ((y % 4 == 0 && y % 100 != 0) || ( y % 400 == 0))
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}



////��ҵ����:дһ�����룺��ӡ100~200֮�������
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{//�ж�����������������ֻ�ܱ�1�����������������֣�
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//}




////��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}



////����1/1-1/2+1/3-1/4+1/5����+1/99-1/100��ֵ����ӡ�����
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag * (1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}




////��10�����������ֵ
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[10];
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("Max = %d", max);
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//
//int main()
//{
//	int  i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}




int main()
{
	int a = 0, b = 0;
	for (a = 1, b = 1; a <= 100; a++)
		//a =1,2,3,4,5,6,7,8
		//b =4,7,10,13,16,19,22,��a=8��b=22ʱ��������ӡ8
	{
		if (b >= 20) break;
		if (b % 3 == 1)
		{
			b = b + 3;
			continue;
		}
		b = b - 5;
	}
	printf("%d\n", a);
	return 0;
}