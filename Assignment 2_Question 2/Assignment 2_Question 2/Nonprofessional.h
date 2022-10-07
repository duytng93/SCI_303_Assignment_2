#ifndef NONPROFESSIONAL_H_
#define NONPROFESSIONAL_H_
#include "Employee.h"

class Nonprofessional : public Employee {

private:
	double payRate;			//data members to calculate salary
	int weeklyHour;			
	int totalHours;			//data members to calculate vacation hours
public:
	Nonprofessional(const std::string name, double rate, int hrPerWeek, int hoursWorked);
	double weeklySalary() const;
	double healthCareContribution() const;
	double vacationLength() const;
	void displayInfo() const;
};
#endif