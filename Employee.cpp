#include <iostream>
#include"Employee.h"
#include <cstring>
using namespace std;



Employee::Employee(int id, char name[], char descr[])
{
	EmployeeID=0;
	strcpy (EmployeeName, name);
	strcpy (EmployeeUserName, uname);
	strcpy (EmployeePassword, password );
}
