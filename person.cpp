#include<iostream>
#include"person.h"

person::person()
{
	Name_P = "";
	ID_P = 0;
	Age_P = 0;
}

void person::setName(string Name_P)
{
	Name = Name_P;
}
string person::getName()
{
	return Name;
}
void person::setID(int ID_P)
{
	ID = ID_P;
}
int person::getID()
{
	return ID;
}
void person::setAge(int Age_P)
{
	Age = Age_P;
}
int person::getAge()
{
	return Age;
}
void person::print()
{
	cout << "Name : " << getName() << endl;
	cout << "ID : " << getID() << endl;
	cout << "Age : " << getAge() << endl;
}