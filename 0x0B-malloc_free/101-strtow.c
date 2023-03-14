#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_words - Count the number of words in a string.
 *
 * @str: Pointer to the string to count words in.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
    int i, count = 0, in_word = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            if (!in_word)
            {
                count++;
                in_word = 1;
            }
        }
        else
        {
            in_word = 0;
        }
    }

    return (count);
}

/**
 * free_words - Free an array of words.
 *
 * @words: Pointer to the array of words to free.
 */
void free_words(char **words)
{
    int i;

    for (i = 0; words[i] != NULL; i++)
    {
        free(words[i]);
    }

    free(words);
}

/**
 * strtow - Split a string into an array of words.
 *
 * @str: Pointer to the string to split.
 *
 * Return: Pointer to the array of words, or NULL on failure.
 */
char **strtow(char *str)
{
    int i, j, k, len;
    char **words;

    if (str == NULL || *str == '\0')
        return (NULL);

    len = count_words(str);
    if (len == 0)
        return (NULL);

    words = malloc(sizeof(char *) * (len + 1));
    if (words == NULL)
        return (NULL);

    for (i = 0, j = 0; j < len; i++)
    {
        if (str[i] != ' ')
        {
            for (k = i; str[k] != ' ' && str[k] != '\0'; k++)
                ;

            words[j] = malloc(sizeof(char) * (k - i + 1));
            if (words[j] == NULL)
            {
                free_words(words);
                return (NULL);
            }

            for (k = 0; str[i] != ' ' && str[i] != '\0'; i++, k++)
            {
                words[j][k] = str[i];
            }

            words[j][k] = '\0';
            j++;
        }
    }

    words[len] = NULL;

    return (words);
}

