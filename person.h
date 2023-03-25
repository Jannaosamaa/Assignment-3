#ifndef PERSON_H
#define PERSON_H
#include<iostream>
using namespace std;

struct Appointment
{
	int hours;
	int minutes;
};

class person
{
public:
	person();

	string Name;
	int ID;
	int Age;

	void print();
	void setName(string);
	void setID(int);
	void setAge(int);

	string getName();
	int getID();
	int getAge();

public:
	string Name_P;
	int ID_P;
	int Age_P;
};
#endif