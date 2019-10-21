/*************************************************
** ���� : try-catch ԭ������  
** ���� : tsingke
** ʱ�� : 2019-10-7 / 20:17
***************************************************/

#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;



void func1(int a);
void func2(int a);
void func3(int a);
void func4(int a);


//�������ù�ϵ: fun1-->func2-->func3-->func4
/*----------------------------------*
          Main Function
*-----------------------------------*/

int main()
{	

	int x;

	cout << "����������x= ";
	cin >> x;

	try
	{
		func1(x);

	}
	catch (const int e)
	{
		cout << "�������ڴ����쳣" << endl;
	}


	system("pause");
	
	return 0;
}

//-------------------�Ӻ�������--------------------

void func1(int a)
{

	if (a == 1)
	{
		throw 1;
	}


	try
	{
		func2(a);

	}
	catch (int e)
	{
		cout << "func1 �ڴ����쳣" << endl;

	}


	cout << " i am func1" << endl;


}


void func2(int a)
{
	if (a == 2)
	{
		throw 2;
	}

	try
	{
		func3(a);

	}
	catch (int e)
	{
		cout << "func2 �ڴ����쳣" << endl;

	}
	cout << " i am func2" << endl;


}

void func3(int a)
{
	if (a == 3)
	{
		throw 3;
	}
	try
	{
		func4(a);

	}
	catch (int e)  
	{
		cout << "func3 �ڴ����쳣" << endl;

	}
	cout << " i am func3" << endl;


}

void func4(int a)
{
	if (a == 4)
	{
		throw 4;//��������쳣,����������佫����ִ��
	}

	cout << " i am func4" << endl;

}
