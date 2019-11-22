/*************************************************
** ͷ�ļ�   : function.h
** ����˵�� : ���Ժ���
** ����ʱ�� : 2019-11-22/11:41
/**************************************************/

#ifndef _FUNCTION_H_
#define _FUNCTION_H_


//------------���庯��(����ֻ��һ����ֵ��)----------------

double sphere(double x[], int dim);

double SchwefelP12(double x[], int dim);

double SchwefelP22(double x[], int dim);

double Rosenbrock(double x[], int dim);


//------------��庯��(�����ж����ֵ��)----------------

double Schwefel2_26(double x[], int dim);

double Ackley(double x[], int dim);

double Griewanks(double x[], int dim);


double Rastrigin(double x[], int dim);

double Rastrigin_nc(double x[], int dim);


double Weierstrass(double x[], int dim);

double Schwefel(double x[], int dim);

double Penalized(double x[], int dim);



	
#endif

