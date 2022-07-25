#include "User.h"

void User::ViewAccount()
{
	cout << "1. Edit Account Information" << endl;
	cout << "2. Logout" << endl; 
	cout << "3. Delete Account" << endl;
}

bool User::loginStatus()
{
	string un, pw; //comparison strings

	cout << "Enter a username: ";
	cin >> username;

	cout << "Enter password: ";
	cin >> password;

	//ifstream read variable for checking for the account.
	ifstream read(username + ".txt");

	getline(read, un); //for reading the user name in the account
	getline(read, pw); //reading the password

	//comparison

	if (un == username && pw == password)
	{
		return true;   //The user is can log in.
	}
	else
	{
		return false; //otherwise, they can't. Basically.
	}
}
void User::userChoice()
{
	cout << "1: Create Account \n2: Login\n3: Exit.\n\n";
	cin >> choice;

	if (choice == 1)
	{

		cout << "Select a username: ";
		cin >> username;
		cout << "Select a password: ";
		cin >> password;
		cout << "Email: ";
		cin >> email;
		cout << "Enter a shipping address: ";
		cin >> shipping;
		cout << "Enter a phone number: ";
		cin >> cellnumber;
		cout << "Enter your credit card number: ";
		cin >> creditcard;

		//

		ofstream file;
		//open file using the file.open function
		file.open(username + ".txt");

		//Reading the user-entered data into the file.
		file << username << endl << password << endl << email << endl << shipping << endl << cellnumber << endl << creditcard;
		file.close();
		cout << "\nAccount Created!\n" << endl;

		//going back to UserChoice(). To access further features, the user will have to log in.
		userChoice();
	}

	//If the user chooses '2', the loginStatus() function runs to determine whether or not a user can log in.
	else if (choice == 2)
	{
		//create a variable 'status' and assign to loginStatus in function

		bool status = loginStatus();

		if (!status) //if the user enters an invalid username or password, a statement will print to the screen.
		{
			cout << "Invalid login.\n" << endl;
			system("PAUSE");
			userChoice();

		}
		else //otherwise, the user is logged in.
		{
			cout << "You have successfully logged in.\n" << endl;
			//system("pause");
			ViewAccount(); //once the user logs in, they will be taken to the main account page.
			//return 1;
		}
	}
	//close program if user types in x. 
	else if (choice == 3)
	{
		cout << "\nClosing program. Goodbye." << endl;
	}
}