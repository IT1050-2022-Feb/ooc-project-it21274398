#include<iostream>
#include"User.h"
#include"Services.h"

class guestUser:public User {
	private:
		int userID;
		char nameinFull[50];
		char contactNo[10];
		char NIC[12];
		char address[60];
		char gender[1];
	
	
	public:
		guestUser();
		guestUser(int CUuserId, char CUnameinFull[50], char CUcontactNo[10], char CUnic[12], char CUaddress[60], char CUgender[1]);
		void searchServices(Services*s);
		void registerUser();
		~guestUser();
		
		
};