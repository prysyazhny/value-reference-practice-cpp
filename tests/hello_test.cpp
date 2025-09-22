#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/hello.hpp"

TEST_CASE( "it returns Hello World" ) {
    REQUIRE( hello() == "Hello World!" );
}

TEST_CASE( "Test Zero" ) {
    int value = 0;
    addOneByReference(value);
    REQUIRE( value == 1 );
}

TEST_CASE( "Test One" ) {
    int value = 1;
    addOneByReference(value);
    REQUIRE( value == 2 );
}