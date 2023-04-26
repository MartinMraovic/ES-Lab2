#include "mbed.h"

// set value of nth?term to 9 
int nth_term = 9;

// Declare function which will calculate nth fibb term
int fib(int n);

// Main function
int main() {

// Print initial message to terminal 
    printf("Lab 2 program \r\n");

// Loop trough first nth terms of fibb sequence
    for(int i=0; i<nth_term; i++){

        // Calculate and print term
        printf("%d, ", fib(i));
    }
    // Print meesege to indicate end of sewuence
    printf("..!\r\n");
}

// Fibb function
int fib(int n){
    // take an input, calculate part of fibb and return result
    if(n == 0) // 0th fibb number is 0
        return 0;
    if(n == 1) // 1st fibb number is 1
        return 1;
    else{ // for all other values of n, use recursion to calculate nth fibb number
        return (fib(n-1) + fib(n-2));
    }

}