#include <iostream>
#include <chrono>
#include <thread>
#include <string>


int main()
{
    std::cout<<"Hello"<<std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(3000));
    std::cout<<"enter your name\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(3000));
    std::string name;
    std::cin>>name;
    std::this_thread::sleep_for(std::chrono::milliseconds(3000));
    std::cout<<"Welcome new calculator"<<name;
    
return 0;
}