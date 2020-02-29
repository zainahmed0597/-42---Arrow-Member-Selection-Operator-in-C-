#include <iostream>
#include "Sally.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    Sally sallyObject;
    Sally *sallyPointer = &sallyObject;

    sallyObject.printCrap();
    sallyPointer->printCrap();
}
