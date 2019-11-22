

#ifndef _PSO_H_
#define _PSO_H_

const int DIMENSION=30;   //�����Ż���ά��(�Ա�������),������10ά,20ά,30ά��,...100ά


/*--------------------------------------------------*
                   PSO�ඨ��--���Ӹ�����
*---------------------------------------------------*/

class PSO
{
	//------------------PSO�����ݳ�Ա---------------
private:
	//1.���Ӹ�����Ϣ
	double x[DIMENSION];//����λ������
	double v[DIMENSION];//�����ٶ�����
	double fitness;//������Ӧ����ֵ

	//2.���Ӿֲ�������Ϣ
	double pbestx[DIMENSION];//���Ӿֲ�����λ��
	double pbestfitness; //���Ӿֲ�������Ӧ����ֵ

	//3.����Ⱥȫ��������Ϣ(������Ϣ)
	static double gbestx[DIMENSION];//ȫ������λ��
	static double gbestFintness;//ȫ��������Ӧ��ֵ

	//------------------PSO�ຯ����Ա---------------

public://���Ӹ������Ϊ��Ϣ`

	PSO();//���캯��
	~PSO();//��������

	
	
	//��ͨ����(��ȡ���Ӹ���������Ϣ)
	double* getX();//������ӵ�λ������
	double* getV();//������ӵ��ٶ�����
	double& getFitness();//������ӵ���Ӧ��
	double* getPbestX();//������ӵľֲ�����λ������
	double& getPbestFitness();//������ӵľֲ�������Ӧ����ֵ

	//��ͨ����:��ʼ��λ�ú��ٶ�����
	void initi(double xmin, double xmax, double vmin, double vmax);//��������Χ�ڳ�ʼ����ǰ���ӵĸ���λ�ú��ٶ�����

	//��ͨ����:�������ӵ���Ӧ��(���Ż��ĺ�����ֵ)
	double computeFitness(double x[], int dim);

	//��ͨ����:�����Ӿֲ����ź�ȫ��������Ϣ
	void updatePbestX();//�������Ӹ���ֲ�����λ��
	void updateGbestX();//��������Ⱥ���ȫ������λ��

	//��ͨ����:�������ӵ��ٶȺ�λ������-�����µ�λ��
	void updateV(int iter);
	void updateX(int iter);

	//-----------------------------------------------------

	//��̬����:��ȡȫ�����������Ϣ
	static double* getGbestX();//���ȫ�����λ������
	static double& getGbestFitness();//���ȫ�������Ӧ����ֵ

	//��̬����:���ȫ�����������Ϣ
	static void printGbestX();
	static void printGbestFitness();
};

#endif