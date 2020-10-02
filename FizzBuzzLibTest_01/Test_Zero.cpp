#include "./catch.hpp"
#include "../FizzBuzzLib/FizzBuzzLib.hpp"

TEST_CASE("Test with zero", "[classic]")
{
	REQUIRE(fizzbuzz(0) == "0");
}