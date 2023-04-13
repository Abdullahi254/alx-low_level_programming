#include "main.h"
#include <stdlib.h>
/**
 * strtow - splits a string into words
 * @str: string to be split
 * Return: pointer to 2d array
 */
int count_words(char *str)
{
	int i, word_count = 0;

	for (i = 0; str[i]; i++)
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word_count++;

	return (word_count);
}

char *copy_word(char *str, int start, int end)
{
	char *word;
	int i;

	word = malloc(sizeof(char) * (end - start + 1));
	if (word == NULL)
		return (NULL);

	for (i = 0; i < end - start; i++)
		word[i] = str[start + i];
	word[i] = '\0';

	return (word);
}

char **strtow(char *str)
{
	char **words;
	int i, j, k, word_count;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	word_count = count_words(str);
	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; i < word_count; i++)
	{
		while (str[j] == ' ')
			j++;

		for (k = j; str[k] && str[k] != ' '; k++)
		;
		words[i] = copy_word(str, j, k);
		if (words[i] == NULL)
		{
			while (--i >= 0)
				free(words[i]);
			free(words);
			return (NULL);
		}

		j = k;
	}

	words[word_count] = NULL;
	return (words);
}
