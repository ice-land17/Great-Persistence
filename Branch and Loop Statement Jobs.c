#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////��ҵ1
// �������ִ�еĽ���ǣ�
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
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


С���ּ��㺯����https://www.nowcoder.com/practice/89238e99c36e450786ccf3a9e7481b7b
������С����ѧ�����Զ��庯����BoBo��ʦ�������˸����⣬�������¹�ʽ����m��ֵ��