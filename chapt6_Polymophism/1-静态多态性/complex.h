#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

class complex
{
private:
    double real;
    double imag;

public:
    //===================��̬��̬: ��������========================
    complex();
    complex(double r, double i);//���캯��
    complex(const complex &r);
     ~complex();

    void print();
    void print()const;



    //===============��̬��̬: ���������1-��Ա������===============

     //a.���ؼӷ������+(˫Ŀ�����)
    complex operator+(const complex &other);


    //b.���ظ�ֵ�����=(˫Ŀ�����)-��������

    complex operator=(const complex &other);

     //c.����ǰ++�����(��Ŀ�����)-��������,�������ؾ���
    complex operator++();


     //d.���غ�++�����(��Ŀ�����)-��������
    complex operator++(int);


    //e.���غ������������()�����(��Ŀ�����)-��������
    double operator()();

   //===============��̬��̬: ���������2-��Ԫ������===============

    //-������������<< : ˫Ŀ�����,��ʽ"cout<<" �����һ�����������cout"
    friend ostream& operator<<(ostream &out, complex &t);

};


#endif // COMPLEX_H
