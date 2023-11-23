#include <iostream>
#include "EddystoneUID.hpp"

int main()
{
    Eddystone balise;
    balise.init();
    balise.diffuse();
    return 0;
}