#include "main.h"
#include <stdlib.h>
/**
 * _strdup - creates a pointer ot a newly allocated space in memory
 * @str: string param
 * Return: pointer or NULL
 */
char *_strdup(char *str)
{
int i, size;
char *a;
if (str == NULL)
return (NULL);

for (size = 0; str[size] != '\0'; size++)
{
a = malloc(size * sizeof(*str) + 1);
/** +1 on size puts the end of string car*/
if (a == 0)
return (NULL);
else
{
for (i = 0; i <= size; i++)
a[i] = str[i];
}
}
return (a);
}
