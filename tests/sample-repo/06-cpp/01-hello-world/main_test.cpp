#include <catch2/catch_test_macros.hpp>
#include <string>

// Forward declaration of the student's function
std::string greeting();

TEST_CASE("greeting returns correct string", "[greeting]") {
    REQUIRE(greeting() == "Hello, World!");
}