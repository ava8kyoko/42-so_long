#include "libft.h"

char	**remalloc_it(char **old, int size, char free)
{
	char	**new;
	size_t		i;

	if (old == 0)
		return (0);
	new = ft_calloc(sizeof(char *), (size_array(old) + size));
	if (!new)
		return (0);
	i = -1;
	while (old[++i])
		new[i] = ft_strdup(old[i]);
	if (free == 'f')
		free_array(old);
	return (new);
}
