//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

//if���

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18)
//		printf("������\n");
//	else
//		printf("��������");
//		return 0;
//}
////C��������α�ʾ��٣�0��ʾ�٣���0��ʾ��
//int main() {
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("������\n");
//	else if (age >= 18 && age < 30)
//		printf("����\n");
//	else if (age >= 30 && age < 50)
//		printf("����\n");
//	else if (age >= 50 && age < 80)
//		printf("׳��\n");
//	else if (age >= 80 && age < 100)
//		printf("����\n");
//	else
//		printf("������\n");
//	return 0;
//}


//int sum(int a)
//{
//    int c = 0;
//    static int b = 3;
//    c += 1;
//    b += 2;
//    return (a + b + c);
//}
//int main()
//{
//    int i;
//    int a = 2;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d,", sum(a));
//    }
//}



////�ж�һ�����Ƿ�������
//int main() 
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (1 == n % 2)
//	{
//		printf("����\n");
//	}
//	return 0;
//}

////���1��100������,���ַ���:
//int main()
//{
//	int i = 0;
//	while (i <= 100)
//	{
//		if (i % 2)
//		{
//			printf("%d\n", i);
//		}
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i<=100)
//	{
//		printf("%d ", i);
//		i = i + 2;
//	}
//}



//switch���Ҳ��һ�ַ�֧��䡣�������ڶ��֧�������
//����1����if���
//int main() {
//	int day = 0;
//	scanf("%d", &day);
//	if (day == 1)
//		printf("��һ\n");
//	else if (day == 2 )
//		printf("�ܶ�\n");
//	else if (day == 3)
//		printf("����\n");
//	else if (day == 4)
//		printf("����\n");
//	else if (day == 5)
//		printf("����\n");
//	else
//		printf("����\n");
//	return 0;
//}

////switch��䣺
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("��һ\n");
//		break;
//	case 2:
//		printf("�ܶ�\n");
//		break;
//	case 3:
//		printf("����\n");
//		break;
//	case 4:
//		printf("����\n");
//		break;
//	case 5:
//		printf("����\n");
//		break;
//	case 6:
//		printf("����\n");
//		break;
//	case 7:
//		printf("����\n");
//		break;
//	}
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//			printf("�������\n");
//			break;
//	}
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;//����case1��m��3
//	case 2:
//		n++;//����case2��n��2
//	case 3:
//		switch (n)
//		{//switch����Ƕ��
//		case 1:
//			n++;//����Ƕ��case1,n=3
//		case 2:
//			m++; n++; //����Ƕ��case2, m=3+1=4,n=2+1=3;
//			break;//����
//		}
//	case 4:
//		m++;//����case4��m+1=4+1=5
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n", m, n);
//	//����������ӡm=5,n=3;
//	return 0;
//}
