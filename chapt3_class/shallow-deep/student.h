#pragma once
class student
{

private:
	int id;
	char *name; //���붯̬�ڴ���ź�

public:
	//1. ���캯������������

	student(int id, const char *user_name);

	student(const student &r);

	~student();


	//2. ��ͨ����
	void display();
};

