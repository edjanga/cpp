//
//  main.cpp
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include "BlackScholes.hpp"

using namespace std;


int main()
{
    BlackScholes bsPaths(0.2,0.5,1000,10000,100,0.01);
    return 0;
}
