#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>


//С�ɻ���ϰ��
//int main()
//{
//	printf("     **\n");
//	printf("     **\n");
//	printf("************\n");
//	printf("************\n");
//	printf("    * *\n");
//	printf("    * *\n");
//	return 0;
//}
 

// �ַ�������ϰ
//int main() {
//	printf("%d\n", strlen("c:\test\121"));
//	return 0;
//}


//����ַ�����
//int main()
//{
//    char arr[] = { 'b', 'i', 't' };
//    printf("%d\n", strlen(arr));
//    return 0;
//}


//��֪һ������y = f(x)����x < 0ʱ��y = 1����x = 0ʱ��y = 0����x > 0ʱ��y = -1��
//int main() {
//	int x = 0;
//	int y = 0;
//	//����
//	scanf("%d", &x);
//	//����
//	if (x < 0)
//		y = 1;
//	else if (x = 0)
//		y = 0;
//	else y = -1;
//	//���
//	printf("%d\n", y);
//	return 0;
//}


//�ж�һ�����ܷ�5����
//int main() {
//	int m = 0;
//	scanf("%d\n", &m);
//	if (m % 5 == 0)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}


////дһ�����������������Ľϴ�ֵ �磺���룺10 20 ����ϴ�ֵ��20
//int Max(int x,int y) {
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////����MAX����
//int main() {
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d\n", &n1, &n2);
//	//����
//	int m = Max(n1, n2);
//	printf("%d\n", m);
//	//���
//	return 0;
//}


//��������˵����140�����߳�Ϊ��ţ���֪�����Լ��ǲ�����ţ����������жϡ�
//����һ��������ʾһ���˵����̣�������ڵ���140, ���������һ����ţ����"Genius".
//��������:�������룬ÿ��������� - ��������ʾ�����̡�
//������� :���ÿ�����룬���"Genius".
//��1
//int main() {
//	int iq = 0;
//	while (scanf("%d",&iq) != EOF)
//	{
//		if (iq >= 140)
//			printf("Genius\n");
//	}
//	return 0;
//}
//��2
int main() {
	int iq = 0;
	while (scanf("%d", &iq)==1)
	{
		if (iq >= 140)
			printf("Genius\n");
	}
	return 0;
}

