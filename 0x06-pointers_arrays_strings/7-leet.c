/**
 * leet - Encodes a string into 1337
 * @str: The string to be encoded
 * Return: A pointer to the encoded string
 */
char *leet(char *str)
{
	char *orig = str;
	char *leet = str;
	char c;

	while ((c = *str++))
	{
		if (c == 'a' || c == 'A')
		{
			*leet++ = '4';
		}
		else if (c == 'e' || c == 'E')
		{
			*leet++ = '3';
		}
		else if (c == 'o' || c == 'O')
		{
			*leet++ = '0';
		}
		else if (c == 't' || c == 'T')
		{
			*leet++ = '7';
		}
		else if (c == 'l' || c == 'L')
		{
			*leet++ = '1';
		}
		else
		{
			*leet++ = c;
		}
	}
	*leet = '\0';
	return (orig);
}
