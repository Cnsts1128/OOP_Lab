#define _CRT_SECURE_NO_WARNINGS
#include "student.h"
#include<cstring>
#include<iostream>

using namespace  std;

// ʹ�ù��캯����ɶ���ĳ�ʼ��
student::student()
{

}

student::student(char *na, int age, int gender)
{

    cout << "+���캯��������" << endl;
    if (na != NULL)
    {
        int len = strlen(na);

        this->name = new char[len + 1];

        strcpy(this->name, na);
    }

    this->age = age;

    this->gender = gender;

}

student::student(const student &r)
{
    cout << "+�������캯��������" << endl;

    //ϵͳĬ�϶�λ����
    //this->name = r.name;//ǳ����,���漰ջ�ϵ����ݶ�λ����,���漰��

    if (r.name!=NULL)//��ȿ���--��������ж����ݿ��������
    {

        this->name = new char[strlen(r.name) + 1];

        strcpy(name, r.name);
    }


    this->age = r.age;
    this->gender = r.gender;

}

student::~student()
{
    //ɾ���ѿռ�
    if (this->name != NULL)
    {
        delete[] name;
    }

    cout << "~��������������" << endl;


}

void student::display()
{
    cout << "name  = " << name << endl;
    cout << "age   = " << age << endl;
    cout << "gender= " << this->gender << endl;

}
