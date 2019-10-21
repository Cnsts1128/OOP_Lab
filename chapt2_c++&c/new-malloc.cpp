/*************************************************
** ���� : new��malloc��ʹ����ʾ 
** ���� : tsingke
** ʱ�� : 2019-10-7 / 12:34
***************************************************/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <windows.h>

using namespace std;


/*----------------------------------*
          Main Function
*-----------------------------------*/

int main()
{

	/*----------------------------------*
	            ʹ��malloc �� free
	*-----------------------------------*/

	int *p1;

	p1= (int*)malloc(sizeof(int) * 10);

	

	memset(p1, 0, 10*sizeof(int));//��ʼ��Ϊ0

	for (int i = 0; i < 10; i++)
	{
		cout << p1[i] << " ";
	}

	cout << endl;



	//��ʼ��
	for (int  i = 0; i < 10; i++)
	{
		p1[i] = i;
		
		cout << (p1[i]) << " ";
	}

	cout << endl;


	/*-�������Ԫ�ص�����洢��ַ-*/

	for (int i = 0; i < 10; i++)
	{
		cout << "��ַ: " << &p1[i] << endl;

	}

	cout << endl;

	free(p1);



	int *p3 = (int*)calloc(10, sizeof(int));

	for (int i = 0; i < 10; i++)
	{
		cout << p3[i] << " ";
	}

	cout << endl;


	/*----------------------------------*
	            ʹ��new �� delete
	*-----------------------------------*/


	int *p2;
	p2 = new int[10];

	for (int i = 0; i < 10; i++)
	{
		p2[i] = i*i;

		cout << p2[i] <<" ";
	}

	cout << endl;

	/*-�������Ԫ�ص�����洢��ַ-*/

	for (int i = 0; i < 10; i++)
	{
		cout << "��ַ: " << &p2[i] << endl;

	}

	delete[] p2;



	/*----��ά���������-----*/

	int(*pt)[5] = new int[4][5];//pt[4][5]

	//��ʼ���ķ���
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			pt[i][j] = i * j;

			cout << pt[i][j]<<" ";
		}

		cout << endl;
	}



	int(*ptt)[4][6] = new int[3][4][6];//ptt[3][4][6]

	delete[] pt;

	delete[] ptt; 




	system("pause");
	
	return 0;
}