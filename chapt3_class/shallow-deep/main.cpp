/*************************************************
** ���� : ǳ����-���������ʾ  
** ���� : 
** �汾 : 2019-10-29 / 19:18
** ��Ȩ : GNU General Public License(GNU GPL)
/**************************************************/

#include <iostream>
#include <cstdlib>
#include "student.h"


using namespace std;



/*----------------------------------*
          Main Function
*-----------------------------------*/

int main()
{
	char *name = new char[20];

	strcpy(name, "bill gates");
	
	student zhang(2019,name);

	student wang = zhang;//����ϵͳĬ�ϵĿ������캯��



	zhang.display();

	wang.display();





	system("pause");
	
	return 0;
}