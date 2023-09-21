#include "lists.h"

/**
 * first - a function that prints You're beat! and yet,
 * you must allow,\nI bore my house upon my back!\n
 * before the main function is executed.
 *
 * Return: void
 */

void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
