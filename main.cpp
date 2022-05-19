#include "User.h"
#include "Registered_user.h"
#include "guestUser.h"
#include "user_account.h"
#include "Services.h"
#include "Project.h"
#include "Payment.h"
#include "Employee.h"
#include "Supplier.h"
#include "items.h"
#include "Order.h"
#include "Report.h"

#include<cstring>
#include <iostream>

using namespace std;

int main()
{
 //---- Creating Objects ------
	
	User* registeredUser = new Registered_User(); // Object - Registered_User class
	User* Guest_User = new guestUser(); // Object -guestUser class
 	user_account* userAccount = new user_account(); // Object - user_account class
 	Services* services = new Services(); // Object - Services class
 	Project* project = new Project(); // Object - Project class
 	Payment* payment = new Payment(); // Object - Payment class
 	Employee* employee = new Employee(); // Object - Employee class
	items* Item = new items(); // Object - items class
	Order* order = new Order(); // Object - Order class
	Report* report = new Report(); // Object - Report class
	Supplier* supplier = new Supplier(); // Object - Supplier class

 //----------------Calling Methods-------------------------

 	registeredUser->displayUserDetails();
 	registeredUser->searchServices();
 	registeredUser->applyForServices();
	registeredUser->makePayment();
	Guest_User->SerchServices();
	Guest_User ->RegisterUser();
 	services->displayServiceDetails();
	services->setDescription();
    services->setServiceName();
	services->setService();
 	project->displayProjectDetails();
	project->updateProjectDetails();
 	payment->displayPaymentDetails();
	payment->validatePaymentDetails();
 	userAccount->Login();
	userAccount->DisplayAccountDetails();
	userAccount->setAccountDetails();
	userAccount->AddUpdateDetails();
	employee->login();
	employee->addProjectDetails();
	employee->displayProjectDetails();
 	order->login();
	order->addRawMaterials();
	order->displayMaterialDetails();
	supplier->displaySupplierDetails();
 	Item->setCheckStockStatus();
	Item->addStock();
	Item->deleteStock();
 	Item->setUpdateStock();
	report->storeReportDetails();
	report->displayReportDetails();
 	
 //-----------------------Delete Dynamic objects---------------------------------
 
 delete registeredUser;
 delete services;
 delete project;
 delete payment;
 delete userAccount;
 delete employee;
 delete order;
 delete supplier;
 delete Item;
 delete report;
 delete Guest_User;
 return 0;
 }


