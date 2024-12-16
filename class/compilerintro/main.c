// Preprocessor Demonstration

#include <stdio.h>

// Macro definitions
#define PI 3.14159
#define SQUARE(x) ((x) * (x))

// Stringification and Token Pasting
#define CONCAT(a, b) a##b

// Conditional Compilation
#ifdef DEBUG
    #define LOG(msg) printf("DEBUG: %s\n", msg)
#else
    #define LOG(msg)
#endif

int main() {
    // Using macros
    printf("Value of PI: %f\n", PI);
    printf("Square of 5: %d\n", SQUARE(5));

    // Using stringification and concatenation
    int CONCAT(my, Variable) = 42; // Expands to `int myVariable = 42;`
    printf("Concatenated variable: %d\n", myVariable);

    // Conditional compilation
    LOG("This is a debug message.");

    return 0;
}
