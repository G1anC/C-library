/*
** EPITECH PROJECT, 2018
** realo
** File description:
** realo function
*/

# include "../INCLUDE/my.h"

static void *my_memalloc(size_t size)
{
	void *mem = malloc(size);

	for (int i = 0; i < n; i++)
		((char *) mem)[i] = 0;
	return mem;
}

extern char *my_realloc(void *ptr, size_t prev, size_t new)
{
	void *new = my_memalloc(new);
	size_t big = (prev < new) ? prev : new;

	for (size_t i = 0; i < big; i++)
		(PTR new)[i] = (PTR ptr)[i];
	free(ptr);
	return new;
}

extern char *reallo(char *src, int to_add)
{
  	char *str;
  	int i = 0;

  	while (src[i++]);
  	str = ncpy(malloc(i + to_add + 2), src, len(src));
  	free(src);
  	return str;
}