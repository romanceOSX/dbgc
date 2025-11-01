//
// Unit testing
//

#include "dbgc/dbgc.h"

struct Foo {
    int a;
    double b;
    int c;
    char d;
};

void testDbgPrinting() {
    struct Foo f =  {
        122,
        122,
        122,
        5,
    };

    dbgPrintHex(&f, sizeof f); 
}

int main(int argc, char *argv[])
{
    testDbgPrinting();
    return 1;
}

