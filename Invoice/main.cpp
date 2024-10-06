#include <iostream>
using namespace std;
#include "Invoice.h"
#include<string>

// Driver to test class

int pass=0;
int fail=0;
int number_of_tests = 0;

//Parameterized constructor
void testInvoice () {
    Invoice invc1("SN1434", "black", 2, 60);

    // testing copy constructor
    Invoice invc2(invc1);

    number_of_tests++; // counting total number of test

    // testing constructor and getters
    string message = (invc1.getPartNumber() == invc2.getPartNumber()) &&  (invc1.getPartDescription() == invc2.getPartDescription())
    && (invc1.getItemPrice() == invc2.getItemPrice() && (invc1.getItemQuantity() == invc2.getItemQuantity())) ? "Passed": "Failed";

    if((invc1.getPartNumber() == invc2.getPartNumber()) && (invc1.getPartDescription() == invc2.getPartDescription())
    && (invc1.getItemPrice() == invc2.getItemPrice() && (invc1.getItemQuantity() == invc2.getItemQuantity()))) {
        pass++;
    }
    else{
        fail++;
    }
    cout<<"Test invoice: "<< message<<endl;
}
//Task 1.3 testing invoice amount
void testInvoiceAmount(){
    Invoice invc4("SEM024", "RED", 3, 70);

    number_of_tests++; // counting total number of test

string message2 = invc4.getInvoiceAmount() == 210 ? "Passed": "Failed";

    // testing invoice amount , if it is pass or fail
    if(invc4.getInvoiceAmount()==210) {
        pass++;
    }
    else{
        fail++;
    }
cout<<"Test Invoice Amount: "<< message2<<endl;
}

// testing clone function
 void testClone(){
    Invoice invc3 ("ZH030", "green", 4, 70);
    Invoice invc4Clone = invc3.clone(); // clone invc3 and store the clone in invc4 clone

    number_of_tests++; //counting total number of test

    // testing clone function for each data member
    string message = (invc3.getPartNumber() == invc4Clone.getPartNumber()) &&  (invc3.getPartDescription() == invc4Clone.getPartDescription())
    && (invc3.getItemPrice() == invc4Clone.getItemPrice() && (invc3.getItemQuantity() == invc4Clone.getItemQuantity())) ? "Passed": "Failed";

    // testing clone function if it is pass or fail
    if((invc3.getPartNumber() == invc4Clone.getPartNumber()) &&  (invc3.getPartDescription() == invc4Clone.getPartDescription())
    && (invc3.getItemPrice() == invc4Clone.getItemPrice() && (invc3.getItemQuantity() == invc4Clone.getItemQuantity()))) {
        pass++;
    }
    else{
        fail++;
    }
    cout<<"Test clone: "<<message<<endl;
}

int main(){

    // Driver to test class and different cases

    cout << "----------------- testInvoice-----------------------"<<endl; // testing invoice
    testInvoice();

    cout << "----------------- testClone-------------------------"<<endl; //testing clone
    testClone();

    cout << "----------------- testInvoiceamount-----------------"<<endl;//testing invoice amount
    testInvoiceAmount();

    cout << "----------------- Total number of test cases--------"<<endl; //testing total number of cases tested
    cout<<"Tests passed: "<<pass<<"/"<<number_of_tests<<endl;
    cout<<"Tests failed: "<<fail<<"/"<<number_of_tests<<endl;

    return 0;
}



