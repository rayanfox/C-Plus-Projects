// CIT1173
// Lecture B
// Jeff Thompson

/************************

This is a
multiline comment
that goes on and on!

************************/

#include <iostream>

using namespace std;

int main()
{
    int x = 123;
    cout << "x equals " << x << endl;
    cout << "x address = " << &x << endl;
    int* p = &x;
    *p = 456;
    cout << "x equals " << x << endl;

    // if (x == 0);
    //    cout << "Cool beans!  x=0\n";
    //
    // don't put semicolons after
    // if statements or while statements!
    //
    // while (x > 0) {};

    // int  whole number   4 bytes
    //      +- 2 billion
    // long long  whole number  8 bytes
    //      huge integers
    // 
    // float decimal point  4 bytes
    // 
    // double  decimals     8 bytes
    // 0.123456789012345

    /*
    source code  .cpp


    which gets compiled into object code
    (stored in an obj file)

    compilation ...
    preprocessor


    linker which links the obj files
    to create an exe


    */

    return 0;


}
