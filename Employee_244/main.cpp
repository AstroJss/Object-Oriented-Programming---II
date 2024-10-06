/* Driver file for Employee class:
 *
 * First the UML diagram was drawn.
 * EMPLOYEE CLASS DESIGN
 *   ---------------------------------
 *  |            Employee             |
 *   ---------------------------------
 *  |  -firstName: string             |
 *  |  -lastName: string              |
 *  |  -monthlySalary: int            |
 *   ---------------------------------
 *  |  + Employee(string, string, int)|
 *  |  + Employee(const Employee&)    |
 *  |  + set_firstName(string): void  |
 *  |  + set_lastName(string): void   |
 *  |  + set_monthlySalary(int): void |
 *  |  + get_firstName(): string      |
 *  |  + get_lastName(): string       |
 *  |  + get_monthlySalary(): int     |
 *  |  + ~Employee()                  |
 *   ---------------------------------
 */

#include <iostream>
#include <cassert>
#include "employee.h"
using namespace std;

//function prototypes
void testEmployee();
int testMinimalEmployeeSalary();

int main(void)
{

	Employee E3("Fred", "Mendes", 2000); //parameterized constructor
	Employee E4("Perth", "Winston", 3000); //parameterized constructor

	//display each employee's yearly salary
	cout << "Employee E3's yearly salary: " << (E3.get_monthlySalary() * 12) << endl;
	cout << "Employee E4's yearly salary: " << (E4.get_monthlySalary() * 12) << endl;

	//give each employee a new salary after raise
	E3.set_monthlySalary(E3.get_monthlySalary() * 1.10);
	E4.set_monthlySalary((E4.get_monthlySalary() * 1.10));

	cout << "Employee E3's yearly salary after raise: " << (E3.get_monthlySalary() * 12) << endl;
	cout << "Employee E4's yearly salary after raise: " << (E4.get_monthlySalary() * 12) << endl;

	int correctMinimalSalary = 1000;
	string message1 = "\nHurrah, test passed, function for minimal salary has been implemented correctly\n";
	string message2 = "\nOh no, test failed\n";

	cout << "\n--------------testEmployee------------------\n";
	testEmployee();

	cout << "--------------testMinimalEmployeeSalary------------------";
	testMinimalEmployeeSalary();

	cout << (testMinimalEmployeeSalary() == correctMinimalSalary ? message1 : message2);

	return 0;
}

void testEmployee()
{
	Employee E1; //default constructor

	E1.set_firstName("Bob");  //parameterized constructor
	E1.set_lastName("Ross");

	Employee E2("Leo", "Vinci", 30000); //parameterized constructor

	Employee E3(E2); //copy constructor

	cout << "E1 first name: " << E1.get_firstName() << " E1 last name: " << E1.get_lastName() << " E1 monthly salary (default int value): " << E1.get_monthlySalary() << "\n";
	cout << "E2 first name: " << E2.get_firstName() << " E2 last name: " << E2.get_lastName() << " E2 monthly salary: " << E2.get_monthlySalary() << "\n";
	cout << "E3 first name: " << E3.get_firstName() << " E3 last name: " << E3.get_lastName() << " E3 monthly salary: " << E3.get_monthlySalary() << "\n";

}

int testMinimalEmployeeSalary()
{
	Employee anotherArray[10];


	for(int i = 0; i < 10; i++)
	{
		anotherArray[i].set_firstName("Tom");
		anotherArray[i].set_lastName("Hanks");
		anotherArray[i].set_monthlySalary((i + 1) * 1000);
	}

	int minSalary = anotherArray[0].get_monthlySalary();


	for(int i = 0; i < 10; i++)
	{
		cout << anotherArray[i].get_monthlySalary() << endl;

		if(anotherArray[i].get_monthlySalary() < minSalary)
		{
			minSalary = anotherArray[i].get_monthlySalary();
		}
	}

	return minSalary;
}
