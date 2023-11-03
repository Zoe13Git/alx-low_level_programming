#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a mem block using malloc and free
 * @ptr: pointer to previous memory
 * @old_size: initial size of ptr
 * @new_size: size of ptr tobe
 * Return: void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
	{
		new_ptr = malloc(new_size);
		if (new_ptr)
		{
			memcpy(new_ptr, ptr, old_size);
			free(ptr);
		}
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}

	return (new_ptr);
}
