#ifndef NONPROFESSIONAL_H_
#define NONPROFESSIONAL_H_
#include "Employee.h"

class Nonprofessional : public Employee {

private:
	double payRate;			//data members to calculate salary
	int weeklyHour;
public:
	Nonprofessional(const std::string name, double rate, int hours);
	double weeklySalary() const;
	double healthCareContribution() const;
	double vacationLength() const;
	void displayInfo() const;
};
#endif
