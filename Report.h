#include<iostream>
#include<string>
#include"Order.h"
#include"Payment.h"


using namespace std;

class Report
{
	
private:
	int Report_ID;
	char Report_type[20];

public:
	Report();
	Report(int pReport_ID, char pReport_type[20]);
	void generate_PaymentReport(Payment*);
	void generate_OrderReport(Order*)
	void DisplayReportDetails();
	~Report();
};
