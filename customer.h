#pragma once
#ifndef CUSTOMER_H
#define CUSTOMER_H
#include"person.cpp"
#include "person.h"
class customer : public  person
{
private:
	int MechanicID;
	Appointment appointment;

public:

	//int MechanicID_P;
	//Appointment Appointment_P;

	customer();

	void setMechanicID(int);
	void setAppointment(Appointment);

	int getMechanicID();
	Appointment getAppointment();

	bool operator == (const customer&);
	bool operator > (const customer&);
	bool operator < (const customer&);

};
#endif