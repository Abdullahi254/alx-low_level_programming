#include "main.h"
/**
 * append_text_to_file - appends text to file
 * @filename: file name to where data will be appended to
 * @text_content: text string content
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w;
	int i;

	i = 0;
	if (filename == NULL)
		return (-1);
	o = open(filename, O_RDWR | O_APPEND);
	if (o == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (text_content[i] != '\0')
		i++;
	w = write(o, text_content, i);
	if (w == -1)
		return (-1);
	return (1);
}
