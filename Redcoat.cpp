//============================================================================
// Name        : Chance Borba
// Class      :  CS 2500
// Assignment : Encrypted Message
// Due Date  : 9 - 21 -18
// Description : This program will ask user for a message and a code with which to encrypt the message and then print out the converted message
//============================================================================

#include <iostream>
#include <string>
using namespace std;



// This classs contains the variable and function prototypes in order to access those members
class Redcoats
{
public:
	void getMessage();
	void getCode();
	void printOut();

private:
	string message;
	int code;

	char encrypt(char);
	string encryptAll();

}; // end Redcoats

int main()
{
		Redcoats redcoat;
		redcoat.getMessage();
		redcoat.getCode();
		redcoat.printOut();


	return 0;
} // end main


// This function to prompt user for the messaged they want encrypted
void Redcoats::getMessage()
{

	cout << "Enter a message to encrypt: ";
	getline(cin, message);
	cout << "The message you entered was as follows: " << message << endl << endl;
} // end getMessage

// This function prompts the user to enter the code with which to encrypt the message
void Redcoats::getCode()
{
	cout << "Enter the code with which to encrypt the message: ";
	cin >> code;
	cout << "The code you entered was as follows: " << code << endl << endl;

} // end getCode
void Redcoats::printOut()
{

	cout << encryptAll();

}
// This function takes a single character as a parameter and encrypts it if it meets requirements
char Redcoats::encrypt(char ch)
{
	if(ch == ' ')
		return ch;
	else
		ch = static_cast<int>(ch + code);

	return ch;

} // end encrypt

// Function passes char to encrypt function to do one character at a time
string Redcoats::encryptAll()
{
	unsigned int n;
	for (int n = 0; n < message.length(); n++)

		message[n] = encrypt(message[n]);


	return message;
}
