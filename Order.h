#include <iostream>
#include"Payment.h"
#include"Supplier.h"
#define SIZE 8

class Order 
{
private:
	
	int OrderID; 
    char OrderDate[20];
    char OrderDescription[50];
    double OrderPrice;
    Payment* payment[SIZE];
    Supplier* supplier;

public:
    Order();
    Order(int pOrderID, const char pOrderDate[], const char pOrderDescription[],double pOrderprice);

    void displaymatieralDetails(int pOrderID, const char pOrderDate, const char pOrderDescription, double OrderPrice);
    void login();
    void addRawMatierialDetails();
	    
    ~Order();
};
