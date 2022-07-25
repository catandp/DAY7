//指针的定义和操作//32位平台下指针大小都是4无论是生么数据类型
/************************************
#include<iostream>
using namespace std;
int main()
{
	//定义一个指针
	int a = 10;
	//指针定义语法：数据类型*指针变量名
	int* p;
	//让指针指向a的地址
	p = &a;
	cout << "a的地址:" << &a << endl;
	cout << "p的地址：" << p << endl;
	//操作一个指针
	//可以通过解引用的方式来指针指向的内存
	//*p
	*p = 1000;//将10改为1000；间接访问
	cout << *p << endl;
	cout << a << endl;

	system("pause");
	return 0;
}
******************************/
//空指针与野指针
/*******************************
#include<iostream>
using namespace std;
int main()
{
	//空指针用于初始化指针变量
	int* p = NULL;
	//空指针不可以进行访问
	//*p = 1000;错误操作

	system("pause");
	return 0;
}
***************************/
//const修饰指针
// int a=10;
// int b=20;
// int *p=&a
//1.常量指针const int*p=&a
// 特点：常量指针的指向可以改，但是指向的值不能改
// 例子：*p=20(错误)      p=&b;(正确）
//2.指针常量int *const p=&a;p是一个常量
// 特点：指针的指向不可以改，但是指针指向的值可以改
// 例子：*p=20；正确       p=&b;错误
//3.即修饰常量又修饰指针
//特点：指针的指向不可以改，指针指向的值也不可以改
/*************************************
#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 20;
	//int* p = &a;
	//1.const修饰指针
	const int* p = &a;
	p = &b;
	cout << *p << endl;

	//2.const修饰常量
	int* const p2 = &a;
	*p2 = 30;
	cout << a << endl;

	//3.const修饰指针和常量
	const int* const p3 = &a;
	cout << *p3 << endl;
	system("pause");
	return 0;
}
**************************************/
//指针和数组
//利用指针访问数组
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
		cout << "第" << i+1 << "个元素：" << *p << endl;
		p++;
	}
	system("pause");
	return 0;
}
********************************************/
//指针和函数
//指针作为函数的形参
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
	//值传递:形参的改变不改变实参
	int a = 10;
	int b = 20;
	swap(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << a << endl;
	//地址传递：新参的改变会改变实参的值
	int c = 10;
	int d = 20;
	swap2(&c,&d);
	cout << "c=" << c << endl;
	cout << "d=" << d << endl;
	system("pause");
	return 0;
}
*************************************************/
//指针、数组、函数的案例
//冒泡排序
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
	//1.创建数组
	int arr[10] = { 2,5,3,9,6,1,8,7,0,4 };
	int len = sizeof(arr) / sizeof(int);
	//2.写一个函数实现冒泡排序
	bubblesort(arr, len);
	//3.打印数组
	printArr(arr, len);
	system("pause");
	return 0;
}