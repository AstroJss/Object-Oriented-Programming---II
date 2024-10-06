#include <iostream>
#include "employee.h"
using namespace std;

//class default constructor implementation
Employee::Employee(): firstName(), lastName(), monthlySalary(0)
{
	cout << "\nDefault constructor invoked\n";
}

//class parameterized constructor implementation         : //member initialization list
Employee::Employee(string f_n, string l_n, int m_s): firstName(f_n), lastName(l_n), monthlySalary(m_s)
{
	monthlySalary = (m_s < 0) ? 0 : m_s;

	cout << "\nParameterized constructor invoked\n";
}

//class copy constructor implementation
Employee::Employee(const Employee& other)
{
	firstName = other.firstName;
	lastName = other.lastName;
	monthlySalary = other.monthlySalary;

	cout << "\nCopy constructor invoked\n\n";
}

//implementation for all the class setters:
void Employee::set_firstName(string f_n)
{
	firstName = f_n;
}
void Employee::set_lastName(string l_n)
{
	lastName = l_n;
}
void Employee::set_monthlySalary(int m_s)
{
	monthlySalary = m_s;
}

//implementation for all the class getters
string Employee::get_firstName() const
{
	return(firstName);
}

string Employee::get_lastName() const
{
	return(lastName);
}

int Employee::get_monthlySalary() const
{
	return(monthlySalary);
}

//class destructor implementation
Employee::~Employee()
{
	cout << "Destructor is invoked and employee " << firstName << " " << lastName << " is now destroyed\n";
}
