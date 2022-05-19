#include <iostream>
#include <cstring>
#include<Payment.h>
using namespace std;

Payment::Payment(char id[], char type[], float amount, char date[])
{
	strcpy (paymentID, id);
	strcpy (Type, type);
	Amount = amount;
	strcpy (Date, date);
}