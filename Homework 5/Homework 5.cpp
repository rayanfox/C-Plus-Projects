#include <iostream>
#include <string>

using namespace std;

int main()

{
	const int FeetPerMile = 5280;
	double feet, miles;
	
	cout << "translateing feet to miles!\n";
	cout << "How many feet? >";
	cin >> feet;

	miles = feet / FeetPerMile;

	cout << feet << " feet equals  "
		<< miles << " miles. \n ";
		
	system("pause");

		return 0;
}

