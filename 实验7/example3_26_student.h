#ifndef _STUDENT               //条件编译
#define _STUDENT
#include <iostream>
#include <string>
#pragma warning(disable : 4996)
using namespace std;
#define SIZE 80
class Student
{
	char *name;                //姓名
	char id[12];                 //学号
	int age;                   //年龄
	string address;            //住址
public:
	Student();                   //无参构造函数
	Student(char *na, char *id, int ag,int add); //带参构造函数
	Student(const Student &per); //拷贝构造函数
	~Student();                  //析构函数
	char* GetName();             //提取姓名
	char* GetID();               //提取学号
	int GetAge();                //提取年龄
	string  GetAddress();           //提取住址
	void Display();              //显示学生信息
	void Input();                //输入学生信息
};
#endif
