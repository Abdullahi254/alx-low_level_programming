#include "main.h"
/**
 * read_textfile - reads text from a file
 * @filename: file name to be read
 * @letters: number of letters it should read and print
 * Return: number if letters on syccess, -1 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, w, r;
	FILE *file;

	if (filename == NULL)
		return (0);
	file = malloc(sizeof(char) * letters);

	if (file == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, file, letters);
	w = write(STDOUT_FILENO, file, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(file);
		return (0);
	}
	free(file);
	close(o);

	return (w);

}
