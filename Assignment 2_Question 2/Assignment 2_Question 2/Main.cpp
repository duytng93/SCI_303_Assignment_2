#include <string>
#include <iostream>
#include "Employee.h"
#include "Professional.h"
#include "Nonprofessional.h"

using namespace std;
int main() {

	Employee* employee1;					//create employees using poiners of base class for polymorphism
	Employee* employee2;
	Employee* employee3;
	Employee* employee4;
	Employee* employee5;

	//parameters are name, monthly salary and total years worked for professional employees
	employee1 = new Professional("James Brown", 4000, 0);						
	employee2 = new Professional("Tom Smith", 3500, 2);					// pointers point to objects in derived classes

	//parameters are name, pay rate, weekly hours worked and total hours worked for nonprofessional employees
	employee3 = new Nonprofessional("Oliver William", 20, 33, 1155);
	employee4 = new Nonprofessional("Noah Smith", 18, 25, 1200);
	employee5 = new Nonprofessional("Lucas Garcia", 16, 18, 360);
	
	employee1->displayInfo();										//display employees information
	cout << endl << "=======================" << endl<<endl;
	employee2->displayInfo();
	cout << endl << "=======================" << endl << endl;
	employee3->displayInfo();
	cout << endl << "=======================" << endl << endl;
	employee4->displayInfo();
	cout << endl << "=======================" << endl << endl;
	employee5->displayInfo();
	return 0;
}