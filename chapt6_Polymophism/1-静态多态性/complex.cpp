#include "complex.h"



//-----------------------��Ա����-------------------------

complex::complex()
{

}

complex::complex(double r, double i)
{
    this->real =r;
    this->imag =i;
}

complex::complex(const complex &r)
{
    this->real =r.real;
    this->imag = r.imag;
}

complex::~complex()
{

}

void complex::print() const
{


}

complex complex::operator+(const complex &other)
{

    complex temp;

    temp.real = this->real + other.real;
    temp.imag = this->imag + other.imag;

    return  temp;

}

//��ֵ�����=
complex complex::operator=(const complex &other)
{
    this->real = other.real;
    this->imag = other.imag;
}

//ǰ++
complex complex::operator++()
{
    ++this->real;
    ++this->imag;

    return *this;

}

//��++
complex complex::operator++(int)
{
    complex temp;//

    temp.real = this->real++;
    temp.imag=this->imag++;

    return  temp;

}

//�������÷�
double complex::operator()()
{
    double sum = this->real * this->real + this->imag *this->imag;

    return  sum;

}

ostream & operator<<(ostream &out, complex &t)
{
    out<<t.real<<"+" <<t.imag<<"i"<<endl;
}

//-----------------------��Ԫ����-------------------------


