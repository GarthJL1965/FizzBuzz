#pragma once

#include <string>

#ifdef FIZZBUZZLIB_EXPORTS   
	#define FizzBuzzLib_API __declspec(dllexport) 
#else   
	#define FizzBuzzLib_API __declspec(dllimport) 
#endif

extern "C" FizzBuzzLib_API std::string fizzbuzz(int const number);