#include <iostream>
using namespace std;


int main()
{
    int x = 3;
    int y = 4;
    // x and y are allocated on the
    // stack.  That memory will be
    // released when the closing brace
    // is hit (return statement is hit)
    cout << "address of x = " << &x << endl;
    cout << "address of y = " << &y << endl;

    x = 1;
    while (x <= 4)
    {
        // allocate on the heap with the new command.
        // this will cause a memory leak if we never
        // "delete" the memory
        int num_ints = x * 1024;
        int* parray = new int[num_ints];
        cout << "Memory allocated!  " << parray << endl;
        x++;
        delete[] parray;
    }
    const int size = 10;
    int number[size];

    // the difference between allocating an array
    // on the stack, like I just showed with code that
    // allocates 10 ints, and allocating on the
    // heap with "new", is that allocating on the
    // stack can only happen with a const size,
    // not a calculated value or a non const
    // variable.

}

// CPU runs on numeric commands called opcodes
// CPU reads and writes to RAM
// registers - really fast memory cells

// instructions are loaded into the same memory
// as data (von neuman architure)

// stack vs heap
//
// local variables are on the stack
//  
// allocated with "new" goes on the heap
// 
// heap memory must be freed with the delete
// command or else you get a memory leak.
// 
// assembly is primitive code of abbreviations
// that is turned into machine (object) code
// by an "assembler" program
//
// C++ source is turned into object code by the
// C++ compiler, which is saved as obj files.
// the linker then links obj files into an
// exe.
//
// when the program runs, the instructions 
// are loaded into memory so the program can
// begin running.

// 1 byte bytes (8 bits)    -> 256 values
// 2 byte short (16 bits)  -> 65536 values
// 4 byte int   (32 bits)  -> up to about 2 billion
// 8 byte long long (64 bits) -> huge


// a class is a blueprint
// for a collection of data and the functions (methods)
// that use that data
//
// an object is the memory allocated using that class as
// a blueprint.

// an example of a class.
// It might not compile - didn't actually put it
// into the editor.

class Rectangle
{
public:
    int height;
    int width;
    int calc_area()
    {
        return height * width;
    }
};

int rec()
{
    Rectangle* p1 = new Rectangle();
    p1->height = 10;
    p1->width = 20;
    int area = p1->calc_area();

    return 0;
}



