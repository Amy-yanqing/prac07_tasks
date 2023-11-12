// import <iostream>;
// import <format>;
// import Person;
#include <iostream>
#include "task3Person.h"
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
	Person person { "John", "Doe" };

	Person person2 { "Marc", "Gregoire", "Mg" };

	//Method 1.  standard output console
	person.output(std::cout);
	person2.output(std::cout);

   // Method 2. a string stream
	ostringstream oss;
	person2.output(oss);
	// Verify the contents of the string stream.
	cout << oss.str() << endl;


	// Method 3. save to a file
	ofstream outFile{"person2.text"};
	person.output(outFile);
	person2.output(outFile);

 

	// Test copy constructor.
	// Person copy { person };

	// Test assignment operator.
	// Person otherPerson { "Jane", "Doe" };
	// copy = otherPerson;

	// Test comparison operators.
	// if (person < person2) { cout << "person < person2" << endl; }
	// if (person > person2) { cout << "person > person2" << endl; }
	// if (person <= person2) { cout << "person <= person2" << endl; }
	// if (person >= person2) { cout << "person >= person2" << endl; }
	// if (person == person2) { cout << "person == person2" << endl; }
	// if (person != person2) { cout << "person != person2" << endl; }
}
