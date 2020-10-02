#include "./catch.hpp"
#include "FizzBuzz.hpp"

TEST_CASE("Test negatives", "[classic]")
{
	REQUIRE(fizzbuzz(-1) == "-1");
	REQUIRE(fizzbuzz(-2) == "-2");
	REQUIRE(fizzbuzz(-3) == "fizz");
	REQUIRE(fizzbuzz(-4) == "-4");
	REQUIRE(fizzbuzz(-5) == "buzz");
	REQUIRE(fizzbuzz(-6) == "fizz");
	REQUIRE(fizzbuzz(-7) == "-7");
	REQUIRE(fizzbuzz(-8) == "-8");
	REQUIRE(fizzbuzz(-9) == "fizz");
	REQUIRE(fizzbuzz(-10) == "buzz");
}