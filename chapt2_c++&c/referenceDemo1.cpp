/*************************************************
** ���� : ���õ��÷�  
** ���� : tsingke
** ʱ�� : 2019-10-8 / 14:50
***************************************************/

#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;


void swap(int &x, int &y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;

}


int& func(int &x, int &y)
{


	int x = x + y;


	return x;

}

/*----------------------------------*
          Main Function
*-----------------------------------*/

int main()
{


	int a = 88;

	int b = 66;

	int &r = a;

	int &rrrrr = a;




	//r = 99;

	cout << "a= " <<a<< endl;
	cout << "r= " <<r<< endl;

	cout << "a�ĵ�ַ=" << &a << endl;
	cout << "r�ĵ�ַ=" << &r << endl;
	cout << "rrrr�ĵ�ַ=" << &rrrrr << endl;


	

	cout << "a= " << a << endl;
	cout << "b= " << b << endl;


	int c = a+b;
	swap(c, b);


	cout << "a= " << a << endl;
	cout << "b= " << b << endl;




	func(a, b);

	int xx= func(a, b) + 18;

	func(a, b) = 4;//x=4;







	system("pause");
	
	return 0;
}