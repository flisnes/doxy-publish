/**
 * @file dummy.c
 * @brief Main file for the dummy project to test Doxygen documentation.
 *
 * This file demonstrates a simple main function that calls two functions:
 * one defined in this file and another from a utility module.
 * It also includes an embedded Graphviz dot graph to illustrate Doxygen’s
 * support for Graphviz.
 */

#include <stdio.h>
#include "utils.h"

/**
 * @brief Adds two integers.
 *
 * This function returns the sum of two integer values.
 *
 * @param a First integer.
 * @param b Second integer.
 * @return int The sum of a and b.
 */
int add(int a, int b) {
    return a + b;
}

/**
 * @brief Main function.
 *
 * This is the entry point of the program. It demonstrates the use of the
 * add() function defined in this file and the multiply() function defined
 * in the utils module.
 *
 * It also includes an embedded Graphviz dot graph:
 * @dot
 * digraph example {
 *   node [shape=ellipse];
 *   "Start" -> "Call add";
 *   "Call add" -> "Call multiply";
 *   "Call multiply" -> "End";
 * }
 * @enddot
 *
 * @return int Returns 0 upon successful execution.
 */
int main(void) {
    int sum = add(3, 4);
    int product = multiply(3, 4);
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    return 0;
}
