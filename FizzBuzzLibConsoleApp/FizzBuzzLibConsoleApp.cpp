// FizzBuzzLibConsoleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "../FizzBuzzLib/FizzBuzzLib.hpp"

int main()
{
    std::string result;
    std::cout << "Hello World From FizzBuzzLibConsoleApp !" << std::endl;
    result = fizzbuzz(35);
    std::cout << "fizzbuzz(35) = ";
    std::cout << result << std::endl;
}

