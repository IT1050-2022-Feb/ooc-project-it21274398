#include<iostream>
#include<cstring>
#include "Project.h"
using namespace std;

//Overload Constructor
Project:: Project( int id, string type, string name)
{
	projectId = id;
	strcpy( projectType, type);
	strcpy( projectName, name);
}

int Project::getProjectId()
{
}
 
void Project:: displayProjectDetails()
{
}
void Project:: updateProjectDetails()
{
}
Project::~Project()
{
//Destructor 
}
