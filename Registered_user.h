#include<iostream>
#include<cstring>
#include "user_account.h"
#include "project.h"
#include "Payment.h"
#include"Services.h"

class Registered_user : public User {
	protected:
		char NIC[];
		char Address[];
		int ContactNo;
		char Gender[];
		char Email[];
		user_account *account;
		project *Project[SIZE];
	public:
		Registered_user(char Username[], char id[], char name[], char nic[], char address[], int contactNo, char gender[], char email[]) : User (Username, id, name);
		void setReg_UserDetails(char nic[], char Address[], int ContactNo, char Gender[], char email[]);
		void searchServices(Services*c);
		void applyForServices();
		void makePayment(Payment *P);
		
		void displayUserDetails();
};