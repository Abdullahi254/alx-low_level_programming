#include "lists.h"
#include <stdio.h>
/**
 *  print_message -function that executes before main
 **/
void print_message(void)
{
	char *string1, *string2;

	string1 = "You're beat! and yet, you must allow,\n";
	string2 = "I bore my house upon my back!\n";
	printf("%s%s", string1, string2);
}
