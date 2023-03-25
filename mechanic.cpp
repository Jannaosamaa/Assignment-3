#include<iostream>
#include"mechanic.h"
#include"person.h"
using namespace std;

mechanic::mechanic()
{
	int counter = 0;
}
bool mechanic::isAvailable(Appointment appointment)
{
	bool x = 1;
	for (int i = 0; i < counter; i++)
	{
		if ((AppointmentVector.hours == AppointmentVector[i].hours) && AppointmentVector.mins == AppointmentVector[i].minutes))
		x = 0;
	}
	return x;
}
void mechanic::setCounter(int x)
{
	counter = x;
}
int mechanic::getcounter()
{
	return counter;
}
Appointment mechanic::getAppointment(int index)
{
	if ((index > 0) && (index < counter))
		return appointmentVector[index];
}
void mechanic::AddAppointment(Appointment appointment)
{
	if (isAvailable(Appointment))
	{
		AppointmentVector.push_back(Appointment);
		counter++;
	}
}
void mechanic::displayAppointment()
{
	for (int i = 0; i < counter; i++)
	{
		"Appointment number :" << i + 1 << AppointmentVector[i].hours << ":" << AppointmentVector[i].minutes << endl;
	}
}
void mechanic::setAppointment(Appointment appointment, int index)
{
	if ((index > 0) && (index < counter))
	{
		Appointment[index].hours = AppointmentVector.hours;
		Appointment[index].minutes = AppointmentVector.minutes;
	}
}
void mechanic::clear_Appointment()
{
	AppointmentVector.clear();
	counter = 0;
}