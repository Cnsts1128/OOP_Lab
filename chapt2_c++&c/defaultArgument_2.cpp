/*************************************************
** ���� : ����Ĭ���β���ʾ  
** ���� : tsingke
** ʱ�� : 2019-9-23 / 23:29
***************************************************/

#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

void plot(int x , int y , int z = 0, char color = 'B');


//void plot(int x, int y, int z, char color)
//{
//
//	cout << "����x= " << x << endl;
//	cout << "����y= " << y << endl;
//	cout << "����z= " << z << endl;
//
//	cout << "��ɫ c= "  <<color << endl ;
//
//}



//void plot(int x=0, int y=1, int z=0, char color='B')
//{
//
//	cout << "------ͼ�εĻ�����Ϣ������ʾ-------" << endl ;
//	cout << "����x= " << x << endl;
//	cout << "����y= " << y << endl;
//	cout << "����z= " << z << endl;
//
//	cout << "��ɫ c= " << color << endl;
//
//}




/*----------------------------------*
          Main Function
*-----------------------------------*/

int main()
{
	

	int a = 3, b = 4, c = 5;
	char color = 'R';

	plot(a, b, c, color);//һһ��Ӧ�ķ�ʽ

	plot(a, b);//
	




	system("pause");
	
	return 0;
}



//�����Ĭ���βεĺ���ʱ,��Ҫ����Ĭ��ֵ,ֻ������ʱ����!!!!
void plot(int x, int y, int z, char color)
{

	cout << x << y << z << color<< endl;


}