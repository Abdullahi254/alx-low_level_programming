#include "main.h"
/**
 * create_file - creates a new file
 * @filename: pointer to file being created
 * @text_content: string to write to file
 * Return: 1 if success or -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, i;

	i = 0;
	if (filename == NULL)
		return (-1);
	o = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (o == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
		w = write(o, text_content, i);
	}
	if (w == -1)
		return (-1);
	return (1);
}
