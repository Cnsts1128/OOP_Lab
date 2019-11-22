
#include <iostream>
#include <cmath>
#include <cstdlib>
#include "PSO.h"
#include "function.h"

using namespace std;


//��ʼ�����еľ�̬���ݳ�Ա
double PSO::gbestx[DIMENSION] = {0.0};//ȫ������λ�ó�ʼ��
double PSO::gbestFintness=pow(2,1024);//ȫ��������Ӧ��ֵ��ʼ��,һ���ϴ��ֵ


//�ⲿȫ�ֱ������뱾�ļ�,�Թ�ʹ��
extern int MAX_ITER;

extern double xmax;
extern double xmin;


extern double vmax;
extern double vmin;

//--------------------PSO��ĺ�������------------------------------


PSO::PSO()
{
	//cout << "���ù��캯����ɳ�ʼ��" << endl;
}


PSO::~PSO()
{
	//cout << "��������������ɶ����ͷ�" << endl;
}

double * PSO::getX()
{
	return x;//����λ���׵�ַ
}

double * PSO::getV()
{
	return v;
}

double & PSO::getFitness()
{

	return fitness;
}

double * PSO::getPbestX()
{
	return pbestx;
}

double & PSO::getPbestFitness()
{
	return pbestfitness;
}

void PSO::initi(double xmin, double xmax, double vmin, double vmax)
{
	//��ʼ�����Ӹ����λ�ú��ٶ�
	for (int i = 0; i < DIMENSION; i++)
	{
		x[i] = xmin + (rand() / (32767 + 1.0)) *(xmax - xmin);
		v[i] = vmin + (rand() / (32767 + 1.0))*(vmax - vmin);
	}


	//���㵱ǰ�����������Ӧ��
	fitness = computeFitness(x,DIMENSION);


	//��ʼ����������ľֲ�����λ�ú���Ӧ��
	for (int i = 0; i < DIMENSION; i++)
	{
		pbestx[i] = x[i];
	}

	pbestfitness = fitness;

}


//��Ӧ��:ĳ������f����ֵ(������ԽС˵����Ӧ�Ľ�Խ��)
double PSO::computeFitness(double x[], int dim)
{
	fitness = sphere(x, dim);//����Sphere��Ϊ���Ժ���,�����������в���
	//fitness = Rosenbrock(x, DIMENSION);//����Rosenbrock��Ϊ���Ժ���
	//fitness = Ackley(x, DIMENSION);
	//fitness = Griewanks(x, DIMENSION);


	return fitness;
}

//���¾ֲ�����λ��
void PSO::updatePbestX()
{
	if (fitness<pbestfitness)
	{
		pbestfitness = fitness;

		for (int i = 0; i < DIMENSION; i++)
		{
			pbestx[i] = x[i];
		}	
	}
}


//����ȫ������λ��
void PSO::updateGbestX()
{
	if (pbestfitness<=gbestFintness)
	{
		gbestFintness = pbestfitness;

		for (int i = 0; i < DIMENSION; i++)
		{
			gbestx[i] = pbestx[i];
		}
	}
	else;
}

void PSO::updateV(int iter)
{
	//���¹�ʽ����
	double w = 0.9 - 0.5*iter / MAX_ITER;
	double c1 = 2.0;
	double c2 = 2.0;

	//ע��r1,r2��������ɵ�С��,��Ҫ�������for��,ÿ�ζ������µ������,�����Խ��,��⾫��Խ��
	for (int i = 0; i < DIMENSION; i++)
	{
		v[i] = w * v[i] + c1 *rand()/(32767 + 1.0)*(pbestx[i] - x[i]) + c2 * rand() / (32767 + 1.0)*(gbestx[i] - x[i]);
	
		//�ٶ�Խ���ж�
		if (v[i]<=vmin || v[i]>=vmax)
		{
			v[i] = (vmax - vmin)*rand() / (32767 + 1.0);

		}
		else continue;
	}

}


void PSO::updateX(int iter)
{
	for (int i = 0; i < DIMENSION; i++)
	{
		x[i] = x[i] + v[i];

		//λ��Խ���ж�
		if (x[i] <= xmin || x[i] >= xmax)
		{
			x[i] = xmin+(xmax - xmin)*double(rand()/RAND_MAX);

		}
		else continue;
	}

}

//-----------------��̬�����Ķ���--------------------

double * PSO::getGbestX()
{
	return gbestx;
}

double & PSO::getGbestFitness()
{
	return gbestFintness;
}

void PSO::printGbestX()
{
	cout <<endl<<"�����ǰ��õĽ�:" << endl<<endl;

	for (int dim = 0; dim < DIMENSION; dim++)
	{
		cout << "gbestX[" << dim << "] = " << gbestx[dim] << endl;

	}
	cout << endl;
}

void PSO::printGbestFitness()
{
	cout << "ȫ�����Ž�ľ���: " << gbestFintness << endl;
	cout << endl;
}
