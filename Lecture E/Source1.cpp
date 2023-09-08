#include <iostream>	

using namespace std;


enum class season { spring, summer, fall, winter };


int main()
{
	int ui1 = 400000000000000000;

	int si1 = 200000000;

	cout << "ui1" << ui1 << endl;
	cout << "si1" << si1 << endl;

	return 0;



	
	season now = season::fall;

	

}

string season_to_string(season which)
{
	switch (which)
	{
	case season::fall:
		return "fall";
	case season::spring:
		return "spring";
	case season::summer:
		return "summer";
	case season::winter:
		return "winter";

	}
