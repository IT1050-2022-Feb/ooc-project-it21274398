#include<cstring>
#include<iostream>
#include "Report.h"

using namespace std;

Report::Report()
{
	Report_ID = 0;
	strcpy(Report_type, "");
}

Report::Report(int pReport_ID, char pReport_type[20])
{
	Report_ID = pReport_ID;
	strcpy(Report_type, pReport_type);
}

void Report::DisplayReportDetails()
{
	
}
Report::~Report()
{

}
