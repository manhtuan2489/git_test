#include "MyGit.h"
#include "global.h"

#include <stdio.h> 

void MyGit::mygitSetPath(string path)
{
	this->mygitPathProject = path;
}

string MyGit::mygitGetPath()
{
	return this->mygitPathProject;
}

string MyGit::mygitGetCommand()
{
	return this->mygitCommandSet;
}

void MyGit::mygitSetCommand(char const* cmdIn)
{
	strcpy_s(this->mygitCommandSet, cmdIn);

	cout << "Command set: " << this->mygitCommandSet << endl;
}

