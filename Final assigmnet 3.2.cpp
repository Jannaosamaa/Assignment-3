#include<iostream>
#include<fstream>
#include"mechanic.cpp"
#include"mechanic.h"
#include"template.cpp"
#include"customer.cpp"
#include"customer.h"
#include"person.h"
#include "person.cpp"


using namespace std;

int main()
{
	mechanic m;
	customer c;

	string n;
	int x;
	int num;

	Appointment AppointmentMain;
	vector<mechanic> MechanicVectorMain;
	customer* customerArray;
	queue<customer> customerQueue;
	ifstream File("input.txt");
	while (!File.eof());
	{
		File >> n;
		m.setName(n);
		File >> x;
		m.setAge(x);
		File >> x;
		m.setID(x);
		File >> x;

		for (int i = 0; i < x; i++)
		{
			File >> AppointmentMain.hours;
			File >> AppointmentMain.minutes;
			m.AddAppointment(AppointmentMain);
		}
		MechanicVectorMain.push_back(m);
		m.clearAppointments();

	}
	File.close();

	ifstream CFile("Customer.txt");
	CFile >> num;

	customerArray = new customer[num];
	for (int j = 0; j < num; j++)
	{
		CFile >> n;
		customerArray[j].setName(n);
		CFile >> x;
		customerArray[j].setAge(x);
		CFile >> AppointmentMain.hours;
		CFile >> AppointmentMain.minutes;
	}
	CFile.close();
	x = 0;
	for (int a = 0; a < num; a++)
	{
		if (MechanicVectorMain[x].isAvailable(customerArray[a].getAppointment()));
		{
			MechanicVectorMain[x].AddAppointment(customerArray[a].getAppointment());
			customerArray[a].setMechanicID(MechanicVectorMain[x].getID());
		}
		else
		{
			MechanicalVectorMain[++x].Addappointment(customerArray[a].get_Appointment());
			customerArray[a].setMechanicID(MechanicVectorMain[x].getID());
		}
		if (x < 2)
			x++;
		else
			x = 0;

	}
	for (int r = 0; r < num; r++)
	{
		x = 0;
		for (int q = 0;q < MechanicVectorMain.size();q++)
		{
			if (customerArray[r].getMechanicID() == MechanicVectorMain[q].getID())
				x = q;
		}
		cout << "MR/MRS" << customerArray[r].getName() << "is assigned to" << MechanicVectorMain[x].getName() << "at" << customerArray[r].getAppointment().hours << " : " << customerArray[r].getAppointment().minutes;
	}
	cout << endl;

	for (int k = 0; k < num; k++)
	{
		for (int l = k; l < num; l++)
		{
			if (customerArray[k] < customerArray[l])
			{
				c = customerArray[k];
				customerArray[k] = customerArray[l];
				customerArray[l] = c;
			}
		}
	}

	for (int m = 0; m < num; m++)
	{
		customerQueue.push(customerArray[m]);
	}
	for (int n = 0; n < num;n++)
	{
		x = 0;
		for (int q = 0; q < MechanicVectorMain.size(); q++)
		{
			if (customerQueue.peek().getMechanicID() == MechanicVectorMain[q].getID())
				x = q;
		}
		cout << "MR/MRS" << customerQueue.peek().getName() << " has an appointment at" << customerQueue.peek().getAppointment().hours << ":" << customerQueue.peek().getAppointment().minutes << " with the mechanic" << MechanicVectorMain[x].getName() << "." << endl;
		customerQueue.pop();
	}