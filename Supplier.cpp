#include<iostream>
#include<cstring>
#include "Supplier.h"
using namespace std;


//Constructor 
Supplier:: Supplier(int id, string name, int cNo, string email)
{
	supplierId= id;
	strcpy( supplierName, name);
	supplierContactNum= cNo;
	strcpy(supplierEmail, email);
}
Supplier::~ Supplier()
{
	//Destructor
}
