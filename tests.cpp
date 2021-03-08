// Test definitions. Do NOT edit this file!

#include <tuple>

//#define CATCH_CONFIG_MAIN // defines main() automatically
#include "lib/catch.hpp"
#include "main.hpp"
#include <string.h>
#include <math.h>


// =====================
// tests for exercise 1
// ---------------------

TEST_CASE("Test1", "[h]")
{
    float expected = -1.0;
    int n = 0;
    INFO("Testing default (h(0) = 0)");
    REQUIRE(fabs(expected - h(n)) < 0.01 );
}

TEST_CASE("Test2", "[h]")
{
    float expected = 1.0;
    int n = 1;
    INFO("Testing for h(1) = 1");
    REQUIRE(fabs(expected - h(n)) < 0.01 );
}

TEST_CASE("Test3", "[h]")
{
    float expected = 2.2833;
    int n = 5;
    INFO("Testing for h(5) = 2.28...");
    REQUIRE(fabs(expected - h(n)) < 0.01 );
}

TEST_CASE("Test4", "[h]")
{
    float expected = 6.7928;
    int n = 500;
    INFO("Testing for h(500) = 6.79...");
    REQUIRE(fabs(expected - h(n)) < 0.01 );
}

// =====================
// tests for exercise 2
// ---------------------

TEST_CASE("Test5", "[Palindrom]")
{
    int expected = 1;
    char text[] = "amanaplanacanalpanama";
    int actual = isPalindrom(text, 0, (int)strlen(text)-1);
    INFO("Testing if word \"amanaplanacanalpanama\" is a palindrom");
    REQUIRE(expected == actual);
}

TEST_CASE("Test6", "[Palindrom]")
{
    int expected = 0;
    char text[] = "covid19";
    int actual = isPalindrom(text, 0, (int)strlen(text)-1);
    INFO("Testing if word \"covid19\" is a palindrom");
    REQUIRE(expected == actual);
}

TEST_CASE("Test7", "[Palindrom]")
{
    int expected = 1;
    char text[] = "reliefpfeiler";
    int actual = isPalindrom(text, 0, (int)strlen(text)-1);
    INFO("Testing if word \"reliefpfeiler\" is a palindrom");
    REQUIRE(expected == actual);
}

TEST_CASE("Test8", "[Palindrom]")
{
    int expected = 0;
    char text[] = "ab";
    int actual = isPalindrom(text, 0, (int)strlen(text)-1);
    INFO("Testing if word \"ab\" is a palindrom");
    REQUIRE(expected == actual);
}

// =====================
// tests for exercise 3
// ---------------------

TEST_CASE("Test9", "[isPrime]")
{
    int expected = 0;
    int actual = isPrime(0);
    INFO("Testing if 0 is a prime number");
    REQUIRE(expected == actual);
}

TEST_CASE("Test10", "[isPrime]")
{
    int expected = 0;
    int actual = isPrime(1);
    INFO("Testing if 1 is a prime number");
    REQUIRE(expected == actual);
}

TEST_CASE("Test11", "[isPrime]")
{
    int expected = 1;
    int actual = isPrime(2);
    INFO("Testing if 2 is a prime number");
    REQUIRE(expected == actual);
}

TEST_CASE("Test12", "[isPrime]")
{
    int expected = 1;
    int actual = isPrime(71);
    INFO("Testing if 71 is a prime number");
    REQUIRE(expected == actual);
}

TEST_CASE("Test13", "[isPrime]")
{
    int expected = 0;
    int actual = isPrime(20);
    INFO("Testing if 20 is a prime number");
    REQUIRE(expected == actual);
}

TEST_CASE("Test14", "[isPrime]")
{
    int expected = 1;
    int actual = isPrime(509);
    INFO("Testing if 509 is a prime number");
    REQUIRE(expected == actual);
}
