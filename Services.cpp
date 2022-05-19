#include <iostream>
#include <cstring>
#include"Services.h"
using namespace std;

Services::Services(char id[], char name[], char descr[])
{
	strcpy (serviceID, id);
	strcpy (serviceName, name);
	strcpy (Description, descr);
}