
#pragma once
#include <iostream>
#include <string>

using namespace std;

class graduate
{
private:
	char *name;
	bool gender;
	int *id;
	double score;
	string reserch;
	string tutor;
public:
	graduate();
	graduate(char *name, bool gender, int *id, double score, string reserch, string tutor);
	graduate(const graduate& r);
	~graduate();
	void output();
	void output()const;
	friend void grand(const graduate& r);
	void getsore(const graduate& p, const graduate& q, const graduate& r);
};

graduate::graduate()
{
	name = (char*)"xiaoshuang";
	gender = true;
	id = new int[20];
	for (int i = 0; i < 20; i++)
	{
		id[i] = 0;
	}
	score = 500;
	reserch = "math";
	tutor = "wang";
}
graduate::graduate(char *name, bool gender, int *id, double score, string reserch, string tutor)
{
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
	this->gender = gender;
	this->id = new int[20];
	for (int i = 0; i < 20; i++)
	{
		this->id[i] = id[i];
	}
	this->score = score;
	this->reserch = reserch;
	this->tutor = tutor;
}
graduate::graduate(const graduate& r)
{
	name = new char[strlen(r.name) + 1];
	strcpy(name, r.name);
	gender = r.gender;
	id = new int[20];
	for (int i = 0; i < 20; i++)
	{
		id[i] = r.id[i];
	}
	score = r.score;
	reserch = r.reserch;
	tutor = r.tutor;
}
graduate::~graduate()
{
	delete name;
	delete id;
}
void graduate::output()
{
	cout << "name:\t" << name << "\ngender:\t" << gender << "\nid:\t";
	for (int i = 0; i < 20; i++)
	{
		cout << id[i];
	}
	cout << "\nscore:\t" << score << "\nreserch:" << reserch << "\ntutor:\t" << tutor << endl;
	cout << endl;
}
void graduate::output()const
{
	cout << "name:\t" << name << "\ngender:\t" << gender << "\nid:\t";
	for (int i = 0; i < 20; i++)
	{
		cout << id[i];
	}
	cout << "\nscore:\t" << score << "\nreserch:" << reserch << "\ntutor:\t" << tutor << endl;
	cout << endl;
}

void grand(const graduate& r)
{
	if (r.score <= 90)
	{
		cout << "A" << endl;
	}
	if (r.score < 90 && r.score <= 80)
	{
		cout << "B" << endl;
	}
	if (r.score < 80 && r.score <= 70)
	{
		cout << "C" << endl;
	}
	if (r.score < 70 && r.score <= 60)
	{
		cout << "D" << endl;
	}
	if (r.score < 60)
	{
		cout << "E" << endl;
	}
}

void graduate::getsore(const graduate& p, const graduate& q, const graduate& r)
{
	double i = (p.score + q.score + r.score) / 3;
	cout << i << endl;
}

int main()
{
	graduate g1 = graduate();
	g1.output();
	int*id = new int[20];
	for (int i = 0; i < 20; i++)
	{
		id[i] = i % 3;
	}
	char *q = (char*)"ergou";
	graduate g2 = graduate(q, true, id, 200, (string)"math", (string)"wang");
	g2.output();
	getchar();
	return 0;
}
