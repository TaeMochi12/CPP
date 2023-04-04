// main.cpp
#include <iostream>
using namespace std;

#include "namespaces.h"

  // Using directive.

int main()
{
    
    // we can also specifically call the various methods of namespaces by function decalration 
    using ns2::hello;

    // using namespace directive keyword we can use the namepaces easily
    using namespace ns1;
    print_text();
    // Calling the hello() function.
    hello();
    
    return 0;
}
