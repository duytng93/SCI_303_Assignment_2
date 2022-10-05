#include "Professional.h"
#include <string>
#include <iostream>

using namespace std;

Professional::Professional(const std::string name, double salary)
:Employee(name), monthlySalary(salary){};

double Professional::weeklySalary() const
{
	return monthlySalary / 4;
};
double Professional::healthCareContribution() const
{
	return (monthlySalary / 4) * 0.05;
};
double Professional::vacationLength() const
{
	return vacationDays;
};
void Professional::displayInfo() const
{
	cout << "Employee name: " << fullName << endl;
	cout << "Employee type: Professional" << endl;
	cout << "Weekly Salary: $" << weeklySalary() << endl;
	cout << "Health care contribution: $" << healthCareContribution() << endl;
	cout << "Vacation days: " << vacationLength() <<" days"<<endl;
};