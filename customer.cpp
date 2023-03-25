#include<iostream>
#include "customer.h"
using namespace std;

customer::customer()
{
	int MechancicID = 0;
	Appointment appointment.hours = 0;
	Appointment appointment.minutes = 0;
}
void customer::setMechanicID(int MechanicID_P)
{
	MechancicID = MechanicID_P;
}
int getMechanicID()
{
	return MechanicID;
}
void customer::setAppointment(Appointment Appointment_P)
{
	appointment.hours = Appointment_P.hours;
	appointment.minutes = Appointment_P.minutes;

	while ((appointment.hours > 24) || (appointment.hours < 0) || (appointment.minutes > 59) || (appointment.minutes < 0) || ((appointment.hours == 24) && (appointment.minutes != 0)))
	{
		cout << "Invalid Time!!!" << endl << "Enter the hours (0-24)" << endl;
		cin >> appointment.hours;
		cout << "Enter the minutes (0-60)" << endl;
		cin >> appointment.minutes;
	}
}
Appointment customer::getAppointment()
{
	return appointment;
}

bool customer :: operator == (const customer& customer1)
{
	if ((customer1.appointment.hours == appointment.hours) && (customer1.appointment.minutes == appointment.minutes))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
bool customer :: operator > (const customer& customer1)
{
	if ((customer1.appointment.hours > appointment.hours) && (customer1.appointment.minutes > appointment.minutes))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
bool customer :: operator < (const customer& customer1)
{
	if ((customer1.appointment.hours < appointment.hours) && (customer1.appointment.minutes < appointment.minutes))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}