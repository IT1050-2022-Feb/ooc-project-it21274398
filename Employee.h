#include<iostream>
#include<cstring>
#include"Services.h"
#include"items.h"
#include"Report.h"
#include"Project.h"
#include"Order.h"
#define SIZE 9
class Employee 
{
private:
	
	int EmployeeID; 
    char EmployeeName[20];
    char EmployeeUserName[20];
    char EmployeePassword[20];

Project * project[SIZE];
public:
    Employee();
    Employee(int pEmployeeID, const char pEmployeeName[], const char pEmployeeUserName[],const char pEmployeePassword[]);

    void login(const char pEmployeeUserName[], const char pEmployeePassword[]);
    void addProjectPlace();
    void displayProjectDetails();
    void createReport(Report*r);
    void orderItems(items*it);
    
    
    ~Employee();
};
