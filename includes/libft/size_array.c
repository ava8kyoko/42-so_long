#include "libft.h"

size_t	size_array(char **array)
{
	size_t	i;

	i = -1;
	while (array[++i])
		;
	return (i + 1);
}
