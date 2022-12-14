#include "Nonprofessional.h"
#include <string>
#include <iostream>

using namespace std;


Nonprofessional::Nonprofessional(const std::string name, double rate, int hrPerWeek, int hoursWorked)
	:Employee(name), payRate(rate), weeklyHour(hrPerWeek), totalHours(hoursWorked) {};


double Nonprofessional::weeklySalary() const {				// calculate weekly salary = rate per hour * weekly work hours
	return payRate * weeklyHour;
};
double Nonprofessional::healthCareContribution() const {	// calculate health care contribution = 5% of salary
	return payRate * weeklyHour * 0.05;
};
double Nonprofessional::vacationLength() const{				//calculate vacation hours depends on total hours worked
	return totalHours * 0.025;
};
void Nonprofessional::displayInfo() const {					// display employees information
	cout << "Employee name: " << Employee::getName() << endl;
	cout << "Employee type: Non-Professional" << endl;
	cout << "Weekly Salary: $" << weeklySalary() << endl;
	cout << "Health care contribution: $" << healthCareContribution() << endl;
	cout << "Vacation hours: " << vacationLength() << " hours"<<endl;
};