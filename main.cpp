#include "mbed.h"

// Declares variables for nth term, previous two terms, and the next term
int nth_term = 9;
int term_1, term_2;
int next_term = 0;

int main() {

    // Print message Lab 2 program to indicate start of the program
    printf("Lab 2 program \r\n");

    // Initialize term_1 and term_2 to 0 and 1
    term_1 = 0;
    term_2 = 1;

    // Print the value of nth_term and the first two terms of the sequence
    printf("nth term is %d \r\n", nth_term);
    
    printf("0, 1, ");

    // Loop through the rest of terms of the sequence
    for(int i=2; i<nth_term; i++){

        // Compute the next term in the sequence
        next_term = term_1 + term_2;

        // Print the next term 
        printf("%d, ", next_term);

        // Update previous two terms for the next iteration of the loop
        term_1 = term_2;
        term_2 = next_term;
    }

    // Print a message to indicate the end of the sequence
    printf("..!\r\n");
}