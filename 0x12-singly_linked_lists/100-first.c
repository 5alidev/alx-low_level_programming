#include <stdio.h>
#include <stdlib.h>
/**
 * before_main - function that executes before the main
 * function
 *
 * Return : Nothing (void)
 */
void before_main(void) __attribute__((constructor));
void before_main(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
