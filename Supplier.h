#include<iostream>
#include<cstring>
#include "Order.h"
#include "items.h"
#define SIZE 7
using namespace std;

//class defenition 
class Supplier{
	private:
		int supplierId;
		string supplierName;
		int supplierContactNum;
		string supplierEmail;
		items * item[SIZE];
		Order * order[SIZE];
	public:
		Supplier(int id, string name, int cNo, string email)
		void displaySupplierDetails();
		void getSupplierName();
		int getSupplierId();
		~Supplier();
	};



