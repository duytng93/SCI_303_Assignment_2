#ifndef PROFESSIONAL_H_
#define PROFESSIONAL_H_
#include "Employee.h"

class Professional : public Employee {

private:
	double monthlySalary;	// datat member to calculate weekly salary
	int totalYear;			// data member to calculate vacation days
public:
	Professional(const std::string name, double salary, int yearWorked);
	double weeklySalary() const;
	double healthCareContribution() const;
	double vacationLength() const;
	void displayInfo();
};
#endif

