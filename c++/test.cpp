#include <iostream> 

using namespace std;

int main() {
	// Int & String data types 
	int age = 15; 
	string name = "Naowal"; 

	cout << "Hello World!" << endl; 
	cout << "My name is " << name << "!" << endl; 
	cout << "I am " << age << " years old!" << endl;
	
	// Char data type
	char grade = 'A';
	cout << 'A' << "\n";

	// double data type 
	// don't worry about float!
	double gpa = 4.0;
	cout << "My GPA is " << gpa << "!" << endl;

	// Boolean data type
	bool isMale = true; 
	cout << isMale << "\n\n"; // when printed, vals are either 1 or 0

	// string functions 

	cout << "Working with string `name`, 'Naowal'" << endl;
	
	cout << "length: " << name.length() << endl; // length of string

	// c++ zero-indexed, so index 0 is the first letter
	cout << "first letter: " << name[0] << endl; // first letter of string
	cout << "second letter: " << name[1] << endl; // second letter of string
	cout << "first letter, but different: " << name.at(0) << endl; // same as above

	name[0] = 'B'; cout << name << "\n"; // change letter in string with index

	cout << "letter 'a' in string Naowal: index "
	<< name.find("a", 2) << endl; // find index of letter, starting at index 2

	cout << name.substr(2, 3) << endl; // get substring from index 2 until length is 3
	string nameSub = name.substr(1, 4); // store subtring in new variable
	cout << nameSub << endl;







	return 0;
}
