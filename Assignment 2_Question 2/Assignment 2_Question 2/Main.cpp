#include <string>
#include <iostream>
#include "Employee.h"
#include "Professional.h"
#include "Nonprofessional.h"

using namespace std;
int main() {

	Employee* employee1;
	Employee* employee2;
	Employee* employee3;
	Employee* employee4;
	employee1 = new Professional("James Brown", 4000);
	employee2 = new Nonprofessional("Oliver William", 20, 33);
	employee3 = new Nonprofessional("Noah Smith", 18, 25);
	employee4 = new Nonprofessional("Lucas Garcia", 16, 18);
	employee1->displayInfo();
	cout << endl << "=======================" << endl<<endl;
	employee2->displayInfo();
	cout << endl << "=======================" << endl << endl;
	employee3->displayInfo();
	cout << endl << "=======================" << endl << endl;
	employee4->displayInfo();

	return 0;
}