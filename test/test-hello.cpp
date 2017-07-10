#include "hello.hpp"
#include "catch.hpp"

TEST_CASE("hello() returns hello", "[hello]")
{
    int a = 1;
    for(size_t i = 0; i < a; i++)
    {

    }
    REQUIRE(hello() == "hello");
}
