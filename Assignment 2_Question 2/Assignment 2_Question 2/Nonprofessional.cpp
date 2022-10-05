#include "Nonprofessional.h"
#include <string>
#include <iostream>

using namespace std;


Nonprofessional::Nonprofessional(const std::string name, double rate, int hours)
	:Employee(name), payRate(rate), weeklyHour(hours) {};

double Nonprofessional::weeklySalary() const {				// calculate weekly salary = rate per hour * weekly work hours
	return payRate * weeklyHour;
};
double Nonprofessional::healthCareContribution() const {		// calculate health care contribution = 5% of salary
	return payRate * weeklyHour * 0.05;
};
double Nonprofessional::vacationLength() const{				//calculate vacation length depends on working hours per week
	if (weeklyHour >= 30)
		return 10;
	else if (weeklyHour >= 20)
		return 7;
	else
		return 0;
};
void Nonprofessional::displayInfo() const {				// display employees information
	cout << "Employee name: " << fullName << endl;
	cout << "Employee type: Non-Professional" << endl;
	cout << "Weekly Salary: $" << weeklySalary() << endl;
	cout << "Health care contribution: $" << healthCareContribution() << endl;
	cout << "Vacation days: " << vacationLength() << " days"<<endl;
};
