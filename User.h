#include <iostream>
#include <fstream> 
#include <cstring>
#include <string>
using namespace std;

#pragma once
class User
{
private:
	string username, password, email, shipping;
	int cellnumber; //can be renamed later
	int creditcard;
	int choice;

public:
	void ViewAccount();
	bool loginStatus();
	void userChoice();
	
};

