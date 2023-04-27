#include <stdio.h>


void my_function(void) __attribute__ ((constructor));
/**
 * my_function - executed before main function
 * Return: void
 */
void my_function(void) {
	printf("You're beat! and yet, you must allow,"
			"\nI bore my house upon my back!\n");
}
