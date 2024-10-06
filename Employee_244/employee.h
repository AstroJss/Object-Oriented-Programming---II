#pragma once

#include <iostream>
#include <string> //external library string to use string for data members
using namespace std;

//class implementation
class Employee{

	//private data members:
private:
	string firstName, lastName;
	int monthlySalary;

	//public member functions:
public:

	Employee(); //default constructor

	Employee(string f_n, string l_n, int m_s); //parameterized constructor

	Employee(const Employee&); //copy constructor

	//set functions for all the data members:
	void set_firstName(string f_n);
	void set_lastName(string l_n);
	void set_monthlySalary(int m_s);

	//get functions for all the data members
	string get_firstName() const;
	string get_lastName() const;
	int get_monthlySalary() const;

	~Employee(); //destructor for class Employee
};


