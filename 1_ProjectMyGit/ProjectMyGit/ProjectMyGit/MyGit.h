#pragma once
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;

class MyGit
{
private:
	string mygitPathProject;
	char mygitCommandSet[128];

public:
	// Get command
	void mygitSetCommand(char const* cmdIn);
	string mygitGetCommand();

	// Function using for Get/Set
	void mygitSetPath(string path);
	string mygitGetPath();

	// Function decode command
	
	// Function using for GIT
	void mygitInit(string pathProject);
	void mygitStatus();
	void mygitAdd();
	void mygitCommit();
	void mygitPush(); 
};

