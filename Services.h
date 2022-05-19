#include <iostream>
#include <cstring>
#include"Employee.h"



class Services {
	private:
		char serviceID[];
		char serviceName[];
		char Description[];
	public:
		Services(char id[], char name[], char descr[]);
		void setServiceDetails(char id[], char name[], char descr[]);
		void displayServiceDetails();
		~Services();
};