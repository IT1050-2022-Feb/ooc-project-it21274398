#include<iostream>
#include<string>
#include "Registered_user.h" 

class user_account 
{
private:
	int UserLogin_ID;
	char UserName[20];
	char UserPassword[10];
	Registered_user *ruser;
public:

	user_account();
	void Login(int cUserId,char cUserPassword[10]);
	void setAccountDetails(char cUname[20], int cUserId);
	void AddUpdateDetails();
	void DisplayAccountDetails(int ID, char UserName[30]);
	~user_account();
};