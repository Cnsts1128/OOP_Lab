/*************************************************
** ���� : ����Ⱥ�Ż��㷨��ʾ
** ���� : tsingke
** ʱ�� : 2019-11-22 / 10:54
***************************************************/

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <windows.h>

#include "PSO.h"
#include "function.h"

using namespace std;

//�㷨������������
int POPSIZE = 40;        //��Ⱥ������Ŀ
int MAX_ITER = 7500;     //��������


double accuracy = 1e-100; //��������,����


//������Χ����(λ�÷�Χ,�ٶȷ�Χ)
double xmax = 10;
double xmin = -10;

double vmax = 10;
double vmin = -10;

bool success = 0;
/*----------------------------------*
          Main Function
*-----------------------------------*/

int main()
{

	srand((unsigned)time(NULL));//����α���������

	//1. �ڶ�������PSO��Ķ�������,��������Ⱥ,��POPSIZE������
	PSO *swarm=new PSO[POPSIZE];


	//2. ��ʼ������Ⱥ���������Ӹ������Ϣ(λ��,�ٶ�,..��)
	for (int i = 0; i < POPSIZE; i++)
	{
		swarm[i].initi(xmin,xmax,vmin,vmax);
	}

	//3. ѭ������-����Ŀ�꺯����ȫ�����Ž�

	cout << "---------------�㷨��ʼ����-------------------" << endl;

	for (int iter = 0; iter < MAX_ITER; iter++)
	{
		for (int id = 0; id < POPSIZE; id++)
		{
			swarm[id].updatePbestX();//���¸���ֲ�����λ��
			swarm[id].updateGbestX();//����Ⱥ��ȫ������λ��

	
			swarm[id].updateV(iter);//���¸����ٶ�

			swarm[id].updateX(iter);//���¸���λ��

			swarm[id].computeFitness(swarm[id].getX(),DIMENSION);//���������Ӧ��

	
		}

		//�ж��Ƿ�ﵽҪ��
		if (PSO::getGbestFitness() <= accuracy)//�ﵽ�趨�ľ���,��;������,��ֹͣ��������
		{
			cout << "���������Ͼ��ȵĽ�(����),�㷨ֹͣ����" << endl;

			PSO::printGbestX();       //���ȫ�����Ž�����		
			PSO::printGbestFitness(); //���ȫ�����Ž�ľ���
			success = 1;
			break;//����ѭ��,ֹͣ����
		}


		cout << "��������" << iter << "��, ���������Ӧ����ֵ= " << PSO::getGbestFitness()<<endl;

	}

	//4. ���ʵ����(δ�ﵽ�趨����,��Ȼ������)
	if (success==0)
	{

		PSO::printGbestX();//���ȫ�����Ž�����	

		PSO::printGbestFitness();//�����������

	}

	//5. �ͷ�����Ķ��ϵĶ�̬�洢�ռ�
	delete[] swarm;



	system("pause");
	
	return 0;
}