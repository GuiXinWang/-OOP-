#include "example3_26_student.h"
#pragma warning(disable : 4996)
Student::Student()
{
	name = NULL;
	age = 0;
}
Student::Student(char *na, char *id,int ag,int add)
{
	if (na)
	{
		name = new char[strlen(na) + 1];//����ǳ����
		strcpy(name, na);
	}
	strcpy(id,id);
	age = ag;
	address = add;
}
Student::Student(const Student &per)//�������캯��
{
	if (per.name)
	{
		name = new char[strlen(per.name) + 1];
		strcpy(name, per.name);
	}
	strcpy(id, per.id);
	age = per.age;
	address = per.address;
}
Student::~Student()                     //��������
{
	if (name)
		delete[]name;
}
char* Student::GetName()                //��ȡ����
{
	return name;
}
char* Student::GetID()                  //��ȡѧ��
{
	return id;
}
int Student::GetAge()                  //��ȡ����
{
	return age;
}
string Student::GetAddress()               //��ȡסַ
{
	return address;
}
void Student::Display()                     //���������Ϣ
{
	cout << "����" << name << endl;
	cout << "ѧ��" << id << endl; 
	cout << "����" << age<<endl << endl;
	cout << "סַ" << address << endl;
}
void Student::Input()                       //��������
{
	char na[10];
	cout << "������  ����";
	cin >> na;
	if (name)
		delete[]name;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "����ѧ  �ţ�";
	cin >> id;
	cout << "������  �䣺"; 
	cin >> age;
	cout << "����ס  ַ��";
	cin >> address;
}

