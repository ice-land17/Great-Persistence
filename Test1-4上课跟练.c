#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//static��C������:
//static���������α����ͺ�����
////1.���ξֲ�������Ϊ��̬�ֲ�����
//void test()					
//{						
//	int n = 1;
//	n++; 
//	printf("%d ", n);
//}
//int main() {
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
////static���ξֲ�������ʱ�򣬸ı��˾ֲ������Ĵ洢����:����һ���ֲ������Ǵ洢��ջ���ģ�
////��static���εľֲ������Ǵ洢�ھ�̬���ġ��洢�ھ�̬���ı��������������������Ҳ�����٣�
////�����������ڽϳ���static���εľֲ��������������ںͳ������������һ����
//void test()
//{
//	static int n = 1;
//	n++; 
//	printf("%d ", n);
//}
//int main() {
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//2.����ȫ�ֱ�����Ϊ��̬ȫ�ֱ���
// static����ȫ�ֱ�����ʱ�򣬸ı���ȫ�ֱ�������������:
//����һ��ȫ�ֱ����Ǿ����ⲿ�������Եģ����Ǳ�static����֮���
//������ڲ��������ԡ���ʱstatic���ε�ȫ�ֱ���ֻ���ڱ�Դ�ļ�(.c)��ʹ�ã������ļ��޷���ʹ�õ���
//extern �����������ⲿ���ŵ�
//extern int g_val;
//int main() {
//	printf("%d\n", g_val);
//	return 0;
//}

//
////3.���κ�����Ϊ��̬����
////���������ⲿ�ĺ���
//extern int Add(int, int);
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}



////define ���峣���ͺ�
//
////#define���峣��
//#define NUM 100
//#define STR "hehe"
//int main() {
//	printf("%d\n", NUM);
//	printf("%s\n", STR);
//	return 0;
//}
////define ����꣬�����в�����
//#define ADD(x,y)(x+y)
//int main() {
//	int a = 10;
//	int b = 20;
//	int sum = ADD(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}



//*˵��pa��ָ�����
//int ��˵��paָ��Ķ�����int����
//int main() {
//	int a = 10;
//	int* pa = &a;//&ȡ��ַ
//	*pa = 20;//�����ò�����
//	printf("%d\n", a);
//	//ָ�������������ŵ�ַ��һ�ֱ���
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}

////1.�ڴ�ᱻ����ΪС���ڴ浥Ԫ,һ���ڴ浥Ԫ�Ĵ�С��1���ֽ�
////2.ÿ���ڴ浥Ԫ���б�ţ�������Ҳ����Ϊ:��ַ/ָ��
////3.��ַ/ָ��Ϳ��Դ����һ�������У������������νָ�����
////4.ͨ��ָ������д洢�ĵ�ַ�������ҵ�ָ��ָ��Ŀռ�


//int main() {
//	char ch = 'w';
//	int n = 100;
//	double d = 3.14;
//
//	char* pc = &ch;
//	int* pi = &n;
//	double* pd = &d;
//
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(pi));
//	printf("%d\n", sizeof(pd));
//
//	return 0;
//}
//ָ�������������ŵ�ַ��
//��ַ�Ĵ����Ҫ���ռ䣬ָ������Ĵ�С��Ӧ���Ƕ��
//32λ���� - ֧��32λ�����ַ�ռ� - �����ĵ�ַ����32bitλ - ��Ҫ32bit�Ŀռ�洢4byte - ָ������Ĵ�С��4byte
//64λ���� - ֧��64λ�����ַ�ռ� - �����ĵ�ַ����64bitλ - ��Ҫ64bit�Ŀռ�洢8byte - ָ������Ĵ�С��8byte



//�ṹ��
//����һ��ѧ��
//������һ��ѧ������
//struct Stu {
//	char name[20];
//	int age;
//	char sex[5];
//	double score;
//};
//int main() {
//	struct Stu s1 = { "����",20,"��",90.5 };
//	struct Stu s2 = { "����",30,"Ů",93.5 };
//	struct Stu s3 = { "����",35,"��",98.5 };
//	scanf("%s %d %s %lf", s1.name, &(s1.age), s1.sex, &(s1.score));
//	//��߽ṹ��������ұ߽ṹ���Ա
//	printf("%s %d %s %lf\n", s1.name, s1.age, s1.sex, s1.score);//�ṹ��Ա���ʲ�����
//	struct Stu* ps = &s2;
//	struct Stu* pd = &s3;
//	printf("%s %d %s %lf\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).score);//���ִ�ӡ����
//	printf("%s %d %s %lf\n", pd->name,pd->age,pd->sex,pd->score);
//	//���ִ�ӡ���� ->�ṹ��Ա���ʲ����� ���ṹ��ָ��->�ṹ���Ա
//	return 0;
//}

