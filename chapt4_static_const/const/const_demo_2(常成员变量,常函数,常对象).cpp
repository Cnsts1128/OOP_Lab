/*************************************************
** ���� : �����ݳ�Ա,����Ա����,������  
** ���� : tsingke
** ʱ�� : 2019-11-12 / 00:03
***************************************************/

#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

class circle
{

private:

	double R;
	const double pi;//����Ա����
	static int TotalCount;
public:

	circle(double r = 0):pi(3.1415926)
	{
		this->R = r;
		
	}


	//�޸İ뾶
	double getR()     //��ͨ����
	{
		cout << "getR()������" << endl;
		return R;
	}

	//���ʰ뾶
	double getR() const  //����Ա����,��װ����
	{
		cout << "getR()const������" << endl;

		//setR(2);//����,��Ϊ���������ܷ�����ͨ�ǳ�����,ֻ�ܳ��Գ�����
		return R;
	}

	//���ʰ뾶
	void setR(double r)
	{
		R = r;
	}

	//������
	double area()
	{
		getR();//��ͨ�������Է��ʳ�����
		return pi * R*R;
	}

	//����ܳ�
	double circumstance()
	{
		return 2 * pi*R;
	}

};

int circle::TotalCount = 0;//�����ʼ����̬��Ա����


/*----------------------------------*
          Main Function
*-----------------------------------*/

int main()
{


	circle A;//��ͨ�Ķ���
	const circle B(3.5);//������,���γ�ʼ��(���Ҫ��ʼ��)
	const circle C;//������,���ù���Ĭ��ֵ��ʼ��

	cout<< "A.getR() = "<< A.getR()<<endl;//��ͨ������ö�Ӧ�ķǳ�����,����ǳ�����������,�͵��ó�����
	cout<< "B.getR() = " <<B.getR()<<endl;//��������ó�����

	
	A.setR(5.4);//��ȷ,��ͨ����ɷ�������������ͨ����
	//B.setR(12);//����,�������ܷ�����ͨ����,������ʳ���Ա����



	system("pause");
	
	return 0;
}