#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
//int main()
//{
//	//char arr[] = "abcdef";
//	char arr[] = {'a','b','c','d','e','f'};
//	int len = strlen(arr);
//	printf("%d\n", len);
//}

//int main()
//{
//	if (strlen("abc") - strlen("qwerty") > 0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//}



////strlen������ģ��ʵ��		
////1.����������
//size_t my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}
////2.�ݹ�ķ���
////3.ָ���ָ��ķ���



////strcpy �ַ�������
//int main()
//{
//	char arr1[20] = { 0 };
//	/*char arr2[] = "abcdef";*/
//	char arr2[10] = { 'a','b','c',};
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

////strcpyģ��ʵ��
////strcpy�����ķ������͵�������Ϊ��ʵ����ʽ����
//char* my_strcpy(char*dest,const char* src)
//{
//	assert(src && dest);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char* arr2 = "hello bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


////strcat����
//char* my_strcat(char* dest, char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest)//��Ŀ��ռ��е�\0
//	{
//		dest++;
//	}
//	//����
//	while(*dest++=*src++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = " bit";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//		while (*s1 == *s2)
//		{
//			if (*s1 == '\0')
//			{
//				return 0;
//			}
//			s1++;
//			s2++;
//		}
//	return *s1 - *s2;
//}
//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = "abdc";
//
//	int ret = my_strcmp(arr1, arr2);
//
//	if (ret >0)
//	{
//		printf(">\n");
//	}
//	else if (ret == 0)
//	{
//		printf("== \n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//
//	printf("%d\n", ret);
//
//	// 1 0 -1
//	// 
//	//strcmp�����ȽϵĲ����ַ����ĳ��ȣ�������
//	//���ǱȽ��ַ����ж�Ӧλ���ϵ��ַ��Ĵ�С�������ͬ���ͱȽ���һ�Զ���ֱ����ͬ���߶�����\0
//	//
//	return 0;
//}




//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "qwertyuiop";
//	strncpy(arr1, arr2, 5);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "qwe";
//	strncat(arr1, arr2, 5);
//	printf("%s\n", arr1);
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "qwertyuiop";
//	int ret = strncmp(arr1, arr2,4);
//	printf("%d\n", ret);
//	return 0;
//}



char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);

	const char* s1 = str1;
	const char* s2 = str2;

	const char* cur = str1;
	while (*cur)
	{
		s1 = cur;
		s2 = str2;

		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char*)cur;
		}
		cur++;
	}

	return NULL;//�Ҳ���
}

//
//�����Ӵ���ʱ��
//KMP�㷨 - Bվ�����ش󲩸�
//

int main()
{
	char arr1[] = "abbbcdef";
	char arr2[] = "bbc";
	char* ret = my_strstr(arr1, arr2);
	if (NULL == ret)
	{
		printf("�Ҳ����Ӵ�\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}