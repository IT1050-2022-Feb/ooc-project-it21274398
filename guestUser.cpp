#include<iostream>
#include"guestUser.h"
#include<cstring>
using namespace std;
//Constructor
guestUser::guestUser()
{
	userID=0;
	strcpy(nameinFull,"");    
	strcpy(contactNo,"");
	strcpy(NIC,"");
	strcpy(address,"");
	strcpy(gender,"");
}
//overload consructor
guestUser::guestUser(int CUuserId, char CUnameinFull[50], char CUcontactNo[10], char CUnic[12], char CUaddress[60], char CUgender[1])
{
	userID=CUuserId;
	strcpy(nameinFull,CUnameinFull);
	strcpy(contactNo,CUcontactNo);
	strcpy(NIC,CUnic);
	strcpy(address,CUaddress);
	strcpy(gender,CUgender);
}

void guestUser::searchServices(Services*s)
{
}
void guestUser::registerUser()
{
}

guestUser::~guestUser()
{
//Destructor 
}
