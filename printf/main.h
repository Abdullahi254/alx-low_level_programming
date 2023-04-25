#ifndef MAIN_H
#define MAIN_H

/**
 * struct format - match the conversion specifiers for printf
 * @id: char pointer of the specifier
 * @f: pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int _putchar(char c);
int _printf(const char *format, ...);

#endif
