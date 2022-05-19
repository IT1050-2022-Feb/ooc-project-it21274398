#include<iostream>
#include<cstring>
#include"Order.h"
#include"Supplier.h"
#include"Registered_user.h"




class Payment {
	private:
		char paymentID[];
		char Type[];
		float Amount;
		char Date[];
	public:
		Payment (char id[], char type[], float amount, char date[]);
		void setPaymentDetails (char id[], char type[], float amount, char date[]);
		void validatePayment();
		void displayPaymentDetails();
		~Payment();
};