#pragma once
#ifndef MECHANIC_H
#define MECHANIC_H
#include "customer.cpp"
#include"person.cpp"
#include<vector>
#include "customer.h"
class mechanic : public person
{
private:
	int counter;
	vector<Appointment> AppointmentVector;
public:
	mechanic();
	bool isAvailable(Appointment_P);

	void setCounter(int);
	int getCounter();

	void setAppointment(Appointment_P, int);
	Appointment getAppointment(int);

	void AddAppointment(Appointment_P);
	void displayAppointments();
	void clearAppointments();
};
#endif