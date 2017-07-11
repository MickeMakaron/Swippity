#include "hello.hpp"
#include "catch.hpp"

TEST_CASE("hello() returns hello", "[hello]")
{
    new float();
    REQUIRE(hello() == "hello");
}
