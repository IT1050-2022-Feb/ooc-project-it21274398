#include<iostream>
#include<cstring>
#include "Registered_user.h"
#include "Employee.h"
#define SIZE 2
using namespace std;

//class defenition 
class Project{
	private:
		int projectId;
		string projectType;
		string projectName;
		Registered_user* registered_user;
		Employee * employee[SIZE];
	public:
		Project(int id, string type, string name);
		void displayProjectDetails();
		int getProjectId();
		void updateProjectDetails();
		~Project();
	};
