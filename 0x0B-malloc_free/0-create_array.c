#include <stdib.h>
/**
 * create_array - creates an array of chars and initializes
 * it with a specific char
 * @size: size of array
 * @c: specific char to initialize array
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = (size * sizeof(char));
	if (arr == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;


	return (arr);
}
