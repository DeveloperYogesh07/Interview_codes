// main.c
#include <stdio.h> // Include standard library headers
#include "myHeader.h" // Include your custom header file

int main() {
    int result = add(5, 3); // Call the add function
    printf("Result: %d\n", result);

    greet("Alice"); // Call the greet function

    printf("Global variable: %d\n", globalVariable); // Access the global variable
    return 0;
}
