#ifndef _STUDENT               //��������
#define _STUDENT
#include <iostream>
#include <string>
#pragma warning(disable : 4996)
using namespace std;
#define SIZE 80
class Student
{
	char *name;                //����
	char id[12];                 //ѧ��
	int age;                   //����
	string address;            //סַ
public:
	Student();                   //�޲ι��캯��
	Student(char *na, char *id, int ag,int add); //���ι��캯��
	Student(const Student &per); //�������캯��
	~Student();                  //��������
	char* GetName();             //��ȡ����
	char* GetID();               //��ȡѧ��
	int GetAge();                //��ȡ����
	string  GetAddress();           //��ȡסַ
	void Display();              //��ʾѧ����Ϣ
	void Input();                //����ѧ����Ϣ
};
#endif
