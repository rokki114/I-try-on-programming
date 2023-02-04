#include <iostream>
#include <string>
#include "A1.h"

int A1(int &a, int &b)
{
    std::cout<<"You can do"<<std::endl<<"1. sum"<<std::endl<<"2. multiplication";
    std::cout<<"insert the number";
    int number;
    std::cin>>number;
    int result =0;
    if (number=1) {result=a+b;}
    else if(number=2){ result=a*b;}
    else {return 1;  }
    
    std::cout<<result;

    return 0;
}