#include<iostream>
#include "Invoice.h"
#include <string>
using namespace std;

// Implementation of class Invoice

// default constructor
Invoice::Invoice(): partNumber(), partDescription(), itemQuantity(0), itemPrice(0) {

    cout << "\nDefault constructor invoked\n";
}

// initialize constructor
Invoice::Invoice(string p_n, string p_d, int quant, int ppi): partNumber(p_n), partDescription(p_d), itemQuantity((quant < 0) ? 0 : quant), itemPrice((ppi < 0) ? 0 : ppi) // Ensure that price per item and quantity are non-negative
    {
	cout << "\nParameterized constructor invoked\n";
    }

//Task 1.2 add the copy constructor of class Invoice.
Invoice::Invoice(const Invoice& inv) {

    partNumber= inv.partNumber;
    partDescription = inv. partDescription;
    itemQuantity = inv.itemQuantity;
    itemPrice = inv.itemPrice;

    cout << "\nCopy constructor invoked\n";
}

// set functions
void Invoice::setPartNumber (string pn) {
    partNumber=pn;
};
void Invoice::setPartDescription(string pd){
    partDescription= pd;
};
void Invoice::setItemQuantity(int iq) {
    itemQuantity=iq;
};
void Invoice::setItemPrice(int ip) {
    itemPrice=ip;
};

// get functions

string Invoice::getPartNumber()const {
    return partNumber;
}
string Invoice::getPartDescription() const {
    return partDescription;
}
int Invoice:: getItemQuantity() const {
    return itemQuantity;
};
int Invoice::getItemPrice() const {
    return itemPrice;
};


//Task 1.3 add the destructor of class Invoice.
Invoice::~Invoice() {
    cout << "Destructor invoked\n";
}
//Total price calculation
int Invoice::getInvoiceAmount() const {
    return (itemQuantity * itemPrice);
};

//Task 1.4 clone
Invoice Invoice::clone() const {
    return *this;
}
//Task 1.5....clone the object passed by reference;
Invoice Invoice::clone(const Invoice& other) const{
    return Invoice(other);
}
