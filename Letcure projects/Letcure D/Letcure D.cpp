/*

Lecture D
Chapter 2 pages 1 thru 18

*/

// LectureD.cpp 


#include <iostream>
#include <string>

struct Rectangle
{
    double width;
    double height;
};

using namespace std;

int add2(int x, int y)
{
    int result = x + y;
    return result;
}

void greetings()
{
    cout << "Hello!\n";
}


int main()
{

    // write code that will convert from inches to feet. 
    // use this example in your homework.

    const int INCHES_PER_FOOT = 12;
    double inches, feet;
    cout << "Converting inches to feet!\n";
    cout << "How many inches? >";
    cin >> inches;

    feet = inches / INCHES_PER_FOOT;

    cout << inches << " inches equals "
        << feet << " feet.\n";


    cout << "Hit enter to continue";
    string pause;
    cin >> pause;

    // the rest of the lecture

    Rectangle r;
    r.width = 10;
    r.height = 20;


    int result = add2(10, 20);
    cout << "Result = " << result << endl;

    int x;
    x = 1;

    // 1 is a numeric literal or an unnamed constant
    string s;
    s = "Fred";
    // "Fred" is a an unnamed constant
    // it is a string literal


    // named constants

    const double PI = 3.14159;
    const int MAX_FILES = 256;

    const double AVOGADROS = 6.022E23;
    const double atomic_mass_carbon = 12;
    double grams_carbon = 100;

    double molecules
        = grams_carbon / atomic_mass_carbon * AVOGADROS;

    // datatype dictates how the data is stored
    // in memory, and what operations can be done
    // on it.

    int number = 2010101001;
    double f = 0;

    for (int i = 0; i < 10; i++)
    {
        f += 0.1;
    }

    cout << "f = " << f << endl;

    if (f == 1)
        cout << "Yup, one!\n";
    else
        cout << "Nope, not one!\n";

    double delta = abs(f - 1);

    cout << "delta = " << delta << endl;
    // 0.000000119209           float error
    // 0.000000000000000111022  double error

    if (abs(f - 1) < 0.000001)
        cout << "It's close enough to one to count!\n";

    // to sum up, don't use float, use double

    int myage = 87;
    int* p = &myage;
    *p = 88;
    cout << "myage = " << myage << endl;

    return 0;


}

/*


identifiers

names

variable names and function names

letters
digits
underscores

cannot begin with a digit
1985tax is illegal name
tax1985 is legal

grams_carbon   snake case
gramsCarbon    camel case

max_files
maxFiles

uppercase names should be reserved for
constants

all functions and variable names begin with a lowercase
letter.

class names begin with an uppercase letter


*/