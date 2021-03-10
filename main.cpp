#define CATCH_CONFIG_RUNNER
#define TEST 1 // Always change to 1 before your final submission to Github Classroom.
#include "lib/catch.hpp"
#include "main.hpp"
#include <stdlib.h>

// DO NOT CHANGE THIS METHOD
int runCatchTests(int argc, char* const argv[])
{
    return Catch::Session().run(argc, argv);
}

// =====================
// Exercise 1 - Harmonische Reihe
// ---------------------
float h(int n){
    return 0;
}

// =====================
// Exercise 2 - Palindrom Checker
// ---------------------
int isPalindrom(char *text, int left, int right){
    return -1;
}

// =====================
// Exercise 3 - isPrime
// ---------------------

// Define an additional prototype here like:
// int isPrime_(int n, int m);
// to use as a recursive funtion called by int isPrime(int n)

int isPrime(int n){
    return -1;
}


/*
 Test your C knowledge in the main function, but leave the very last lines of code unchanged. 
 */
int main(int argc, char* const argv[] ){
    // TODO Call your functions and experiment with C
    
    // =====================
    // Exercise 1
    // ---------------------
    // read some int n from the console
    // or simply set a variable
    // call function h within a printf statement to verify its result
    
    
    
    
    

    // =====================
    // Exercise 2
    // ---------------------
    // Initialize a char array with some text
    // call isPalindrom and save its result
    // print the result of the method call
   

    
    
    
    
    
    // =====================
    // Exercise 3
    // ---------------------
    // call isPrime with a positive, natural number
    // print the result of the method call
    

    
    
    
    
    
    
    // DO NOT CHANGE CODE AFTER THIS LINE
    // This is where automatic testing starts, when the define macro constant is set to 1.
    // For local development you can set the constant to 0 until you finished your implementation.
    // Don't just program against the test cases. Also "play" with your source code and experiment with C.
    if (TEST){
        return runCatchTests(argc, argv);
    }
    return 0;
}






