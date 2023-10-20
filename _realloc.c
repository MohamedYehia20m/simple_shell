#include "shell.h"

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: a pointer to the memory previously allocated with a call to
 *	malloc: malloc(old_size).
 * @old_size: the size, in bytes, of the allocated space for ptr.
 * @new_size: the new size, in bytes of the new memory block.
 *
 * Return: pointer to the new allocted memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newPtr;
	char *oldPtr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	else if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	oldPtr = ptr;
	newPtr = malloc(new_size);
	if (newPtr == NULL)
		return (NULL);
	if (old_size < new_size)
		for (i = 0; i < old_size; i++)
			newPtr[i] = oldPtr[i];
	else
		for (i = 0; i < new_size; i++)
			newPtr[i] = oldPtr[i];
	free(ptr);
	return (newPtr);
}
