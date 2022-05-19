#include <iostream>
#include <cstring>
#include"User.h"
using namespace std;

User::User(char Username[], char id[], char name[])
{
	strcpy (username, Username);
	strcpy (userID, id);
	strcpy (Name, name);
}