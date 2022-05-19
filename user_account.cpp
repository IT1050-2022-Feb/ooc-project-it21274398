#include "user_account.h"
#include "Registerd_user.h" 
#include<cstring>
#include<iostream>


user_account::user_account()
{
	UserLogin_ID = 0;
	strcpy(UserName, "");
	strcpy(UserPassword, "");
}

void user_account::Login(int cUserId, char UserPassword[10])
{
	
}
void user_account::setAccountDetails(char cUname[20], int cUserId)
{
	
}

void AddUpdateDetails()
{
	
}

void DisplayAccountDetails(int ID, char UserName[30])
{
	
}

user_account::~user_account()
{

}