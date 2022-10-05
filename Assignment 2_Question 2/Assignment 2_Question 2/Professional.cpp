#include "Professional.h"
#include <string>
#include <iostream>

using namespace std;

Professional::Professional(const std::string name, double salary)
:Employee(name), monthlySalary(salary){};

double Professional::weeklySalary() const			// calculate weekly salary = monthly salary / 4
{
	return monthlySalary / 4;
};
double Professional::healthCareContribution() const		// calculate health care contribution = 5% of salary
{
	return (monthlySalary / 4) * 0.05;
};
double Professional::vacationLength() const			// vacation length is fixed for professional employees
{
	return vacationDays;
};
void Professional::displayInfo() const				// display employees information
{
	cout << "Employee name: " << fullName << endl;
	cout << "Employee type: Professional" << endl;
	cout << "Weekly Salary: $" << weeklySalary() << endl;
	cout << "Health care contribution: $" << healthCareContribution() << endl;
	cout << "Vacation days: " << vacationLength() <<" days"<<endl;
};
