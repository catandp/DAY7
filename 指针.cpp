//ָ��Ķ���Ͳ���//32λƽ̨��ָ���С����4��������ô��������
/************************************
#include<iostream>
using namespace std;
int main()
{
	//����һ��ָ��
	int a = 10;
	//ָ�붨���﷨����������*ָ�������
	int* p;
	//��ָ��ָ��a�ĵ�ַ
	p = &a;
	cout << "a�ĵ�ַ:" << &a << endl;
	cout << "p�ĵ�ַ��" << p << endl;
	//����һ��ָ��
	//����ͨ�������õķ�ʽ��ָ��ָ����ڴ�
	//*p
	*p = 1000;//��10��Ϊ1000����ӷ���
	cout << *p << endl;
	cout << a << endl;

	system("pause");
	return 0;
}
******************************/
//��ָ����Ұָ��
/*******************************
#include<iostream>
using namespace std;
int main()
{
	//��ָ�����ڳ�ʼ��ָ�����
	int* p = NULL;
	//��ָ�벻���Խ��з���
	//*p = 1000;�������

	system("pause");
	return 0;
}
***************************/
//const����ָ��
// int a=10;
// int b=20;
// int *p=&a
//1.����ָ��const int*p=&a
// �ص㣺����ָ���ָ����Ըģ�����ָ���ֵ���ܸ�
// ���ӣ�*p=20(����)      p=&b;(��ȷ��
//2.ָ�볣��int *const p=&a;p��һ������
// �ص㣺ָ���ָ�򲻿��Ըģ�����ָ��ָ���ֵ���Ը�
// ���ӣ�*p=20����ȷ       p=&b;����
//3.�����γ���������ָ��
//�ص㣺ָ���ָ�򲻿��Ըģ�ָ��ָ���ֵҲ�����Ը�
/*************************************
#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 20;
	//int* p = &a;
	//1.const����ָ��
	const int* p = &a;
	p = &b;
	cout << *p << endl;

	//2.const���γ���
	int* const p2 = &a;
	*p2 = 30;
	cout << a << endl;

	//3.const����ָ��ͳ���
	const int* const p3 = &a;
	cout << *p3 << endl;
	system("pause");
	return 0;
}
**************************************/
//ָ�������
//����ָ���������
/********************************
#include<iostream>
using namespace std;
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int* p;
	p = arr;
	for (int i = 0; i < 5; i++)
	{
		cout << "��" << i+1 << "��Ԫ�أ�" << *p << endl;
		p++;
	}
	system("pause");
	return 0;
}
********************************************/
//ָ��ͺ���
//ָ����Ϊ�������β�
/***********************************************
#include<iostream>
using namespace std;
void swap(int num1, int num2)
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
	cout <<"num1="<< num1 << endl;
	cout <<"num2="<< num2 << endl;
}
void swap2(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	cout << "*p1=" << *p1 << endl;
	cout << "*p2=" << *p2 << endl;
}
int main()
{
	//ֵ����:�βεĸı䲻�ı�ʵ��
	int a = 10;
	int b = 20;
	swap(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << a << endl;
	//��ַ���ݣ��²εĸı��ı�ʵ�ε�ֵ
	int c = 10;
	int d = 20;
	swap2(&c,&d);
	cout << "c=" << c << endl;
	cout << "d=" << d << endl;
	system("pause");
	return 0;
}
*************************************************/
//ָ�롢���顢�����İ���
//ð������
#include<iostream>
using namespace std;
void bubblesort(int* arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void printArr(int* arr,int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main()
{
	//1.��������
	int arr[10] = { 2,5,3,9,6,1,8,7,0,4 };
	int len = sizeof(arr) / sizeof(int);
	//2.дһ������ʵ��ð������
	bubblesort(arr, len);
	//3.��ӡ����
	printArr(arr, len);
	system("pause");
	return 0;
}