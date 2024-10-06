#ifndef INVOICE_H
#define INVOICE_H
#include <iostream>
using namespace std;

// Definition of class Invoice

class Invoice {
private:  // data members
    string partNumber;
    string partDescription;
    int itemQuantity;
    int itemPrice;

public: // member functions

    Invoice();     //Constructor

    Invoice(string partN, string partD, int itemQ, int itemP); // initialize constructor

    Invoice(const Invoice& inv); //Task 1.2  copy constructor

    ~Invoice(); // Task 1.3 Destructor for the class


    // set functions
    void setPartNumber (string);
    void setPartDescription(string);
    void setItemQuantity(int);
    void setItemPrice(int);

    // get functions
    string getPartNumber()const;
    string getPartDescription() const;
    int   getItemQuantity() const;
    int   getItemPrice() const;

    //function to return invoice amount
    int  getInvoiceAmount()const;

    //Task 1.4 define a public member function called clone
    Invoice clone() const;

    //Task 1.5 clone pass-by-reference Invoice
    Invoice clone(const Invoice&) const;

};

#endif //INVOICE_H
