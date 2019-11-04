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
		name = new char[strlen(na) + 1];//避免浅拷贝
		strcpy(name, na);
	}
	strcpy(id,id);
	age = ag;
	address = add;
}
Student::Student(const Student &per)//拷贝构造函数
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
Student::~Student()                     //析构函数
{
	if (name)
		delete[]name;
}
char* Student::GetName()                //提取姓名
{
	return name;
}
char* Student::GetID()                  //提取学号
{
	return id;
}
int Student::GetAge()                  //提取年龄
{
	return age;
}
string Student::GetAddress()               //提取住址
{
	return address;
}
void Student::Display()                     //输出数据信息
{
	cout << "姓名" << name << endl;
	cout << "学号" << id << endl; 
	cout << "年龄" << age<<endl << endl;
	cout << "住址" << address << endl;
}
void Student::Input()                       //输入数据
{
	char na[10];
	cout << "输入姓  名：";
	cin >> na;
	if (name)
		delete[]name;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "输入学  号：";
	cin >> id;
	cout << "输入年  龄："; 
	cin >> age;
	cout << "输入住  址：";
	cin >> address;
}

