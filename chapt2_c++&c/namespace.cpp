/*************************************************
** ���� : namespace  
** ���� : tsingke
** ʱ�� : 2019-9-23 / 21:33
***************************************************/

#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <string>

using namespace std;

namespace one
{

	int id;
	double salary;
}


namespace two
{

	int id;
	double salary;
}

namespace three
{

	int id;
	double salary;
	string address;
}
/*----------------------------------*
          Main Function
*-----------------------------------*/

using namespace one;

int main()
{


	/*-ȫ�����뷨-*/
	id = 2018;

	salary = 100000;


	/*-������ȡ��-*/

	two::id = 2019;
	two::salary = 50000;
	
    

	/*-���ֵ��뷨-*/

	using three::id;

	id = 100;

	cout << "one::id = "<< one::id << endl;

	id = 999999;
	cout << "two::id = " <<id<< endl;

	cout << "one::id = "<< one::id << endl;

	//address = "sdnu";
	three::address = "sdnu";


	cout << three::address << endl;



	system("pause");
	
	return 0;
}