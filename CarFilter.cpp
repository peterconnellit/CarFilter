#include <iostream>
#include <cmath>

using namespace std;

// Main() function: where the execution of program begins
int main()
{
	string ford = "Ford";
	string nisan = "Nisan";
	string volvo = "Volvo";
	string jaguar = "jaguar";
	string n;
	int cylinders;

	int year;

	cout << "Welcome to the car filter selector...\nPlease enter the first initial of your car make as a capital letter (eg ford = F)\n";
	cin >> n;
	cout << "You Entered "<<n<<"\n\n";

	cout << "What is the year of you car? (eg 1995 = 95)\n";
	cin >> year;
	cout << "You Entered " << year << "\n\n";

	cout << "How many cylinders does yor car have? (04,06,08,12,15 or 20)\n";
	cin >> cylinders;
	cout << "You Entered " << cylinders << "\n\n";

	cout << "Your model filter required is..." << n << year << cylinders<<"\n\n";

}