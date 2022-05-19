#include "Order.h"
#include <iostream>
#include <cstring>
using namespace std;

Order::Order(int id, char date[], char descr[], double price)
{
	OrderID = id ;
	strcpy (OrderDate, date);
	strcpy (OrderDescription, descr);
	OrderPrice = price;
}

