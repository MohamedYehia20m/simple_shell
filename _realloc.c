#include "shell.h"

/**
 * _realloc - reallocates a block of memory
 * @ptr: pointer to previous allocated block
 * @old_size: byte size of previous block
 * @new_size: byte size of new block
 *
 * Return: pointer to new block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_address;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	new_address = malloc(new_size);
	if (!new_address)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		new_address[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (new_address);
}
