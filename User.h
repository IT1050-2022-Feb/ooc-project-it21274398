#include<iostream>
#include<cstring>

class User {
	protected:
		char username[];
		char userID[];
		char Name[];
	public:
		User(char Username[], char id[], char name[]);
		void setUserDetails(char Username[], char id[], char name[]);
		void displayUserDetails();
		~User();
};