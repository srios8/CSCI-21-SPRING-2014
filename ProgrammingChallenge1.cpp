/*
 *Stacy Rios
 * Programming Challenge 1
 */
#include <cassert>
#include <iostream>
using namespace std;

string greet (string name);
string checkExperience (char hasExperience);

/* for unit testing -- do not alter */
template <typename X, typename A>
void btassert(A assertion);
void unittest (string s, char c);

int main (int argc, char* argv[])
{
	string userName;
	char programmedBefore = 'z';
	cout << "Welcome!\n";
	cout << "What's your name?\n";
	cin >> userName;
	cout << "Have you programmed in C++ before?\n";
	cin >> programmedBefore;
	
	unittest(userName, programmedBefore);
	
	return 0;
}

/*
 * Create a string greeting that is the concatenation of a message 
 * and a name.
 * @param name a string containing a user name
 * @return the string "Nice to meet you, NAME" where NAME contains 
 *         the parameter value
 */
string greet (string name)
{
	string output =  "Nice to meet you, " + name;
	
	return output;
}

/*
 * Create a string message based upon whether or not a user has C++ 
 * programming experience.
 * @param hasExperience a char ('Y'es or 'N'o) representing whether or 
 *        not a user has C++ programming experience
 * @return "Welcome back" when hasExperience is 'Y', else 'Get ready to 
 *         have some fun"
 */
string checkExperience (char hasExperience)
{
	if(toupper(hasExperience == 'Y'))
	{
	    string output = "Welcome back";
	    return output;
	}
	else if(toupper(hasExperience == 'N'))
	{
	    string output = "Get ready to have some fun";
	    return output;
	}
	else if(toupper(hasExperience != 'Y' || hasExperience !='N'))
	{
	    string output = "Please reply with a Yes or a No";
	    return output;
	}
}

/*
 * Unit test. Do not alter this function.
 */
void unittest (string s, char c)
{
	if (s == "fez")
	{
		cout << "\nSTARTING UNIT TEST\n\n";
		
		try {
			btassert<bool>(greet(s) == "Nice to meet you, fez");
			cout << "Passed TEST 1: greet\n";
		} catch (bool b) {
			cout << "# FAILED TEST 1 greet #\n";
		}
		
		if (toupper(c) == 'Y')
		{
			try {
				btassert<bool>(checkExperience(c) == "Welcome back");
				cout << "Passed TEST 2: checkExperience\n";
			} catch (bool b) {
				cout << "# FAILED TEST 2 checkExperience #\n";
			}
		}
		else if (toupper(c) == 'N')
		{
			try {
				btassert<bool>(checkExperience(c) == "Get ready to have some fun");
				cout << "Passed TEST 2: checkExperience\n";
			} catch (bool b) {
				cout << "# FAILED TEST 2 checkExperience #\n";
			}
		}
		
		cout << "\nUNIT TEST COMPLETE\n\n";
	}
	else
	{
		cout << "\nRun program and enter the name \"fez\" to see unit test output.\n";
	}
}

template <typename X, typename A>
void btassert (A assertion)
{
    if (!assertion)
		throw X();
}
