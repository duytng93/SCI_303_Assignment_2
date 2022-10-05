#include "Professional.h"
#include <string>
#include <iostream>

using namespace std;

Professional::Professional(const std::string name, double salary, int yearWorked)
:Employee(name), monthlySalary(salary), totalYear(yearWorked) {};

double Professional::weeklySalary() const			// calculate weekly salary = monthly salary / 4
{
	return monthlySalary / 4;
};
double Professional::healthCareContribution() const	// calculate health care contribution = 5% of salary
{
	return (monthlySalary / 4) * 0.05;
};
double Professional::vacationLength() const			// calculate vacation days depends on hour many years worked
{
	if (totalYear > 2)
		return 21;
	if (totalYear > 1)
		return 14;
	if (totalYear > 0)
		return 7;
	return 0;
};
void Professional::displayInfo() const				// display employees information
{
	cout << "Employee name: " << fullName << endl;
	cout << "Employee type: Professional" << endl;
	cout << "Weekly Salary: $" << weeklySalary() << endl;
	cout << "Health care contribution: $" << healthCareContribution() << endl;
	cout << "Vacation days: " << vacationLength() <<" days"<<endl;
};