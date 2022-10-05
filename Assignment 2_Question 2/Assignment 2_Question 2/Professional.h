#ifndef PROFESSIONAL_H_
#define PROFESSIONAL_H_
#include "Employee.h"

class Professional : public Employee {

private:
	double monthlySalary;
	const double vacationDays = 14;
public:
	Professional(const std::string name, double salary);
	double weeklySalary() const;
	double healthCareContribution() const;
	double vacationLength() const;
	void displayInfo() const;
};
#endif

