#ifndef STUDENT_H
#define STUDENT_H

//��������������:
/***
 *
 * ��ɶ�������ǰ��������,�ͷŹ���������Ķѿռ�
 * �޷�������
 * �Զ�������
 * ���ܱ�����,��Ϊ������������û���κβ���,����"ͬ����ͬ��"��������Զ�޷�������)
 */

class student
{
public:
    student();
    student(char*na,int age,int gender);

    student(const student &r);
    ~student();
    void display();

private:
    char *name;
    int age;
    bool gender;
};

#endif // STUDENT_H
