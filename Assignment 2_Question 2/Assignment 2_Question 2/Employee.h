#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include <string>
class Employee {
private:
	const std::string fullName;
public:
	Employee(const std::string name)
		:fullName(name) {};
	std::string getName() const {
		return fullName;
	};
	virtual double weeklySalary() const = 0;				//using virtual key word for polymorphism
	virtual double healthCareContribution() const = 0;
	virtual double vacationLength() const = 0;
	virtual void displayInfo() const = 0;
};
#endif