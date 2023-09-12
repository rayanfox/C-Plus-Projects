
		
		
		
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    string s = "Hello";
    string w = "Fred ;]";

    cout << s << endl;
    cout << w << endl;

    string e = "";
    e += "My name is ";
    e += "Fred\n";
    cout << e << endl;

    e = "Fred";
    cout << 0 << " " << e[0] << endl;
    cout << 1 << " " << e[1] << endl;
    cout << 2 << " " << e[2] << endl;
    cout << 3 << " " << e[3] << endl;
    cout << 4 << " " << e[4] << endl;

    for (int i = 0; i < 100; i++)
    {
        cout << e[i] << int(e[i]) << endl;

        if (e[i] == 0) // null
            break;


    }

    int number;  // allocate 4 bytes
    number = 12345678;  // put the data in it
    cout << "number byte address = " << &number
        << " value = " << number << endl;




    long long L;
    L = 2000000000;
    int i;
    i = (int)L;
    cout << i << endl;
    L = 9223372036854775807L;

    float f = 1.23f;
    cout << L << endl;
    cout << int(L) << endl;
    cout << (int)L << endl;
    cout << static_cast<int>(L) << endl;

    int x = 3;
    int y = 4;
    cout << x / y << endl;  // 0
    cout << double(x) / y << endl;  // 0.75


    const int MAX_FILES = 1000;

    const int ARRAY_SIZE = 4;
    int phone[ARRAY_SIZE] = { 5,3,0,9 };

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << phone[i] << endl;
    }

    int i1, i2, i3;
    i1 = i2 = i3 = 0;

    int i4 = 0, i5 = 0, i6 = 0;

    int i7, i8 = 10, i9;

    i1 = 0xFF;  // 255

    //i7 = i9;
    // compilation error because
    // i9 was never assigned a value.

    string name;  // declaring it
    name = "Joe";  // assigning

    string lastname = "Rogers";  // initialize

    cout << "enter two numbers\n";
    int n1, n2;
    cin >> n1 >> n2;
    cout << "the sum is " << n1 + n2 << endl;

    cout << "enter first and last name\n";
    string fn, ln;
    cin >> fn >> ln;
    cout << "Enter your age\n";
    int age;
    cin >> age;
    cout << "Your name is " << fn << " " << ln;
    cout << " and your age is " << age << endl;
    double temperature = 12.1231112;
    printf("The temperature is %.2f tonight.\n", 32.099944);

    // format output to only display two digits after
    // the decimal point

    double dd = 123.12391919;

    cout << setprecision(2) << fixed;

    cout << "dd = " << dd << endl;
    // this will display 123.12


    // to control the number of decimal places
    // displayed by cout, 

    // 1.  #include <iomanip>
    // 2.  cout << setprecision(2) << fixed;
    //
    // I used 2, but you could set 1, 5 or whatever
    // places after the decimal point.
}
