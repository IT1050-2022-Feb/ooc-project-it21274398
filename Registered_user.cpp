#include <iostream>
#include <cstring>
#include"Registered_user.h"

using namespace std; 

Registered_user::Registered_user(char Username[], char id[], char name[], char nic[], char address[], int contactNo, char gender[], char email[]) : User (Username, id, name))
{
	strcpy (NIC, nic);
	strcpy (Address, address);
	ContactNo = contactNo;
	strcpy (Gender, gender);
	strcpy (Email, email);
}