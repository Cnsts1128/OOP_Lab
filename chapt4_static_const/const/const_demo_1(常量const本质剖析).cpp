/*************************************************
** ���� : const���ʣ�constջ������constȫ�������� �ܷ��޸�?
** ���� : tsingke
** ʱ�� : 2019-11-11 / 23:36
***************************************************/

#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;


const int global = 100;

/*----------------------------------*
		  Main Function
*-----------------------------------*/

int main()
{

#if 1
	//����1: const���ε�ջ�ϵĳ���,ͨ��ָ����Լ��ʵ�ֶ����޸�

	const int  local = 10;//����������е�local�ڱ���ʱ�����滻Ϊ10

	cout << "const local = " << local << endl;

	//��ͼͨ��ָ���޸��������

	int *p1 = (int*)(&local);

	*p1 = 20;

	cout << "const local = " << *p1 << endl;

	cout << "local��ַ   = " << &local << endl;
	cout << "p1ָ��ĵ�ַ = " << p1 << endl;

#endif

	//---------------------------------------------

#if 0
//����2:const���ε�ȫ�����ϵĳ���,ͨ��ָ���޷���������޸�(����ʱ�ᱨ�쳣)

	int *p2 = (int*)(&global);

	cout << "const global = " << global << endl;

	*p2 = 200;

	cout << "const global = " << *p2 << endl;

	cout << "global��ַ  = " << &global << endl;
	cout << "p2ָ��ĵ�ַ = " << p2 << endl;

#endif


	system("pause");

	return 0;
}
